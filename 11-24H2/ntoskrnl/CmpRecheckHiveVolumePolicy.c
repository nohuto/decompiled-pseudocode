/*
 * XREFs of CmpRecheckHiveVolumePolicy @ 0x1404648A0
 * Callers:
 *     CmpLoadKeyCommon @ 0x140464478 (CmpLoadKeyCommon.c)
 *     CmpFinishSystemHivesLoad @ 0x1407CA230 (CmpFinishSystemHivesLoad.c)
 *     CmpHandlePageFileOpenNotification @ 0x1407CF660 (CmpHandlePageFileOpenNotification.c)
 *     CmpCreateHive @ 0x14092F538 (CmpCreateHive.c)
 * Callees:
 *     CmpArmLazyWriter @ 0x14027B0B0 (CmpArmLazyWriter.c)
 *     CmpAdjustFileCFSafety @ 0x1404B2D88 (CmpAdjustFileCFSafety.c)
 *     HvMarkHiveWithNoSectionExtend @ 0x1406FC1D0 (HvMarkHiveWithNoSectionExtend.c)
 *     CmpVolumeContextCanHiveSectionBeExtended @ 0x140A46274 (CmpVolumeContextCanHiveSectionBeExtended.c)
 *     CmpVolumeContextMustHiveFilePagesBeKeptLocal @ 0x140A462C0 (CmpVolumeContextMustHiveFilePagesBeKeptLocal.c)
 *     HvViewMapContainsLockedPages @ 0x140A66248 (HvViewMapContainsLockedPages.c)
 *     HvUnlockHiveFilePages @ 0x140A8E8F0 (HvUnlockHiveFilePages.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140BB9A98 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140BB9AB4 (HvLockHiveFlusherExclusive.c)
 *     CmpLockRegistry @ 0x140BB9E60 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BB9F50 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpRecheckHiveVolumePolicy(__int64 a1)
{
  __int64 v2; // rsi
  int v3; // ecx
  bool v5; // cf
  __int64 v6; // rcx
  int v7; // ebx

  CmpLockRegistry();
  HvLockHiveFlusherExclusive(a1);
  v2 = *(_QWORD *)(a1 + 4792);
  if ( !v2 )
    goto LABEL_8;
  if ( (unsigned __int8)CmpVolumeContextMustHiveFilePagesBeKeptLocal(*(_QWORD *)(a1 + 4792))
    || (v3 = *(_DWORD *)(a1 + 4112), (v3 & 0x20) != 0) )
  {
    if ( (unsigned __int8)HvViewMapContainsLockedPages(a1 + 224) )
      CmpArmLazyWriter(2, 0LL, 0);
    goto LABEL_6;
  }
  if ( (*(_DWORD *)(a1 + 160) & 0x8000) == 0 )
  {
    v5 = (v3 & 0x10000) != 0;
    v6 = a1;
    if ( !v5 )
    {
      HvUnlockHiveFlusherExclusive(a1);
      CmpUnlockRegistry();
      v7 = CmpAdjustFileCFSafety(*(HANDLE *)(a1 + 1544));
      CmpLockRegistry();
      HvLockHiveFlusherExclusive(a1);
      if ( v7 < 0 )
        goto LABEL_6;
      *(_DWORD *)(a1 + 4112) |= 0x10000u;
      v6 = a1;
    }
    HvUnlockHiveFilePages(v6);
  }
LABEL_6:
  if ( !(unsigned __int8)CmpVolumeContextCanHiveSectionBeExtended(v2) )
    HvMarkHiveWithNoSectionExtend(a1);
LABEL_8:
  HvUnlockHiveFlusherExclusive(a1);
  return CmpUnlockRegistry();
}
