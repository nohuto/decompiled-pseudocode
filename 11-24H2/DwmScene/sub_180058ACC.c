/*
 * XREFs of sub_180058ACC @ 0x180058ACC
 * Callers:
 *     sub_180066E54 @ 0x180066E54 (sub_180066E54.c)
 *     sub_180067AC4 @ 0x180067AC4 (sub_180067AC4.c)
 *     sub_180084280 @ 0x180084280 (sub_180084280.c)
 * Callees:
 *     sub_180058AB0 @ 0x180058AB0 (sub_180058AB0.c)
 */

void __fastcall sub_180058ACC(__int64 a1, float a2)
{
  if ( a2 != *(float *)(a1 + 320) )
  {
    *(float *)(a1 + 320) = a2;
    sub_180058AB0(a1, 2);
  }
}
