/*
 * XREFs of HvpGetBinContextInitialize @ 0x140BB98D0
 * Callers:
 *     HvIsCellAllocated @ 0x140875570 (HvIsCellAllocated.c)
 *     HvpGetCellContextInitialize @ 0x140875730 (HvpGetCellContextInitialize.c)
 *     HvFreeCell @ 0x140881C04 (HvFreeCell.c)
 *     HvpFindFreeCell @ 0x1408825A0 (HvpFindFreeCell.c)
 *     HvpMarkDirty @ 0x140882A90 (HvpMarkDirty.c)
 *     HvpGetBinContextMove @ 0x140882E8C (HvpGetBinContextMove.c)
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
 *     HvpCopyModifiedData @ 0x140A6EA80 (HvpCopyModifiedData.c)
 *     CmpCheckLeaf @ 0x140AE363C (CmpCheckLeaf.c)
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
