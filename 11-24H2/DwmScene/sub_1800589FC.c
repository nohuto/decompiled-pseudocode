/*
 * XREFs of sub_1800589FC @ 0x1800589FC
 * Callers:
 *     sub_180066E54 @ 0x180066E54 (sub_180066E54.c)
 *     sub_180067AC4 @ 0x180067AC4 (sub_180067AC4.c)
 *     sub_180084280 @ 0x180084280 (sub_180084280.c)
 * Callees:
 *     sub_180058AB0 @ 0x180058AB0 (sub_180058AB0.c)
 */

__int64 __fastcall sub_1800589FC(__int64 a1, float a2)
{
  __int64 result; // rax

  if ( a2 != *(float *)(a1 + 324) )
  {
    *(float *)(a1 + 324) = a2;
    return sub_180058AB0(a1, 2LL);
  }
  return result;
}
