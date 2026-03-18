/*
 * XREFs of CmpRecoverFlushProtocolStateFromFiles @ 0x1407DE6E0
 * Callers:
 *     CmpLoadHiveThread @ 0x1407CB060 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1407CBE38 (CmpMountPreloadedHives.c)
 * Callees:
 *     SetFailureLocation @ 0x1404649E0 (SetFailureLocation.c)
 *     HvRecoverFlushProtocolStateFromFiles @ 0x1407DF454 (HvRecoverFlushProtocolStateFromFiles.c)
 *     HvUnlockHiveFlusherShared @ 0x14086A604 (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x14087DD28 (HvLockHiveFlusherShared.c)
 *     HvLockHiveWriter @ 0x140882A38 (HvLockHiveWriter.c)
 *     HvUnlockHiveWriter @ 0x140882E28 (HvUnlockHiveWriter.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x140A54E28 (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     CmpLockRegistry @ 0x140BB9E60 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BB9F50 (CmpUnlockRegistry.c)
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
