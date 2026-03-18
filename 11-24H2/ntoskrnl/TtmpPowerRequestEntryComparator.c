/*
 * XREFs of TtmpPowerRequestEntryComparator @ 0x14076AB64
 * Callers:
 *     TtmpFindPowerRequestEntryById @ 0x14076A664 (TtmpFindPowerRequestEntryById.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall TtmpPowerRequestEntryComparator(__int64 a1, int a2)
{
  return *(_DWORD *)(a1 + 16) == a2;
}
