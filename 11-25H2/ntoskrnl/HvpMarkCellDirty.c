/*
 * XREFs of HvpMarkCellDirty @ 0x1408751B0
 * Callers:
 *     CmpMarkCurrentProfileDirty @ 0x1407BC3B4 (CmpMarkCurrentProfileDirty.c)
 *     CmpMarkCurrentValueDirty @ 0x1407BC524 (CmpMarkCurrentValueDirty.c)
 *     CmRestoreKey @ 0x1407BD70C (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x1407BF2D8 (CmpRefreshHive.c)
 *     CmRenameKey @ 0x1407C98A4 (CmRenameKey.c)
 *     CmpDoBuildVirtualStack @ 0x1407CBE24 (CmpDoBuildVirtualStack.c)
 *     CmpCopySaclToVirtualKey @ 0x1407CD3BC (CmpCopySaclToVirtualKey.c)
 *     CmpMarkAllChildrenDirty @ 0x1407D34D0 (CmpMarkAllChildrenDirty.c)
 *     CmpRemoveSubKeyCellNoCellRef @ 0x1407D3634 (CmpRemoveSubKeyCellNoCellRef.c)
 *     CmSetLastWriteTimeKey @ 0x1408639C0 (CmSetLastWriteTimeKey.c)
 *     CmSetKeyFlags @ 0x1408640B0 (CmSetKeyFlags.c)
 *     CmSetValueKey @ 0x140869F98 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x14086BE88 (CmDeleteValueKey.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x14086CCD4 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpDoParseKey @ 0x140871670 (CmpDoParseKey.c)
 *     CmpCreateKeyControlBlock @ 0x140875390 (CmpCreateKeyControlBlock.c)
 *     CmpWalkOneLevel @ 0x140876200 (CmpWalkOneLevel.c)
 *     CmpVEExecuteOpenLogic @ 0x140878260 (CmpVEExecuteOpenLogic.c)
 *     CmpGetKeyNodeForKcb @ 0x140879920 (CmpGetKeyNodeForKcb.c)
 *     CmEnumerateKey @ 0x14087C630 (CmEnumerateKey.c)
 *     CmpAddToLeaf @ 0x14087EB94 (CmpAddToLeaf.c)
 *     CmpSetValueKeyNew @ 0x14087EEE0 (CmpSetValueKeyNew.c)
 *     HvFreeCell @ 0x14087FCBC (HvFreeCell.c)
 *     CmpTransMgrFreeVolatileData @ 0x140885884 (CmpTransMgrFreeVolatileData.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1408864B8 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x140886968 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpMarkKeyDirty @ 0x1408870F0 (CmpMarkKeyDirty.c)
 *     CmpSetValueKeyExisting @ 0x140887430 (CmpSetValueKeyExisting.c)
 *     CmpMarkValueDataDirty @ 0x1408877FC (CmpMarkValueDataDirty.c)
 *     CmpMarkIndexDirtyInStorageType @ 0x140887B34 (CmpMarkIndexDirtyInStorageType.c)
 *     CmpLightWeightCreateSetValueData @ 0x1408883AC (CmpLightWeightCreateSetValueData.c)
 *     CmpCreateChild @ 0x1408884FC (CmpCreateChild.c)
 *     CmpClearKeyAccessBits @ 0x140889600 (CmpClearKeyAccessBits.c)
 *     CmpAddSubKeyEx @ 0x1408897A8 (CmpAddSubKeyEx.c)
 *     CmpCopySyncTree2 @ 0x140889B3C (CmpCopySyncTree2.c)
 *     CmpCheckKey @ 0x14088BB2C (CmpCheckKey.c)
 *     CmpCheckValueList @ 0x14088DC10 (CmpCheckValueList.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x14091C778 (CmpValidateHiveSecurityDescriptors.c)
 *     CmpInsertSecurityCellList @ 0x14091CB94 (CmpInsertSecurityCellList.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x1409737C4 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x14097470C (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x140976170 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1409765B8 (CmpSetSecurityDescriptorInfo.c)
 *     CmpProcessLightWeightUOW @ 0x1409D96AC (CmpProcessLightWeightUOW.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x1409D9BA8 (CmpLightWeightPrepareSetSecDescUoW.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x1409D9E84 (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpLightWeightPrepareSetKeyUserFlags @ 0x1409DA000 (CmpLightWeightPrepareSetKeyUserFlags.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x1409DA2CC (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpSelectLeaf @ 0x140A15E80 (CmpSelectLeaf.c)
 *     CmpSplitLeaf @ 0x140A161D8 (CmpSplitLeaf.c)
 *     CmpCheckLeaf @ 0x140A18B3C (CmpCheckLeaf.c)
 *     CmpUpdateHiveRootCellFlags @ 0x140A4F8CC (CmpUpdateHiveRootCellFlags.c)
 *     CmpMarkKeyParentDirty @ 0x140A5AD70 (CmpMarkKeyParentDirty.c)
 *     CmpMarkKeyValuesDirty @ 0x140A72EF8 (CmpMarkKeyValuesDirty.c)
 *     CmpCheckAndFixSecurityCellsRefcount @ 0x140A7FC90 (CmpCheckAndFixSecurityCellsRefcount.c)
 *     CmpMarkEntireIndexDirty @ 0x140A85950 (CmpMarkEntireIndexDirty.c)
 *     CmpSetValueKeyTombstone @ 0x140AA8940 (CmpSetValueKeyTombstone.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     HvpMarkDirty @ 0x140880BA0 (HvpMarkDirty.c)
 *     HvUnlockHiveWriter @ 0x140880F30 (HvUnlockHiveWriter.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 *     HvpGetCellMap @ 0x140BA97C0 (HvpGetCellMap.c)
 */

__int64 __fastcall HvpMarkCellDirty(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4, char a3)
{
  int v3; // eax
  __int64 v4; // rdi
  ULONG_PTR v5; // r14
  __int64 *v8; // rax
  __int64 *v9; // rbp
  __int64 CellFlat; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // esi
  __int64 result; // rax
  int v15; // [rsp+60h] [rbp+8h] BYREF
  int v16; // [rsp+64h] [rbp+Ch]

  v3 = *(_DWORD *)(BugCheckParameter3 + 160);
  v4 = 0LL;
  v5 = (unsigned int)BugCheckParameter4;
  v15 = -1;
  v16 = 0;
  if ( (v3 & 1) != 0 || (BugCheckParameter4 & 0x80000000) != 0LL )
    return 0LL;
  if ( !a3 )
  {
    v8 = KeAbPreAcquire(BugCheckParameter3 + 80, 0LL);
    v9 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter3 + 80), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(BugCheckParameter3 + 80), v8, BugCheckParameter3 + 80);
    if ( v9 )
      *((_BYTE *)v9 + 10) = 1;
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, (unsigned int)v5);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3);
  v11 = CellFlat;
  v12 = CellFlat - 4;
  if ( v11 )
    v4 = v12;
  if ( v4 )
  {
    if ( !HvpGetCellMap(BugCheckParameter3, (unsigned int)v5) )
      KeBugCheckEx(0x51u, 1uLL, BugCheckParameter3, v5, 0x2A7uLL);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v15);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v15);
    v13 = HvpMarkDirty(BugCheckParameter3);
    if ( !a3 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter3 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter3 + 80));
      KeAbPostRelease(BugCheckParameter3 + 80);
    }
    if ( v13 < 0 )
    {
      return (unsigned int)v13;
    }
    else
    {
      result = 0LL;
      *(_BYTE *)(BugCheckParameter3 + 141) = 1;
    }
  }
  else
  {
    if ( !a3 )
      HvUnlockHiveWriter(BugCheckParameter3);
    return 3221225626LL;
  }
  return result;
}
