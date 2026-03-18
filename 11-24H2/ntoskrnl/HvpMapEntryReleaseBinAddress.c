/*
 * XREFs of HvpMapEntryReleaseBinAddress @ 0x140BB9790
 * Callers:
 *     HvpReleaseCellPaged @ 0x140875760 (HvpReleaseCellPaged.c)
 *     HvpFindFreeCell @ 0x1408825A0 (HvpFindFreeCell.c)
 *     HvpMarkDirty @ 0x140882A90 (HvpMarkDirty.c)
 *     HvpSetRangeProtection @ 0x1408832A4 (HvpSetRangeProtection.c)
 *     HvpFindNextDirtyBlock @ 0x14097E864 (HvpFindNextDirtyBlock.c)
 *     HvpRemapAndEnlistHiveBins @ 0x140982010 (HvpRemapAndEnlistHiveBins.c)
 *     HvCheckHive @ 0x14098A9C0 (HvCheckHive.c)
 *     HvpDropPagedBins @ 0x140A60168 (HvpDropPagedBins.c)
 *     HvWriteExternal @ 0x140A6D050 (HvWriteExternal.c)
 *     HvpMapEntryReleaseBlockAddress @ 0x140A6EB40 (HvpMapEntryReleaseBlockAddress.c)
 *     HvSnapshotHiveToOffsetArray @ 0x140BB9508 (HvSnapshotHiveToOffsetArray.c)
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
