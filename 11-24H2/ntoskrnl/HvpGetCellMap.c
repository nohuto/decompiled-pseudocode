/*
 * XREFs of HvpGetCellMap @ 0x140BB9710
 * Callers:
 *     HvpShrinkMap @ 0x1407E3A08 (HvpShrinkMap.c)
 *     HvpMarkCellDirty @ 0x140871600 (HvpMarkCellDirty.c)
 *     HvIsCellAllocated @ 0x140875570 (HvIsCellAllocated.c)
 *     HvpReleaseCellPaged @ 0x140875760 (HvpReleaseCellPaged.c)
 *     HvHiveCleanup @ 0x14087EC98 (HvHiveCleanup.c)
 *     HvFreeCell @ 0x140881C04 (HvFreeCell.c)
 *     HvpFindFreeCell @ 0x1408825A0 (HvpFindFreeCell.c)
 *     HvMarkCellDirty @ 0x1408828FC (HvMarkCellDirty.c)
 *     HvpMarkDirty @ 0x140882A90 (HvpMarkDirty.c)
 *     HvpRemoveFreeCellHint @ 0x140882EB0 (HvpRemoveFreeCellHint.c)
 *     HvpEnlistFreeCell @ 0x140883070 (HvpEnlistFreeCell.c)
 *     HvpSetRangeProtection @ 0x1408832A4 (HvpSetRangeProtection.c)
 *     HvpFindNextDirtyBlock @ 0x14097E864 (HvpFindNextDirtyBlock.c)
 *     HvpTruncateBins @ 0x14097ED44 (HvpTruncateBins.c)
 *     HvpAddBin @ 0x140980584 (HvpAddBin.c)
 *     HvpPointMapEntriesToBuffer @ 0x14098127C (HvpPointMapEntriesToBuffer.c)
 *     HvpRemapAndEnlistHiveBins @ 0x140982010 (HvpRemapAndEnlistHiveBins.c)
 *     HvpMapHiveImageFromViewMap @ 0x1409829FC (HvpMapHiveImageFromViewMap.c)
 *     HvpEnlistFreeCells @ 0x140983CA0 (HvpEnlistFreeCells.c)
 *     HvCheckHive @ 0x14098A9C0 (HvCheckHive.c)
 *     HvTrimHive @ 0x140A4234C (HvTrimHive.c)
 *     HvFreeHivePartial @ 0x140A4FDCC (HvFreeHivePartial.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x140A54E28 (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     HvpDropPagedBins @ 0x140A60168 (HvpDropPagedBins.c)
 *     HvWriteExternal @ 0x140A6D050 (HvWriteExternal.c)
 *     HvpCopyModifiedData @ 0x140A6EA80 (HvpCopyModifiedData.c)
 *     HvSnapshotHiveToOffsetArray @ 0x140BB9508 (HvSnapshotHiveToOffsetArray.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpGetCellMap(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax

  v2 = a1 + 632LL * (a2 >> 31);
  if ( a2 + (a2 >> 31 << 31) >= *(_DWORD *)(v2 + 280) )
    return 0LL;
  else
    return *(_QWORD *)(*(_QWORD *)(v2 + 288) + 8LL * ((a2 >> 21) & 0x3FF)) + 24LL * ((a2 >> 12) & 0x1FF);
}
