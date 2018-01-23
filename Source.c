#include <stdio.h>
#include <malloc.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "Russian");
	int n, m;
	printf("Enter size n*m\n");
	scanf ("%d%d", &n, &m);
	int *matx = (int *)calloc(n*m, sizeof(int));
	int *max = (int *)calloc(n, sizeof(int));
	if (max == NULL || matx == NULL) {
		printf("Memory is empty\n");
	}
	//Ввод массива
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("\nEnter item[%d][%d]: ", i, j);
			scanf ("%d", matx + i * m + j);
		}
	}
	//Вывод массива
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%d ", *matx + i * m + j);
		}
		printf("\n");
	}
	return 0;
}
