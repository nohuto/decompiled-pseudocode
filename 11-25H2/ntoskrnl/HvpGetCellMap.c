/*
 * XREFs of HvpGetCellMap @ 0x140BA97C0
 * Callers:
 *     HvpShrinkMap @ 0x1407D4128 (HvpShrinkMap.c)
 *     HvpMarkCellDirty @ 0x1408751B0 (HvpMarkCellDirty.c)
 *     HvIsCellAllocated @ 0x140878DF0 (HvIsCellAllocated.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     HvHiveCleanup @ 0x14087E098 (HvHiveCleanup.c)
 *     HvFreeCell @ 0x14087FCBC (HvFreeCell.c)
 *     HvpFindFreeCell @ 0x140880690 (HvpFindFreeCell.c)
 *     HvMarkCellDirty @ 0x140880A08 (HvMarkCellDirty.c)
 *     HvpMarkDirty @ 0x140880BA0 (HvpMarkDirty.c)
 *     HvpRemoveFreeCellHint @ 0x140880FC0 (HvpRemoveFreeCellHint.c)
 *     HvpEnlistFreeCell @ 0x140881180 (HvpEnlistFreeCell.c)
 *     HvpSetRangeProtection @ 0x1408813B4 (HvpSetRangeProtection.c)
 *     HvpEnlistFreeCells @ 0x140881C80 (HvpEnlistFreeCells.c)
 *     HvpRemapAndEnlistHiveBins @ 0x1408820A0 (HvpRemapAndEnlistHiveBins.c)
 *     HvpFindNextDirtyBlock @ 0x140882ACC (HvpFindNextDirtyBlock.c)
 *     HvpTruncateBins @ 0x140882E40 (HvpTruncateBins.c)
 *     HvCheckHive @ 0x140995810 (HvCheckHive.c)
 *     HvWriteExternal @ 0x1409F6CF4 (HvWriteExternal.c)
 *     HvpDropPagedBins @ 0x1409F6F54 (HvpDropPagedBins.c)
 *     HvpAddBin @ 0x1409F795C (HvpAddBin.c)
 *     HvpPointMapEntriesToBuffer @ 0x1409F8650 (HvpPointMapEntriesToBuffer.c)
 *     HvpMapHiveImageFromViewMap @ 0x1409F991C (HvpMapHiveImageFromViewMap.c)
 *     HvTrimHive @ 0x140A3D6B4 (HvTrimHive.c)
 *     HvFreeHivePartial @ 0x140A4CAE0 (HvFreeHivePartial.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x140A5100C (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     HvpCopyModifiedData @ 0x140A6C854 (HvpCopyModifiedData.c)
 *     HvSnapshotHiveToOffsetArray @ 0x140BA95C0 (HvSnapshotHiveToOffsetArray.c)
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
