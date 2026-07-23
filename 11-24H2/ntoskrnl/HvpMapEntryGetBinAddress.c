/*
 * XREFs of HvpMapEntryGetBinAddress @ 0x140BBB770
 * Callers:
 *     HvpMapEntryGetBlockAddress @ 0x1408788B0 (HvpMapEntryGetBlockAddress.c)
 *     HvIsCellAllocated @ 0x1408798A0 (HvIsCellAllocated.c)
 *     HvFreeCell @ 0x140885AB4 (HvFreeCell.c)
 *     HvpFindFreeCell @ 0x140886450 (HvpFindFreeCell.c)
 *     HvpMarkDirty @ 0x140886940 (HvpMarkDirty.c)
 *     HvpRemoveFreeCellHint @ 0x140886D60 (HvpRemoveFreeCellHint.c)
 *     HvpEnlistFreeCell @ 0x140886F20 (HvpEnlistFreeCell.c)
 *     HvpSetRangeProtection @ 0x140887154 (HvpSetRangeProtection.c)
 *     HvpFindNextDirtyBlock @ 0x140967074 (HvpFindNextDirtyBlock.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14096A820 (HvpRemapAndEnlistHiveBins.c)
 *     HvpEnlistFreeCells @ 0x14096C4B0 (HvpEnlistFreeCells.c)
 *     HvCheckHive @ 0x1409740B0 (HvCheckHive.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x140A4CD78 (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     HvpDropPagedBins @ 0x140A586B8 (HvpDropPagedBins.c)
 *     HvWriteExternal @ 0x140A66710 (HvWriteExternal.c)
 *     HvSnapshotHiveToOffsetArray @ 0x140BBB508 (HvSnapshotHiveToOffsetArray.c)
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
