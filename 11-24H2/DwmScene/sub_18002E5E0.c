/*
 * XREFs of sub_18002E5E0 @ 0x18002E5E0
 * Callers:
 *     sub_18002B7E8 @ 0x18002B7E8 (sub_18002B7E8.c)
 * Callees:
 *     <none>
 */

float *__fastcall sub_18002E5E0(float *a1, _QWORD *a2)
{
  float *result; // rax

  result = a1;
  *a1 = (float)(int)*a2 / 1000000000.0;
  return result;
}
