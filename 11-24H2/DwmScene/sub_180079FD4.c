/*
 * XREFs of sub_180079FD4 @ 0x180079FD4
 * Callers:
 *     sub_180041794 @ 0x180041794 (sub_180041794.c)
 *     sub_180041CD8 @ 0x180041CD8 (sub_180041CD8.c)
 *     sub_180043870 @ 0x180043870 (sub_180043870.c)
 *     sub_180043E04 @ 0x180043E04 (sub_180043E04.c)
 *     sub_180077074 @ 0x180077074 (sub_180077074.c)
 *     sub_1800797BC @ 0x1800797BC (sub_1800797BC.c)
 *     sub_18007A010 @ 0x18007A010 (sub_18007A010.c)
 *     sub_18007C758 @ 0x18007C758 (sub_18007C758.c)
 *     sub_180091F10 @ 0x180091F10 (sub_180091F10.c)
 * Callees:
 *     sub_18004C678 @ 0x18004C678 (sub_18004C678.c)
 */

__int64 __fastcall sub_180079FD4(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = sub_18004C678(*(_QWORD *)(a1 + 1152), a2);
  if ( *(_WORD *)(a1 + 2LL * (unsigned __int16)result + 128) == 0xFFFF )
    return 511LL;
  return result;
}
