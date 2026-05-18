/*
 * XREFs of sub_180023C84 @ 0x180023C84
 * Callers:
 *     sub_1800231AC @ 0x1800231AC (sub_1800231AC.c)
 * Callees:
 *     <none>
 */

float *__fastcall sub_180023C84(float *a1, _QWORD *a2)
{
  float *result; // rax

  result = a1;
  *a1 = (float)(int)*a2 / 1000000.0;
  return result;
}
