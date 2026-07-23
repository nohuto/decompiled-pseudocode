/*
 * XREFs of CcFlushCachePostProcess @ 0x1402791F0
 * Callers:
 *     CcFlushCachePriv @ 0x1402771F0 (CcFlushCachePriv.c)
 *     CcWriteBehindInternal @ 0x140279FE0 (CcWriteBehindInternal.c)
 *     CcWriteBehindAsync @ 0x14027B44C (CcWriteBehindAsync.c)
 *     CcQueueAsyncLazywriteCompletion @ 0x14057B740 (CcQueueAsyncLazywriteCompletion.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     CcUpdateLazyWriterPerf @ 0x1402793A4 (CcUpdateLazyWriterPerf.c)
 *     CcDecrementOpenCount @ 0x140279504 (CcDecrementOpenCount.c)
 *     CcPostDeferredWrites @ 0x1402795B0 (CcPostDeferredWrites.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140359870 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall CcFlushCachePostProcess(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 v2; // rsi
  __int64 v4; // rdi
  char v5; // r14
  int *v6; // r15
  volatile __int64 *v7; // rsi
  unsigned __int8 CurrentIrql; // bp
  __int64 v9; // rdx
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v1 = *a1;
  v2 = a1[1];
  v4 = a1[2];
  v5 = *((_BYTE *)a1 + 132);
  v6 = (int *)a1[14];
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( *((_DWORD *)a1 + 13) && *(_QWORD *)a1[23] != a1[23] )
    CcPostDeferredWrites(v1, v2);
  if ( a1[30] )
    CcUpdateLazyWriterPerf(
      v2,
      a1 + 29,
      a1 + 30,
      *((unsigned int *)a1 + 62),
      LockHandle.LockQueue.Next,
      LockHandle.LockQueue.Lock,
      *(_QWORD *)&LockHandle.OldIrql);
  if ( v4 )
  {
    v7 = (volatile __int64 *)(v1 + 768);
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v1 + 768);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    LockHandle.OldIrql = CurrentIrql;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v9 = _InterlockedExchange64(v7, (__int64)&LockHandle);
      if ( v9 )
        KxWaitForLockOwnerShip(&LockHandle, v9);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented(&LockHandle, v7);
    }
    CcDecrementOpenCount(v4);
    if ( !v5 )
      --*(_DWORD *)(v4 + 524);
    if ( *((_BYTE *)a1 + 138) && *v6 >= 0 && *((int *)a1 + 32) >= 0 && (*(_DWORD *)(v4 + 112) || *(_DWORD *)(v4 + 524)) )
      *((_DWORD *)a1 + 32) = -1073741740;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  result = *((unsigned int *)a1 + 32);
  if ( (int)result < 0 )
    *v6 = result;
  return result;
}
