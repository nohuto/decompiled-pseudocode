/*
 * XREFs of HvpMapEntryGetBinAddress @ 0x140BA9820
 * Callers:
 *     HvpMapEntryGetBlockAddress @ 0x140878240 (HvpMapEntryGetBlockAddress.c)
 *     HvIsCellAllocated @ 0x140878DF0 (HvIsCellAllocated.c)
 *     HvFreeCell @ 0x14087FCBC (HvFreeCell.c)
 *     HvpFindFreeCell @ 0x140880690 (HvpFindFreeCell.c)
 *     HvpMarkDirty @ 0x140880BA0 (HvpMarkDirty.c)
 *     HvpRemoveFreeCellHint @ 0x140880FC0 (HvpRemoveFreeCellHint.c)
 *     HvpEnlistFreeCell @ 0x140881180 (HvpEnlistFreeCell.c)
 *     HvpSetRangeProtection @ 0x1408813B4 (HvpSetRangeProtection.c)
 *     HvpEnlistFreeCells @ 0x140881C80 (HvpEnlistFreeCells.c)
 *     HvpRemapAndEnlistHiveBins @ 0x1408820A0 (HvpRemapAndEnlistHiveBins.c)
 *     HvpFindNextDirtyBlock @ 0x140882ACC (HvpFindNextDirtyBlock.c)
 *     HvCheckHive @ 0x140995810 (HvCheckHive.c)
 *     HvWriteExternal @ 0x1409F6CF4 (HvWriteExternal.c)
 *     HvpDropPagedBins @ 0x1409F6F54 (HvpDropPagedBins.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x140A5100C (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     HvSnapshotHiveToOffsetArray @ 0x140BA95C0 (HvSnapshotHiveToOffsetArray.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall HvpMapEntryGetBinAddress(__int64 a1, __int64 a2, _WORD *a3)
{
  __int64 v3; // rax

  v3 = *(_QWORD *)(a2 + 8);
  *a3 |= 1u;
  return v3 & 0xFFFFFFFFFFFFFFF0uLL;
}
