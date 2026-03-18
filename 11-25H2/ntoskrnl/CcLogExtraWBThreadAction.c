/*
 * XREFs of CcLogExtraWBThreadAction @ 0x1404CD8C8
 * Callers:
 *     CcWorkerThread @ 0x1404DBCE0 (CcWorkerThread.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     CcPerfLogExtraWBThreadAction @ 0x1404CD96C (CcPerfLogExtraWBThreadAction.c)
 */

__int64 __fastcall CcLogExtraWBThreadAction(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rsi
  __int64 v7; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 768), &LockHandle);
  v6 = *(_QWORD *)(a1 + 1056);
  v7 = *(_QWORD *)(a1 + 1080);
  LODWORD(a2) = *(_DWORD *)(a2 + 152);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return CcPerfLogExtraWBThreadAction(a3, a2, v6, v7, *(_QWORD *)(**(_QWORD **)(a1 + 8) + 18688LL));
}
