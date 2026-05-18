/*
 * XREFs of sub_18007C518 @ 0x18007C518
 * Callers:
 *     sub_18007C4E0 @ 0x18007C4E0 (sub_18007C4E0.c)
 * Callees:
 *     sub_18007C124 @ 0x18007C124 (sub_18007C124.c)
 */

float *__fastcall sub_18007C518(__int64 a1, unsigned __int16 a2, float a3)
{
  float *result; // rax

  result = (float *)sub_18007C124(a1, a2, 2);
  if ( *result != a3 )
  {
    *result = a3;
    ++*(_DWORD *)(a1 + 80);
  }
  return result;
}
