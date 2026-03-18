/*
 * XREFs of HvpMapEntryGetFreeBin @ 0x140883424
 * Callers:
 *     HvpMarkDirty @ 0x140882A90 (HvpMarkDirty.c)
 *     HvpSetRangeProtection @ 0x1408832A4 (HvpSetRangeProtection.c)
 *     HvpFindNextDirtyBlock @ 0x14097E864 (HvpFindNextDirtyBlock.c)
 *     HvpTruncateBins @ 0x14097ED44 (HvpTruncateBins.c)
 *     HvFreeHivePartial @ 0x140A4FDCC (HvFreeHivePartial.c)
 *     HvpDropPagedBins @ 0x140A60168 (HvpDropPagedBins.c)
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
