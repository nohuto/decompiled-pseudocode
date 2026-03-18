/*
 * XREFs of HvpMapEntryReleaseBinAddress @ 0x140BA9840
 * Callers:
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     HvpFindFreeCell @ 0x140880690 (HvpFindFreeCell.c)
 *     HvpMarkDirty @ 0x140880BA0 (HvpMarkDirty.c)
 *     HvpSetRangeProtection @ 0x1408813B4 (HvpSetRangeProtection.c)
 *     HvpRemapAndEnlistHiveBins @ 0x1408820A0 (HvpRemapAndEnlistHiveBins.c)
 *     HvpFindNextDirtyBlock @ 0x140882ACC (HvpFindNextDirtyBlock.c)
 *     HvCheckHive @ 0x140995810 (HvCheckHive.c)
 *     HvWriteExternal @ 0x1409F6CF4 (HvWriteExternal.c)
 *     HvpDropPagedBins @ 0x1409F6F54 (HvpDropPagedBins.c)
 *     HvpMapEntryReleaseBlockAddress @ 0x140A6C914 (HvpMapEntryReleaseBlockAddress.c)
 *     HvSnapshotHiveToOffsetArray @ 0x140BA95C0 (HvSnapshotHiveToOffsetArray.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpMapEntryReleaseBinAddress(__int64 a1, __int64 a2, _WORD *a3)
{
  __int64 result; // rax

  result = 0LL;
  *a3 = 0;
  return result;
}
