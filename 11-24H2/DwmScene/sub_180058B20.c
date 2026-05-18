/*
 * XREFs of sub_180058B20 @ 0x180058B20
 * Callers:
 *     sub_180067AC4 @ 0x180067AC4 (sub_180067AC4.c)
 * Callees:
 *     sub_180058AB0 @ 0x180058AB0 (sub_180058AB0.c)
 */

void __fastcall sub_180058B20(__int64 a1, float a2)
{
  if ( a2 != *(float *)(a1 + 340) )
  {
    *(float *)(a1 + 340) = a2;
    sub_180058AB0(a1, 2);
  }
}
