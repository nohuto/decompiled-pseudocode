/*
 * XREFs of sub_18007C3B8 @ 0x18007C3B8
 * Callers:
 *     sub_18007C380 @ 0x18007C380 (sub_18007C380.c)
 * Callees:
 *     sub_18007BFC4 @ 0x18007BFC4 (sub_18007BFC4.c)
 */

float *__fastcall sub_18007C3B8(__int64 a1, unsigned __int16 a2, float a3)
{
  float *result; // rax

  result = (float *)sub_18007BFC4(a1, a2, 2);
  if ( *result != a3 )
  {
    *result = a3;
    ++*(_DWORD *)(a1 + 80);
  }
  return result;
}
