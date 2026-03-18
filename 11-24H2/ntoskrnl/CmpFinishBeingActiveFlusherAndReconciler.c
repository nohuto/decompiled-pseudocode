/*
 * XREFs of CmpFinishBeingActiveFlusherAndReconciler @ 0x1407D7F7C
 * Callers:
 *     CmShutdownSystem1 @ 0x1406679A8 (CmShutdownSystem1.c)
 *     CmpLoadHiveThread @ 0x1407CB060 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1407CBE38 (CmpMountPreloadedHives.c)
 *     CmpRefreshHive @ 0x1407CEAF0 (CmpRefreshHive.c)
 *     CmpSaveKeyByFileCopy @ 0x1407CEFE0 (CmpSaveKeyByFileCopy.c)
 *     CmReplaceKey @ 0x1407DA2E8 (CmReplaceKey.c)
 * Callees:
 *     CmpWakeWriteQueueWaiters @ 0x14097C0F0 (CmpWakeWriteQueueWaiters.c)
 *     CmpReleaseWriteQueue @ 0x14097E3D4 (CmpReleaseWriteQueue.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140BB9A98 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140BB9AB4 (HvLockHiveFlusherExclusive.c)
 *     CmpLockRegistry @ 0x140BB9E60 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BB9F50 (CmpUnlockRegistry.c)
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
