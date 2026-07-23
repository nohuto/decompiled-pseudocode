/*
 * XREFs of HvpMapEntryGetFreeBin @ 0x1408872D4
 * Callers:
 *     HvpMarkDirty @ 0x140886940 (HvpMarkDirty.c)
 *     HvpSetRangeProtection @ 0x140887154 (HvpSetRangeProtection.c)
 *     HvpFindNextDirtyBlock @ 0x140967074 (HvpFindNextDirtyBlock.c)
 *     HvpTruncateBins @ 0x140967554 (HvpTruncateBins.c)
 *     HvFreeHivePartial @ 0x140A46B7C (HvFreeHivePartial.c)
 *     HvpDropPagedBins @ 0x140A586B8 (HvpDropPagedBins.c)
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
