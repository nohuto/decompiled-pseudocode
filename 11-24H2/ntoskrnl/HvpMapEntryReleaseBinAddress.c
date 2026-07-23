/*
 * XREFs of HvpMapEntryReleaseBinAddress @ 0x140BBB790
 * Callers:
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     HvpFindFreeCell @ 0x140886450 (HvpFindFreeCell.c)
 *     HvpMarkDirty @ 0x140886940 (HvpMarkDirty.c)
 *     HvpSetRangeProtection @ 0x140887154 (HvpSetRangeProtection.c)
 *     HvpFindNextDirtyBlock @ 0x140967074 (HvpFindNextDirtyBlock.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14096A820 (HvpRemapAndEnlistHiveBins.c)
 *     HvCheckHive @ 0x1409740B0 (HvCheckHive.c)
 *     HvpDropPagedBins @ 0x140A586B8 (HvpDropPagedBins.c)
 *     HvWriteExternal @ 0x140A66710 (HvWriteExternal.c)
 *     HvpMapEntryReleaseBlockAddress @ 0x140A67FC4 (HvpMapEntryReleaseBlockAddress.c)
 *     HvSnapshotHiveToOffsetArray @ 0x140BBB508 (HvSnapshotHiveToOffsetArray.c)
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
