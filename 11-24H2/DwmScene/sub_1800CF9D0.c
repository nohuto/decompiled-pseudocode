/*
 * XREFs of sub_1800CF9D0 @ 0x1800CF9D0
 * Callers:
 *     sub_1800CF594 @ 0x1800CF594 (sub_1800CF594.c)
 *     sub_1800D18D4 @ 0x1800D18D4 (sub_1800D18D4.c)
 * Callees:
 *     <none>
 */

int *__fastcall sub_1800CF9D0(__int64 a1, __int64 a2, __int64 a3, int **a4)
{
  int *result; // rax
  int v5; // ecx

  result = *a4;
  v5 = **a4;
  *(_QWORD *)(a2 + 64) = 0LL;
  *(_DWORD *)a2 = v5;
  return result;
}
