/*
 * XREFs of CmpFinishBeingActiveFlusherAndReconciler @ 0x1407D84D0
 * Callers:
 *     CmShutdownSystem1 @ 0x140666298 (CmShutdownSystem1.c)
 *     CmpLoadHiveThread @ 0x1407CB550 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1407CC328 (CmpMountPreloadedHives.c)
 *     CmpRefreshHive @ 0x1407CEFE0 (CmpRefreshHive.c)
 *     CmpSaveKeyByFileCopy @ 0x1407CF4D0 (CmpSaveKeyByFileCopy.c)
 *     CmReplaceKey @ 0x1407DA838 (CmReplaceKey.c)
 * Callees:
 *     CmpWakeWriteQueueWaiters @ 0x140964900 (CmpWakeWriteQueueWaiters.c)
 *     CmpReleaseWriteQueue @ 0x140966BE4 (CmpReleaseWriteQueue.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140BBBA98 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140BBBAB4 (HvLockHiveFlusherExclusive.c)
 *     CmpLockRegistry @ 0x140BBBE60 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpFinishBeingActiveFlusherAndReconciler(__int64 a1)
{
  __int64 v2; // rcx
  struct _KEVENT *v3; // rbx
  __int64 v4; // rcx
  struct _KEVENT *v5; // rdi
  __int64 v6; // rcx

  CmpLockRegistry();
  HvLockHiveFlusherExclusive(a1);
  v3 = (struct _KEVENT *)CmpReleaseWriteQueue(v2, a1 + 4192);
  v5 = (struct _KEVENT *)CmpReleaseWriteQueue(v4, a1 + 4208);
  HvUnlockHiveFlusherExclusive(a1);
  CmpUnlockRegistry(v6);
  CmpWakeWriteQueueWaiters(a1 + 4192, v3);
  return CmpWakeWriteQueueWaiters(a1 + 4208, v5);
}
