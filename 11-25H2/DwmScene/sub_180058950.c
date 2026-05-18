/*
 * XREFs of sub_180058950 @ 0x180058950
 * Callers:
 *     sub_18001A1F0 @ 0x18001A1F0 (sub_18001A1F0.c)
 *     sub_18001A2CC @ 0x18001A2CC (sub_18001A2CC.c)
 *     sub_1800576C8 @ 0x1800576C8 (sub_1800576C8.c)
 *     sub_180058728 @ 0x180058728 (sub_180058728.c)
 *     sub_180058790 @ 0x180058790 (sub_180058790.c)
 *     sub_18005889C @ 0x18005889C (sub_18005889C.c)
 *     sub_1800588CC @ 0x1800588CC (sub_1800588CC.c)
 *     sub_1800588FC @ 0x1800588FC (sub_1800588FC.c)
 *     sub_18005896C @ 0x18005896C (sub_18005896C.c)
 *     sub_1800589C0 @ 0x1800589C0 (sub_1800589C0.c)
 *     sub_180058B4C @ 0x180058B4C (sub_180058B4C.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_180058950(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 544) |= a2;
  if ( (a2 & 4) != 0 )
    *(_BYTE *)(a1 + 1612) = 1;
}
