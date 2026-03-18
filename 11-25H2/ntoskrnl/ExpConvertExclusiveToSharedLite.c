/*
 * XREFs of ExpConvertExclusiveToSharedLite @ 0x1402800E8
 * Callers:
 *     ExConvertExclusiveToSharedLite @ 0x140280040 (ExConvertExclusiveToSharedLite.c)
 * Callees:
 *     KeWakeWaitChain @ 0x140280200 (KeWakeWaitChain.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140301030 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpApplyPriorityBoost @ 0x140324DC0 (ExpApplyPriorityBoost.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall ExpConvertExclusiveToSharedLite(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  volatile __int64 *v4; // rbx
  __int64 v5; // rdi
  unsigned __int8 CurrentIrql; // si
  __int64 v7; // rdx
  __int64 v8; // rax
  int v9; // ebx
  char v10; // si
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  v4 = (volatile __int64 *)(a1 + 96);
  v5 = a1;
  LockHandle.LockQueue.Next = 0LL;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 96);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1);
  }
  LockHandle.OldIrql = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v7 = _InterlockedExchange64(v4, (__int64)&LockHandle);
    if ( v7 )
      KxWaitForLockOwnerShip(&LockHandle, v7, a3, a4);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, v4);
  }
  *(_WORD *)(v5 + 26) &= ~0x80u;
  v8 = *(_QWORD *)(v5 + 32);
  *(_QWORD *)(v5 + 32) = 0LL;
  v9 = *(_DWORD *)(v5 + 72);
  *(_DWORD *)(v5 + 72) = 0;
  *(_DWORD *)(v5 + 64) += v9;
  v10 = *(_BYTE *)(v5 + 27);
  v13 = v8;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  result = KeWakeWaitChain(&v13, 0LL, 0LL);
  if ( v9 && v10 )
    result = ExpApplyPriorityBoost(v5, 65280LL, KeGetCurrentThread());
  __incgsdword(0x9074u);
  return result;
}
