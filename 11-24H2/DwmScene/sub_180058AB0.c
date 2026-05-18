/*
 * XREFs of sub_180058AB0 @ 0x180058AB0
 * Callers:
 *     sub_18001A2B0 @ 0x18001A2B0 (sub_18001A2B0.c)
 *     sub_18001A38C @ 0x18001A38C (sub_18001A38C.c)
 *     sub_180057828 @ 0x180057828 (sub_180057828.c)
 *     sub_180058888 @ 0x180058888 (sub_180058888.c)
 *     sub_1800588F0 @ 0x1800588F0 (sub_1800588F0.c)
 *     sub_1800589FC @ 0x1800589FC (sub_1800589FC.c)
 *     sub_180058A2C @ 0x180058A2C (sub_180058A2C.c)
 *     sub_180058A5C @ 0x180058A5C (sub_180058A5C.c)
 *     sub_180058ACC @ 0x180058ACC (sub_180058ACC.c)
 *     sub_180058B20 @ 0x180058B20 (sub_180058B20.c)
 *     sub_180058CAC @ 0x180058CAC (sub_180058CAC.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_180058AB0(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 544) |= a2;
  if ( (a2 & 4) != 0 )
    *(_BYTE *)(a1 + 1612) = 1;
}
