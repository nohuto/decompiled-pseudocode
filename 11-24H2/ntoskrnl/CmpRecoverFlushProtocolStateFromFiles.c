/*
 * XREFs of CmpRecoverFlushProtocolStateFromFiles @ 0x1407DEC30
 * Callers:
 *     CmpLoadHiveThread @ 0x1407CB550 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1407CC328 (CmpMountPreloadedHives.c)
 * Callees:
 *     SetFailureLocation @ 0x14045B110 (SetFailureLocation.c)
 *     HvRecoverFlushProtocolStateFromFiles @ 0x1407DF9A4 (HvRecoverFlushProtocolStateFromFiles.c)
 *     HvUnlockHiveFlusherShared @ 0x14086E934 (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x140881BD8 (HvLockHiveFlusherShared.c)
 *     HvLockHiveWriter @ 0x1408868E8 (HvLockHiveWriter.c)
 *     HvUnlockHiveWriter @ 0x140886CD8 (HvUnlockHiveWriter.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x140A4CD78 (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     CmpLockRegistry @ 0x140BBBE60 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
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
