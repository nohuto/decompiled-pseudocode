/*
 * XREFs of CcRepostToSynchronousLazywriter @ 0x1402A93E4
 * Callers:
 *     CcAsyncLazywriteWorker @ 0x1402A8E24 (CcAsyncLazywriteWorker.c)
 *     CcAsyncLazywriteWorkerMulti @ 0x1404C768C (CcAsyncLazywriteWorkerMulti.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     CcPostWorkQueue @ 0x1402A7488 (CcPostWorkQueue.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall CcRepostToSynchronousLazywriter(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rsi
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 24);
  v2 = *(_QWORD *)(a1 + 152);
  *(_QWORD *)(a1 + 16) = v1;
  *(_DWORD *)(a1 + 128) = 2;
  v4 = *(_QWORD *)(a1 + 136);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 768), &LockHandle);
  if ( (*(_DWORD *)(v1 + 152) & 0x10000) != 0 )
  {
    v5 = 72LL;
    v6 = a1 | 1;
  }
  else
  {
    if ( *(_DWORD *)(v1 + 4) || (v5 = 120LL, *(_DWORD *)(v1 + 112)) )
      v5 = 104LL;
    v6 = a1;
  }
  *(_QWORD *)(v1 + 504) = v6;
  CcPostWorkQueue(a1, v2 + v5);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
