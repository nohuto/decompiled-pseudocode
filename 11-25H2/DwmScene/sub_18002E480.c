/*
 * XREFs of sub_18002E480 @ 0x18002E480
 * Callers:
 *     sub_18002B688 @ 0x18002B688 (sub_18002B688.c)
 * Callees:
 *     <none>
 */

float *__fastcall sub_18002E480(float *a1, _QWORD *a2)
{
  float *result; // rax

  result = a1;
  *a1 = (float)(int)*a2 / 1000000000.0;
  return result;
}
