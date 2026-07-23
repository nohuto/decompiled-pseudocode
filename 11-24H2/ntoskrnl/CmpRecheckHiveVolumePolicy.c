/*
 * XREFs of CmpRecheckHiveVolumePolicy @ 0x14045AFD0
 * Callers:
 *     CmpLoadKeyCommon @ 0x14045ABA8 (CmpLoadKeyCommon.c)
 *     CmpFinishSystemHivesLoad @ 0x1407CA720 (CmpFinishSystemHivesLoad.c)
 *     CmpHandlePageFileOpenNotification @ 0x1407CFB50 (CmpHandlePageFileOpenNotification.c)
 *     CmpCreateHive @ 0x140931678 (CmpCreateHive.c)
 * Callees:
 *     CmpArmLazyWriter @ 0x140230640 (CmpArmLazyWriter.c)
 *     CmpAdjustFileCFSafety @ 0x1404AD590 (CmpAdjustFileCFSafety.c)
 *     HvMarkHiveWithNoSectionExtend @ 0x1406F9E10 (HvMarkHiveWithNoSectionExtend.c)
 *     CmpVolumeContextCanHiveSectionBeExtended @ 0x140A3BF34 (CmpVolumeContextCanHiveSectionBeExtended.c)
 *     CmpVolumeContextMustHiveFilePagesBeKeptLocal @ 0x140A3BF80 (CmpVolumeContextMustHiveFilePagesBeKeptLocal.c)
 *     HvViewMapContainsLockedPages @ 0x140A5E928 (HvViewMapContainsLockedPages.c)
 *     HvUnlockHiveFilePages @ 0x140A8AF60 (HvUnlockHiveFilePages.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140BBBA98 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140BBBAB4 (HvLockHiveFlusherExclusive.c)
 *     CmpLockRegistry @ 0x140BBBE60 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
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
