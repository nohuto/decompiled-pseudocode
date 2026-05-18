/*
 * XREFs of sub_180058728 @ 0x180058728
 * Callers:
 *     sub_180058EBC @ 0x180058EBC (sub_180058EBC.c)
 *     sub_180066CF4 @ 0x180066CF4 (sub_180066CF4.c)
 * Callees:
 *     sub_180058950 @ 0x180058950 (sub_180058950.c)
 */

__int64 __fastcall sub_180058728(__int64 a1, float a2)
{
  __int64 result; // rax

  if ( a2 != *(float *)(a1 + 332) )
  {
    *(float *)(a1 + 332) = a2;
    return sub_180058950(a1, 2LL);
  }
  return result;
}
