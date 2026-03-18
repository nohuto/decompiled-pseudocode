/*
 * XREFs of HvpGetBinContextInitialize @ 0x140BA99C0
 * Callers:
 *     CmpRefreshHive @ 0x1407BF2D8 (CmpRefreshHive.c)
 *     HvIsCellAllocated @ 0x140878DF0 (HvIsCellAllocated.c)
 *     HvpGetCellContextInitialize @ 0x140878FA0 (HvpGetCellContextInitialize.c)
 *     HvFreeCell @ 0x14087FCBC (HvFreeCell.c)
 *     HvpFindFreeCell @ 0x140880690 (HvpFindFreeCell.c)
 *     HvpMarkDirty @ 0x140880BA0 (HvpMarkDirty.c)
 *     HvpGetBinContextMove @ 0x140880F94 (HvpGetBinContextMove.c)
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
 *     HvpCopyModifiedData @ 0x140A6C854 (HvpCopyModifiedData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpGetBinContextInitialize(_WORD *a1)
{
  __int64 result; // rax

  result = 0LL;
  *a1 = 0;
  return result;
}
