/*
 * XREFs of CmpFinishBeingActiveFlusherAndReconciler @ 0x1407C87E4
 * Callers:
 *     CmShutdownSystem1 @ 0x14065C0A4 (CmShutdownSystem1.c)
 *     CmpLoadHiveThread @ 0x1407BB850 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1407BC620 (CmpMountPreloadedHives.c)
 *     CmpRefreshHive @ 0x1407BF2D8 (CmpRefreshHive.c)
 *     CmpSaveKeyByFileCopy @ 0x1407BF7D0 (CmpSaveKeyByFileCopy.c)
 *     CmReplaceKey @ 0x1407CAB24 (CmReplaceKey.c)
 * Callees:
 *     CmpReleaseWriteQueue @ 0x140884B7C (CmpReleaseWriteQueue.c)
 *     CmpWakeWriteQueueWaiters @ 0x140A4F73C (CmpWakeWriteQueueWaiters.c)
 *     CmpLockRegistry @ 0x140BA9570 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BA9920 (CmpUnlockRegistry.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140BA9B20 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140BA9B3C (HvLockHiveFlusherExclusive.c)
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
