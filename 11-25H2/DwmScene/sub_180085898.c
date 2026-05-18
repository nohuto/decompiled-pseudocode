/*
 * XREFs of sub_180085898 @ 0x180085898
 * Callers:
 *     sub_180085690 @ 0x180085690 (sub_180085690.c)
 *     sub_180085F18 @ 0x180085F18 (sub_180085F18.c)
 * Callees:
 *     <none>
 */

float *__fastcall sub_180085898(float *a1, unsigned int a2)
{
  float *result; // rax

  *a1 = (float)BYTE2(a2) / 255.0;
  a1[1] = (float)BYTE1(a2) / 255.0;
  a1[2] = (float)(unsigned __int8)a2 / 255.0;
  result = a1;
  a1[3] = (float)HIBYTE(a2) / 255.0;
  return result;
}
