/*
 * XREFs of CcCompleteAsyncLazywriteWorker @ 0x14057B38C
 * Callers:
 *     CcCompleteAsyncLazywriteWorkerThread @ 0x14057B450 (CcCompleteAsyncLazywriteWorkerThread.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     CcFindNextWorkQueueEntry @ 0x14027ACDC (CcFindNextWorkQueueEntry.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcCompleteAsyncWriteBehind @ 0x14057B504 (CcCompleteAsyncWriteBehind.c)
 */

void __fastcall CcCompleteAsyncLazywriteWorker(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rbp
  __int64 v3; // rcx
  _QWORD *NextWorkQueueEntry; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( a1 )
  {
    v1 = *(_QWORD *)(a1 + 72);
    memset(&LockHandle, 0, sizeof(LockHandle));
    if ( *(_DWORD *)(a1 + 40) < *(_DWORD *)(*(_QWORD *)(a1 + 64) + 1612LL) )
    {
      v2 = *(_QWORD *)(a1 + 56);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 832), &LockHandle);
      while ( *(_QWORD *)(v1 + 384) != v1 + 384 )
      {
        NextWorkQueueEntry = CcFindNextWorkQueueEntry(v3, v1, (_QWORD *)(v1 + 384));
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        CcCompleteAsyncWriteBehind(NextWorkQueueEntry);
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 832), &LockHandle);
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
  }
}
