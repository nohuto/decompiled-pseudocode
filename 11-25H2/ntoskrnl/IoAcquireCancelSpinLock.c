/*
 * XREFs of IoAcquireCancelSpinLock @ 0x140420D40
 * Callers:
 *     <none>
 * Callees:
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140301030 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __stdcall IoAcquireCancelSpinLock(PKIRQL Irql)
{
  UCHAR CurrentIrql; // bl
  char *ArbitraryUserPointer; // rcx
  volatile __int64 *v4; // r8
  struct _KPRCB *v5; // rcx
  struct _KPRCB **v6; // rdx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
  ArbitraryUserPointer = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer;
  v4 = (volatile __int64 *)*((_QWORD *)ArbitraryUserPointer + 15);
  v5 = (struct _KPRCB *)(ArbitraryUserPointer + 112);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v6 = (struct _KPRCB **)_InterlockedExchange64(v4, (__int64)v5);
    if ( v6 )
      KxWaitForLockOwnerShip(v5, v6);
    *Irql = CurrentIrql;
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented((__int64)v5, v4);
    *Irql = CurrentIrql;
  }
}
