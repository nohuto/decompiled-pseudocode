/*
 * XREFs of CmpRecheckHiveVolumePolicy @ 0x140465694
 * Callers:
 *     CmpLoadKeyCommon @ 0x140465264 (CmpLoadKeyCommon.c)
 *     CmpFinishSystemHivesLoad @ 0x1407BAA30 (CmpFinishSystemHivesLoad.c)
 *     CmpHandlePageFileOpenNotification @ 0x1407BFF74 (CmpHandlePageFileOpenNotification.c)
 *     CmpCreateHive @ 0x14090EE00 (CmpCreateHive.c)
 * Callees:
 *     CmpArmLazyWriter @ 0x140349918 (CmpArmLazyWriter.c)
 *     CmpAdjustFileCFSafety @ 0x1404F2264 (CmpAdjustFileCFSafety.c)
 *     HvMarkHiveWithNoSectionExtend @ 0x1406F03F0 (HvMarkHiveWithNoSectionExtend.c)
 *     CmpVolumeContextCanHiveSectionBeExtended @ 0x140A41DB0 (CmpVolumeContextCanHiveSectionBeExtended.c)
 *     CmpVolumeContextMustHiveFilePagesBeKeptLocal @ 0x140A41DFC (CmpVolumeContextMustHiveFilePagesBeKeptLocal.c)
 *     HvViewMapContainsLockedPages @ 0x140A639CC (HvViewMapContainsLockedPages.c)
 *     HvUnlockHiveFilePages @ 0x140A8991C (HvUnlockHiveFilePages.c)
 *     CmpLockRegistry @ 0x140BA9570 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BA9920 (CmpUnlockRegistry.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140BA9B20 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140BA9B3C (HvLockHiveFlusherExclusive.c)
 */

__int64 __fastcall CmpRecheckHiveVolumePolicy(__int64 a1)
{
  __int64 v2; // rsi
  int v3; // ecx
  bool v4; // cf
  __int64 v5; // rcx
  int v6; // ebx

  CmpLockRegistry();
  HvLockHiveFlusherExclusive(a1);
  v2 = *(_QWORD *)(a1 + 4792);
  if ( !v2 )
    goto LABEL_13;
  if ( (unsigned __int8)CmpVolumeContextMustHiveFilePagesBeKeptLocal(*(_QWORD *)(a1 + 4792))
    || (v3 = *(_DWORD *)(a1 + 4112), (v3 & 0x20) != 0) )
  {
    if ( (unsigned __int8)HvViewMapContainsLockedPages(a1 + 224) )
      CmpArmLazyWriter(2, 0LL, 0);
    goto LABEL_11;
  }
  if ( (*(_DWORD *)(a1 + 160) & 0x8000) == 0 )
  {
    v4 = (v3 & 0x10000) != 0;
    v5 = a1;
    if ( !v4 )
    {
      HvUnlockHiveFlusherExclusive(a1);
      CmpUnlockRegistry();
      v6 = CmpAdjustFileCFSafety(*(HANDLE *)(a1 + 1544));
      CmpLockRegistry();
      HvLockHiveFlusherExclusive(a1);
      if ( v6 < 0 )
        goto LABEL_11;
      *(_DWORD *)(a1 + 4112) |= 0x10000u;
      v5 = a1;
    }
    HvUnlockHiveFilePages(v5);
  }
LABEL_11:
  if ( !(unsigned __int8)CmpVolumeContextCanHiveSectionBeExtended(v2) )
    HvMarkHiveWithNoSectionExtend(a1);
LABEL_13:
  HvUnlockHiveFlusherExclusive(a1);
  return CmpUnlockRegistry();
}
