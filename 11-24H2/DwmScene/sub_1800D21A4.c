/*
 * XREFs of sub_1800D21A4 @ 0x1800D21A4
 * Callers:
 *     sub_1800D1FE0 @ 0x1800D1FE0 (sub_1800D1FE0.c)
 * Callees:
 *     <none>
 */

double *__fastcall sub_1800D21A4(double *a1, _QWORD *a2)
{
  double *result; // rax

  result = a1;
  *a1 = (double)(int)*a2 / 1000000000.0;
  return result;
}
