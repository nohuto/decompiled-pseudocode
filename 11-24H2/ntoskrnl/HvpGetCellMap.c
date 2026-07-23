/*
 * XREFs of HvpGetCellMap @ 0x140BBB710
 * Callers:
 *     HvpShrinkMap @ 0x1407E3F58 (HvpShrinkMap.c)
 *     HvpMarkCellDirty @ 0x140875930 (HvpMarkCellDirty.c)
 *     HvIsCellAllocated @ 0x1408798A0 (HvIsCellAllocated.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     HvHiveCleanup @ 0x140882B48 (HvHiveCleanup.c)
 *     HvFreeCell @ 0x140885AB4 (HvFreeCell.c)
 *     HvpFindFreeCell @ 0x140886450 (HvpFindFreeCell.c)
 *     HvMarkCellDirty @ 0x1408867AC (HvMarkCellDirty.c)
 *     HvpMarkDirty @ 0x140886940 (HvpMarkDirty.c)
 *     HvpRemoveFreeCellHint @ 0x140886D60 (HvpRemoveFreeCellHint.c)
 *     HvpEnlistFreeCell @ 0x140886F20 (HvpEnlistFreeCell.c)
 *     HvpSetRangeProtection @ 0x140887154 (HvpSetRangeProtection.c)
 *     HvpFindNextDirtyBlock @ 0x140967074 (HvpFindNextDirtyBlock.c)
 *     HvpTruncateBins @ 0x140967554 (HvpTruncateBins.c)
 *     HvpAddBin @ 0x140968D94 (HvpAddBin.c)
 *     HvpPointMapEntriesToBuffer @ 0x140969A8C (HvpPointMapEntriesToBuffer.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14096A820 (HvpRemapAndEnlistHiveBins.c)
 *     HvpMapHiveImageFromViewMap @ 0x14096B20C (HvpMapHiveImageFromViewMap.c)
 *     HvpEnlistFreeCells @ 0x14096C4B0 (HvpEnlistFreeCells.c)
 *     HvCheckHive @ 0x1409740B0 (HvCheckHive.c)
 *     HvTrimHive @ 0x140A37B84 (HvTrimHive.c)
 *     HvFreeHivePartial @ 0x140A46B7C (HvFreeHivePartial.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x140A4CD78 (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     HvpDropPagedBins @ 0x140A586B8 (HvpDropPagedBins.c)
 *     HvWriteExternal @ 0x140A66710 (HvWriteExternal.c)
 *     HvpCopyModifiedData @ 0x140A67F04 (HvpCopyModifiedData.c)
 *     HvSnapshotHiveToOffsetArray @ 0x140BBB508 (HvSnapshotHiveToOffsetArray.c)
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
