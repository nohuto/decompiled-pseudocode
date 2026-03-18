/*
 * XREFs of HvpMarkCellDirty @ 0x140871600
 * Callers:
 *     CmpMarkCurrentProfileDirty @ 0x1407CBBCC (CmpMarkCurrentProfileDirty.c)
 *     CmpMarkCurrentValueDirty @ 0x1407CBD3C (CmpMarkCurrentValueDirty.c)
 *     CmRestoreKey @ 0x1407CCF24 (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x1407CEAF0 (CmpRefreshHive.c)
 *     CmRenameKey @ 0x1407D9068 (CmRenameKey.c)
 *     CmpDoBuildVirtualStack @ 0x1407DB5E4 (CmpDoBuildVirtualStack.c)
 *     CmpCopySaclToVirtualKey @ 0x1407DCB7C (CmpCopySaclToVirtualKey.c)
 *     CmpMarkAllChildrenDirty @ 0x1407E2DB0 (CmpMarkAllChildrenDirty.c)
 *     CmpRemoveSubKeyCellNoCellRef @ 0x1407E2F14 (CmpRemoveSubKeyCellNoCellRef.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x14086A638 (CmpUpdateKeyNodeAccessBits.c)
 *     CmSetValueKey @ 0x14086B130 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x14086D078 (CmDeleteValueKey.c)
 *     CmpDoParseKey @ 0x14086E7B0 (CmpDoParseKey.c)
 *     CmpCreateKeyControlBlock @ 0x1408717C0 (CmpCreateKeyControlBlock.c)
 *     CmpWalkOneLevel @ 0x140872560 (CmpWalkOneLevel.c)
 *     CmpVEExecuteOpenLogic @ 0x1408745A0 (CmpVEExecuteOpenLogic.c)
 *     CmpGetKeyNodeForKcb @ 0x140875C90 (CmpGetKeyNodeForKcb.c)
 *     CmpTransMgrFreeVolatileData @ 0x14087B284 (CmpTransMgrFreeVolatileData.c)
 *     CmEnumerateKey @ 0x14087C950 (CmEnumerateKey.c)
 *     CmpAddSubKeyEx @ 0x14087F1E4 (CmpAddSubKeyEx.c)
 *     CmpSelectLeaf @ 0x14087F7CC (CmpSelectLeaf.c)
 *     CmpMarkKeyDirty @ 0x14087FB34 (CmpMarkKeyDirty.c)
 *     CmpSetValueKeyExisting @ 0x14087FE74 (CmpSetValueKeyExisting.c)
 *     CmpMarkValueDataDirty @ 0x140880248 (CmpMarkValueDataDirty.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x14088067C (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpSetValueKeyNew @ 0x140880E28 (CmpSetValueKeyNew.c)
 *     HvFreeCell @ 0x140881C04 (HvFreeCell.c)
 *     CmpAddToLeaf @ 0x1408835A8 (CmpAddToLeaf.c)
 *     CmpCopySyncTree2 @ 0x1408838F4 (CmpCopySyncTree2.c)
 *     CmpCheckKey @ 0x14088506C (CmpCheckKey.c)
 *     CmpCheckValueList @ 0x140887180 (CmpCheckValueList.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140914AE0 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x140915A04 (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpCreateChild @ 0x14091788C (CmpCreateChild.c)
 *     CmpClearKeyAccessBits @ 0x1409312E0 (CmpClearKeyAccessBits.c)
 *     CmSetLastWriteTimeKey @ 0x14097A430 (CmSetLastWriteTimeKey.c)
 *     CmSetKeyFlags @ 0x14097AE70 (CmSetKeyFlags.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1409A0064 (CmpSetSecurityDescriptorInfo.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x1409A0BDC (CmpValidateHiveSecurityDescriptors.c)
 *     CmpInsertSecurityCellList @ 0x1409A1028 (CmpInsertSecurityCellList.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1409FEC68 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x1409FF118 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpLightWeightCreateSetValueData @ 0x1409FF52C (CmpLightWeightCreateSetValueData.c)
 *     CmpProcessLightWeightUOW @ 0x140A069C4 (CmpProcessLightWeightUOW.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x140A1EC80 (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x140A1F3F0 (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpMarkIndexDirtyInStorageType @ 0x140A28CFC (CmpMarkIndexDirtyInStorageType.c)
 *     CmpLightWeightPrepareSetKeyUserFlags @ 0x140A44988 (CmpLightWeightPrepareSetKeyUserFlags.c)
 *     CmpUpdateHiveRootCellFlags @ 0x140A530D4 (CmpUpdateHiveRootCellFlags.c)
 *     CmpMarkKeyParentDirty @ 0x140A5D138 (CmpMarkKeyParentDirty.c)
 *     CmpSplitLeaf @ 0x140A65520 (CmpSplitLeaf.c)
 *     CmpCheckAndFixSecurityCellsRefcount @ 0x140A73A84 (CmpCheckAndFixSecurityCellsRefcount.c)
 *     CmpMarkKeyValuesDirty @ 0x140A75548 (CmpMarkKeyValuesDirty.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x140A82480 (CmpLightWeightPrepareSetSecDescUoW.c)
 *     CmpMarkEntireIndexDirty @ 0x140A8A2D0 (CmpMarkEntireIndexDirty.c)
 *     CmpSetValueKeyTombstone @ 0x140AADCF4 (CmpSetValueKeyTombstone.c)
 *     CmpCheckLeaf @ 0x140AE363C (CmpCheckLeaf.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     HvpGetCellFlat @ 0x140874470 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408744C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140875760 (HvpReleaseCellPaged.c)
 *     HvpMarkDirty @ 0x140882A90 (HvpMarkDirty.c)
 *     HvUnlockHiveWriter @ 0x140882E28 (HvUnlockHiveWriter.c)
 *     HvpReleaseCellFlat @ 0x140884BB0 (HvpReleaseCellFlat.c)
 *     HvpGetCellMap @ 0x140BB9710 (HvpGetCellMap.c)
 */

__int64 __fastcall HvpMarkCellDirty(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4, char a3)
{
  ULONG_PTR v3; // rbp
  int v4; // eax
  _QWORD *v7; // rax
  _QWORD *v8; // rdi
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
    v7 = KeAbPreAcquire(BugCheckParameter3 + 80, 0LL);
    v8 = v7;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter3 + 80), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(BugCheckParameter3 + 80), (__int64)v7, BugCheckParameter3 + 80);
    if ( v8 )
      *((_BYTE *)v8 + 10) = 1;
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
