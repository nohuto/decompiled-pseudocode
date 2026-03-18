/*
 * XREFs of ExpConvertExclusiveToSharedLite @ 0x1403D79F8
 * Callers:
 *     ExConvertExclusiveToSharedLite @ 0x1403D7950 (ExConvertExclusiveToSharedLite.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpApplyPriorityBoost @ 0x140277A10 (ExpApplyPriorityBoost.c)
 *     KxWaitForLockOwnerShip @ 0x1402D6990 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402D85F0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeWakeWaitChain @ 0x1403D7B10 (KeWakeWaitChain.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

char __fastcall ExpConvertExclusiveToSharedLite(__int64 a1)
{
  volatile __int64 *v1; // rbx
  __int64 v2; // rdi
  unsigned __int8 CurrentIrql; // si
  _QWORD *v4; // rdx
  __int64 v5; // rax
  int v6; // ebx
  char v7; // si
  char result; // al
  __int64 v9; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  v1 = (volatile __int64 *)(a1 + 96);
  v2 = a1;
  LockHandle.LockQueue.Next = 0LL;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 96);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  LockHandle.OldIrql = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v4 = (_QWORD *)_InterlockedExchange64(v1, (__int64)&LockHandle);
    if ( v4 )
      KxWaitForLockOwnerShip((__int64)&LockHandle, v4);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, v1);
  }
  *(_WORD *)(v2 + 26) &= ~0x80u;
  v5 = *(_QWORD *)(v2 + 32);
  *(_QWORD *)(v2 + 32) = 0LL;
  v6 = *(_DWORD *)(v2 + 72);
  *(_DWORD *)(v2 + 72) = 0;
  *(_DWORD *)(v2 + 64) += v6;
  v7 = *(_BYTE *)(v2 + 27);
  v11 = v5;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  result = KeWakeWaitChain(&v11, 0LL, 0LL);
  if ( v6 && v7 )
    result = ExpApplyPriorityBoost(v2, 65280, (__int64)KeGetCurrentThread(), v9);
  __incgsdword(0x9074u);
  return result;
}
