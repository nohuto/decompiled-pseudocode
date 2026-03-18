/*
 * XREFs of HvpMapEntryGetBinAddress @ 0x140BB9770
 * Callers:
 *     HvpMapEntryGetBlockAddress @ 0x140874580 (HvpMapEntryGetBlockAddress.c)
 *     HvIsCellAllocated @ 0x140875570 (HvIsCellAllocated.c)
 *     HvFreeCell @ 0x140881C04 (HvFreeCell.c)
 *     HvpFindFreeCell @ 0x1408825A0 (HvpFindFreeCell.c)
 *     HvpMarkDirty @ 0x140882A90 (HvpMarkDirty.c)
 *     HvpRemoveFreeCellHint @ 0x140882EB0 (HvpRemoveFreeCellHint.c)
 *     HvpEnlistFreeCell @ 0x140883070 (HvpEnlistFreeCell.c)
 *     HvpSetRangeProtection @ 0x1408832A4 (HvpSetRangeProtection.c)
 *     HvpFindNextDirtyBlock @ 0x14097E864 (HvpFindNextDirtyBlock.c)
 *     HvpRemapAndEnlistHiveBins @ 0x140982010 (HvpRemapAndEnlistHiveBins.c)
 *     HvpEnlistFreeCells @ 0x140983CA0 (HvpEnlistFreeCells.c)
 *     HvCheckHive @ 0x14098A9C0 (HvCheckHive.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x140A54E28 (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     HvpDropPagedBins @ 0x140A60168 (HvpDropPagedBins.c)
 *     HvWriteExternal @ 0x140A6D050 (HvWriteExternal.c)
 *     HvSnapshotHiveToOffsetArray @ 0x140BB9508 (HvSnapshotHiveToOffsetArray.c)
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
