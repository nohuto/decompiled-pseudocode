/*
 * XREFs of HalpDmaDequeueAdapter @ 0x140337000
 * Callers:
 *     HalpDmaProcessMapRegisterQueueV3 @ 0x1403320C0 (HalpDmaProcessMapRegisterQueueV3.c)
 *     HalpDmaProcessMapRegisterQueueV2 @ 0x140336B3C (HalpDmaProcessMapRegisterQueueV2.c)
 * Callees:
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140301030 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 */

_QWORD *__fastcall HalpDmaDequeueAdapter(__int64 a1, char a2)
{
  volatile __int64 *v2; // rbx
  __int64 v4; // rdi
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB **v6; // rdx
  _QWORD **v7; // rax
  _QWORD *v8; // rbx
  _QWORD *v10; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = (volatile __int64 *)(a1 + 128);
  LockHandle.LockQueue.Next = 0LL;
  v4 = a1;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 128);
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
    v6 = (struct _KPRCB **)_InterlockedExchange64(v2, (__int64)&LockHandle);
    if ( v6 )
      KxWaitForLockOwnerShip((struct _KPRCB *)&LockHandle, v6);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, v2);
  }
  if ( a2 )
    v7 = (_QWORD **)(v4 + 176);
  else
    v7 = (_QWORD **)(v4 + 160);
  v8 = *v7;
  if ( *v7 == v7 )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return 0LL;
  }
  else
  {
    if ( (_QWORD **)v8[1] != v7 || (v10 = (_QWORD *)*v8, *(_QWORD **)(*v8 + 8LL) != v8) )
      __fastfail(3u);
    *v7 = v10;
    v10[1] = v7;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return v8 - 21;
  }
}
