/*
 * XREFs of HvpMarkCellDirty @ 0x140875930
 * Callers:
 *     CmpMarkCurrentProfileDirty @ 0x1407CC0BC (CmpMarkCurrentProfileDirty.c)
 *     CmpMarkCurrentValueDirty @ 0x1407CC22C (CmpMarkCurrentValueDirty.c)
 *     CmRestoreKey @ 0x1407CD414 (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x1407CEFE0 (CmpRefreshHive.c)
 *     CmRenameKey @ 0x1407D95B8 (CmRenameKey.c)
 *     CmpDoBuildVirtualStack @ 0x1407DBB34 (CmpDoBuildVirtualStack.c)
 *     CmpCopySaclToVirtualKey @ 0x1407DD0CC (CmpCopySaclToVirtualKey.c)
 *     CmpMarkAllChildrenDirty @ 0x1407E3300 (CmpMarkAllChildrenDirty.c)
 *     CmpRemoveSubKeyCellNoCellRef @ 0x1407E3464 (CmpRemoveSubKeyCellNoCellRef.c)
 *     CmpSetSecurityDescriptorInfo @ 0x140830F98 (CmpSetSecurityDescriptorInfo.c)
 *     CmpInsertSecurityCellList @ 0x14083234C (CmpInsertSecurityCellList.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x1408328B8 (CmpValidateHiveSecurityDescriptors.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x14086E968 (CmpUpdateKeyNodeAccessBits.c)
 *     CmSetValueKey @ 0x14086F460 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x1408713A8 (CmDeleteValueKey.c)
 *     CmpDoParseKey @ 0x140872AE0 (CmpDoParseKey.c)
 *     CmpCreateKeyControlBlock @ 0x140875AF0 (CmpCreateKeyControlBlock.c)
 *     CmpWalkOneLevel @ 0x140876890 (CmpWalkOneLevel.c)
 *     CmpVEExecuteOpenLogic @ 0x1408788D0 (CmpVEExecuteOpenLogic.c)
 *     CmpGetKeyNodeForKcb @ 0x140879FC0 (CmpGetKeyNodeForKcb.c)
 *     CmpTransMgrFreeVolatileData @ 0x14087F134 (CmpTransMgrFreeVolatileData.c)
 *     CmEnumerateKey @ 0x140880800 (CmEnumerateKey.c)
 *     CmpAddSubKeyEx @ 0x140883094 (CmpAddSubKeyEx.c)
 *     CmpSelectLeaf @ 0x14088367C (CmpSelectLeaf.c)
 *     CmpMarkKeyDirty @ 0x1408839E4 (CmpMarkKeyDirty.c)
 *     CmpSetValueKeyExisting @ 0x140883D24 (CmpSetValueKeyExisting.c)
 *     CmpMarkValueDataDirty @ 0x1408840F8 (CmpMarkValueDataDirty.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x14088452C (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpSetValueKeyNew @ 0x140884CD8 (CmpSetValueKeyNew.c)
 *     HvFreeCell @ 0x140885AB4 (HvFreeCell.c)
 *     CmpAddToLeaf @ 0x140887458 (CmpAddToLeaf.c)
 *     CmpCopySyncTree2 @ 0x1408877A4 (CmpCopySyncTree2.c)
 *     CmpCheckKey @ 0x140888F1C (CmpCheckKey.c)
 *     CmpCheckValueList @ 0x14088B030 (CmpCheckValueList.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140908550 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x140909474 (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpCreateChild @ 0x14090B2FC (CmpCreateChild.c)
 *     CmpClearKeyAccessBits @ 0x140933420 (CmpClearKeyAccessBits.c)
 *     CmSetLastWriteTimeKey @ 0x140962C40 (CmSetLastWriteTimeKey.c)
 *     CmSetKeyFlags @ 0x140963680 (CmSetKeyFlags.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1409F7BB0 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x1409F8060 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpLightWeightCreateSetValueData @ 0x1409F8474 (CmpLightWeightCreateSetValueData.c)
 *     CmpProcessLightWeightUOW @ 0x140A02EF4 (CmpProcessLightWeightUOW.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x140A13D80 (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x140A144F0 (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpMarkIndexDirtyInStorageType @ 0x140A1D6C0 (CmpMarkIndexDirtyInStorageType.c)
 *     CmpLightWeightPrepareSetKeyUserFlags @ 0x140A3A218 (CmpLightWeightPrepareSetKeyUserFlags.c)
 *     CmpUpdateHiveRootCellFlags @ 0x140A4B0C4 (CmpUpdateHiveRootCellFlags.c)
 *     CmpMarkKeyParentDirty @ 0x140A54E68 (CmpMarkKeyParentDirty.c)
 *     CmpSplitLeaf @ 0x140A5DCF0 (CmpSplitLeaf.c)
 *     CmpCheckAndFixSecurityCellsRefcount @ 0x140A6D3DC (CmpCheckAndFixSecurityCellsRefcount.c)
 *     CmpMarkKeyValuesDirty @ 0x140A6F9E8 (CmpMarkKeyValuesDirty.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x140A7D024 (CmpLightWeightPrepareSetSecDescUoW.c)
 *     CmpMarkEntireIndexDirty @ 0x140A86614 (CmpMarkEntireIndexDirty.c)
 *     CmpSetValueKeyTombstone @ 0x140AA8D74 (CmpSetValueKeyTombstone.c)
 *     CmpCheckLeaf @ 0x140AE4F1C (CmpCheckLeaf.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     HvpMarkDirty @ 0x140886940 (HvpMarkDirty.c)
 *     HvUnlockHiveWriter @ 0x140886CD8 (HvUnlockHiveWriter.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     HvpGetCellMap @ 0x140BBB710 (HvpGetCellMap.c)
 */

__int64 __fastcall HvpMarkCellDirty(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4, char a3)
{
  ULONG_PTR v3; // rbp
  int v4; // eax
  char *v7; // rax
  char *v8; // rdi
  __int64 CellFlat; // rax
  int v10; // esi
  int v12; // [rsp+50h] [rbp+8h] BYREF
  int v13; // [rsp+54h] [rbp+Ch]

  v3 = (unsigned int)BugCheckParameter4;
  v13 = 0;
  v4 = *(_DWORD *)(BugCheckParameter3 + 160);
  v12 = -1;
  if ( (v4 & 1) != 0 || (BugCheckParameter4 & 0x80000000) != 0LL )
    return 0LL;
  if ( !a3 )
  {
    v7 = (char *)KeAbPreAcquire(BugCheckParameter3 + 80, 0LL);
    v8 = v7;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter3 + 80), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(BugCheckParameter3 + 80), v7, BugCheckParameter3 + 80);
    if ( v8 )
      v8[10] = 1;
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, (unsigned int)v3);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3);
  if ( !CellFlat || CellFlat == 4 )
  {
    if ( !a3 )
      HvUnlockHiveWriter(BugCheckParameter3);
    return 3221225626LL;
  }
  else
  {
    if ( !HvpGetCellMap(BugCheckParameter3, (unsigned int)v3) )
      KeBugCheckEx(0x51u, 1uLL, BugCheckParameter3, v3, 0x2A7uLL);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v12);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v12);
    v10 = HvpMarkDirty(BugCheckParameter3);
    if ( !a3 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter3 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter3 + 80));
      KeAbPostRelease(BugCheckParameter3 + 80);
    }
    if ( v10 < 0 )
    {
      return (unsigned int)v10;
    }
    else
    {
      *(_BYTE *)(BugCheckParameter3 + 141) = 1;
      return 0LL;
    }
  }
}
