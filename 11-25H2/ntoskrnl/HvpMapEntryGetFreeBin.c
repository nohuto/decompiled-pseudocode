/*
 * XREFs of HvpMapEntryGetFreeBin @ 0x140881534
 * Callers:
 *     HvpMarkDirty @ 0x140880BA0 (HvpMarkDirty.c)
 *     HvpSetRangeProtection @ 0x1408813B4 (HvpSetRangeProtection.c)
 *     HvpFindNextDirtyBlock @ 0x140882ACC (HvpFindNextDirtyBlock.c)
 *     HvpTruncateBins @ 0x140882E40 (HvpTruncateBins.c)
 *     HvpDropPagedBins @ 0x1409F6F54 (HvpDropPagedBins.c)
 *     HvFreeHivePartial @ 0x140A4CAE0 (HvFreeHivePartial.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpMapEntryGetFreeBin(_BYTE *a1)
{
  if ( (a1[8] & 2) != 0 )
    return *(_QWORD *)a1;
  else
    return 0LL;
}
