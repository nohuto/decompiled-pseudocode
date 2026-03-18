/*
 * XREFs of CcFlushCachePostProcess @ 0x1402D9BE0
 * Callers:
 *     CcFlushCachePriv @ 0x1402DA4E0 (CcFlushCachePriv.c)
 *     CcWriteBehindAsync @ 0x1403AB04C (CcWriteBehindAsync.c)
 *     CcWriteBehindInternal @ 0x1403AC840 (CcWriteBehindInternal.c)
 *     CcQueueAsyncLazywriteCompletion @ 0x14057AF90 (CcQueueAsyncLazywriteCompletion.c)
 * Callees:
 *     CcDecrementOpenCount @ 0x1402D9A30 (CcDecrementOpenCount.c)
 *     CcUpdateLazyWriterPerf @ 0x1402D9DA0 (CcUpdateLazyWriterPerf.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140301030 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     CcPostDeferredWrites @ 0x1403A5FC4 (CcPostDeferredWrites.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall CcFlushCachePostProcess(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  __int64 v5; // rsi
  __int64 v7; // rdi
  char v8; // r14
  int *v9; // r15
  __int64 *v10; // r8
  volatile __int64 *v11; // rsi
  unsigned __int8 CurrentIrql; // bp
  __int64 v13; // rdx
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v4 = *a1;
  v5 = a1[1];
  v7 = a1[2];
  v8 = *((_BYTE *)a1 + 132);
  v9 = (int *)a1[14];
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( *((_DWORD *)a1 + 13) && *(_QWORD *)a1[23] != a1[23] )
    CcPostDeferredWrites(v4, v5);
  v10 = a1 + 30;
  if ( a1[30] )
    CcUpdateLazyWriterPerf(
      v5,
      a1 + 29,
      v10,
      *((unsigned int *)a1 + 62),
      LockHandle.LockQueue.Next,
      LockHandle.LockQueue.Lock,
      *(_QWORD *)&LockHandle.OldIrql);
  if ( v7 )
  {
    v11 = (volatile __int64 *)(v4 + 768);
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v4 + 768);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
    LockHandle.OldIrql = CurrentIrql;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v13 = _InterlockedExchange64(v11, (__int64)&LockHandle);
      if ( v13 )
        KxWaitForLockOwnerShip(&LockHandle, v13, v10, a4);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented(&LockHandle, v11);
    }
    CcDecrementOpenCount(v7);
    if ( !v8 )
      --*(_DWORD *)(v7 + 524);
    if ( *((_BYTE *)a1 + 138) && *v9 >= 0 && *((int *)a1 + 32) >= 0 && (*(_DWORD *)(v7 + 112) || *(_DWORD *)(v7 + 524)) )
      *((_DWORD *)a1 + 32) = -1073741740;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  result = *((unsigned int *)a1 + 32);
  if ( (int)result < 0 )
    *v9 = result;
  return result;
}
