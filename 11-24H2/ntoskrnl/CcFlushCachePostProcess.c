/*
 * XREFs of CcFlushCachePostProcess @ 0x1402ABF10
 * Callers:
 *     CcWriteBehindInternal @ 0x1402A81F0 (CcWriteBehindInternal.c)
 *     CcWriteBehindAsync @ 0x1402A91A8 (CcWriteBehindAsync.c)
 *     CcFlushCachePriv @ 0x1402AC810 (CcFlushCachePriv.c)
 *     CcQueueAsyncLazywriteCompletion @ 0x14057E2B0 (CcQueueAsyncLazywriteCompletion.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     CcPostDeferredWrites @ 0x1402AAB14 (CcPostDeferredWrites.c)
 *     CcDecrementOpenCount @ 0x1402ABDBC (CcDecrementOpenCount.c)
 *     CcUpdateLazyWriterPerf @ 0x1402AC0C4 (CcUpdateLazyWriterPerf.c)
 *     KxWaitForLockOwnerShip @ 0x1402D6990 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402D85F0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall CcFlushCachePostProcess(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rsi
  __int64 v4; // rdi
  char v5; // r14
  int *v6; // r15
  volatile __int64 *v7; // rsi
  unsigned __int8 CurrentIrql; // bp
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v1 = *(_QWORD *)a1;
  v2 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(_BYTE *)(a1 + 132);
  v6 = *(int **)(a1 + 112);
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( *(_DWORD *)(a1 + 52) && **(_QWORD **)(a1 + 184) != *(_QWORD *)(a1 + 184) )
    CcPostDeferredWrites(v1, v2);
  if ( *(_QWORD *)(a1 + 240) )
    CcUpdateLazyWriterPerf(
      v2,
      a1 + 232,
      a1 + 240,
      *(unsigned int *)(a1 + 248),
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
      if ( _InterlockedExchange64(v7, (__int64)&LockHandle) )
        KxWaitForLockOwnerShip(&LockHandle);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented(&LockHandle, v7);
    }
    CcDecrementOpenCount(v4);
    if ( !v5 )
      --*(_DWORD *)(v4 + 524);
    if ( *(_BYTE *)(a1 + 138) && *v6 >= 0 && *(int *)(a1 + 128) >= 0 && (*(_DWORD *)(v4 + 112) || *(_DWORD *)(v4 + 524)) )
      *(_DWORD *)(a1 + 128) = -1073741740;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  result = *(unsigned int *)(a1 + 128);
  if ( (int)result < 0 )
    *v6 = result;
  return result;
}
