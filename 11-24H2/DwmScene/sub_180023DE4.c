/*
 * XREFs of sub_180023DE4 @ 0x180023DE4
 * Callers:
 *     sub_18002330C @ 0x18002330C (sub_18002330C.c)
 * Callees:
 *     <none>
 */

float *__fastcall sub_180023DE4(float *a1, _QWORD *a2)
{
  float *result; // rax

  result = a1;
  *a1 = (float)(int)*a2 / 1000000.0;
  return result;
}
