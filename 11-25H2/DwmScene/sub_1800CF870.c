/*
 * XREFs of sub_1800CF870 @ 0x1800CF870
 * Callers:
 *     sub_1800CF434 @ 0x1800CF434 (sub_1800CF434.c)
 *     sub_1800D1774 @ 0x1800D1774 (sub_1800D1774.c)
 * Callees:
 *     <none>
 */

int *__fastcall sub_1800CF870(__int64 a1, __int64 a2, __int64 a3, int **a4)
{
  int *result; // rax
  int v5; // ecx

  result = *a4;
  v5 = **a4;
  *(_QWORD *)(a2 + 64) = 0LL;
  *(_DWORD *)a2 = v5;
  return result;
}
