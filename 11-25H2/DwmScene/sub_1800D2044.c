/*
 * XREFs of sub_1800D2044 @ 0x1800D2044
 * Callers:
 *     sub_1800D1E80 @ 0x1800D1E80 (sub_1800D1E80.c)
 * Callees:
 *     <none>
 */

double *__fastcall sub_1800D2044(double *a1, _QWORD *a2)
{
  double *result; // rax

  result = a1;
  *a1 = (double)(int)*a2 / 1000000000.0;
  return result;
}
