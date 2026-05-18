/*
 * XREFs of sub_1800859F8 @ 0x1800859F8
 * Callers:
 *     sub_1800857F0 @ 0x1800857F0 (sub_1800857F0.c)
 *     sub_180086078 @ 0x180086078 (sub_180086078.c)
 * Callees:
 *     <none>
 */

float *__fastcall sub_1800859F8(float *a1, unsigned int a2)
{
  float *result; // rax

  *a1 = (float)BYTE2(a2) / 255.0;
  a1[1] = (float)BYTE1(a2) / 255.0;
  a1[2] = (float)(unsigned __int8)a2 / 255.0;
  result = a1;
  a1[3] = (float)HIBYTE(a2) / 255.0;
  return result;
}
