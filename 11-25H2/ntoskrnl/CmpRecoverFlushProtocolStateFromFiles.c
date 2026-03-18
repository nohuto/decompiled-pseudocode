/*
 * XREFs of CmpRecoverFlushProtocolStateFromFiles @ 0x1407CEE08
 * Callers:
 *     CmpLoadHiveThread @ 0x1407BB850 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1407BC620 (CmpMountPreloadedHives.c)
 * Callees:
 *     SetFailureLocation @ 0x140465824 (SetFailureLocation.c)
 *     HvRecoverFlushProtocolStateFromFiles @ 0x1407CFB7C (HvRecoverFlushProtocolStateFromFiles.c)
 *     HvUnlockHiveFlusherShared @ 0x14086CDC0 (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x14087DA14 (HvLockHiveFlusherShared.c)
 *     HvLockHiveWriter @ 0x140880B44 (HvLockHiveWriter.c)
 *     HvUnlockHiveWriter @ 0x140880F30 (HvUnlockHiveWriter.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x140A5100C (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     CmpLockRegistry @ 0x140BA9570 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BA9920 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpRecoverFlushProtocolStateFromFiles(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  int v4; // eax
  int v5; // ebx
  __int64 v6; // rcx

  v4 = HvRecoverFlushProtocolStateFromFiles();
  v5 = v4;
  if ( v4 >= 0 )
  {
    CmpLockRegistry();
    HvLockHiveFlusherShared(BugCheckParameter2);
    HvLockHiveWriter(BugCheckParameter2);
    v5 = HvCheckAndUpdateHiveBackupTimeStamp(BugCheckParameter2);
    HvUnlockHiveWriter(BugCheckParameter2);
    HvUnlockHiveFlusherShared(BugCheckParameter2);
    CmpUnlockRegistry(v6);
    if ( v5 >= 0 )
      return 0;
    else
      SetFailureLocation(a2, 0, 37, v5, 32);
  }
  else
  {
    SetFailureLocation(a2, 0, 37, v4, 16);
  }
  return (unsigned int)v5;
}
