/*
 * XREFs of CcRepostToSynchronousLazywriter @ 0x14027B688
 * Callers:
 *     CcAsyncLazywriteWorker @ 0x14027B0C8 (CcAsyncLazywriteWorker.c)
 *     CcAsyncLazywriteWorkerMulti @ 0x1404C0AEC (CcAsyncLazywriteWorkerMulti.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     CcPostWorkQueue @ 0x14027AE6C (CcPostWorkQueue.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall CcRepostToSynchronousLazywriter(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rsi
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rax
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
    v7 = 72LL;
    v8 = a1 | 1;
  }
  else
  {
    if ( *(_DWORD *)(v1 + 4) || (v7 = 120LL, *(_DWORD *)(v1 + 112)) )
      v7 = 104LL;
    v8 = a1;
  }
  *(_QWORD *)(v1 + 504) = v8;
  CcPostWorkQueue((_QWORD *)a1, v2 + v7, v5, v6);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
