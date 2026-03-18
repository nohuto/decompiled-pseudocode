/*
 * XREFs of KeTryToAcquireQueuedSpinLock @ 0x1405BC0C0
 * Callers:
 *     DifKeTryToAcquireQueuedSpinLockWrapper @ 0x140631210 (DifKeTryToAcquireQueuedSpinLockWrapper.c)
 * Callees:
 *     KxTryToAcquireQueuedSpinLock @ 0x1402DA128 (KxTryToAcquireQueuedSpinLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

LOGICAL __stdcall KeTryToAcquireQueuedSpinLock(KSPIN_LOCK_QUEUE_NUMBER Number, PKIRQL OldIrql)
{
  unsigned __int8 CurrentIrql; // bl
  char *v5; // rcx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  v5 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 16 * Number;
  if ( (unsigned int)KxTryToAcquireQueuedSpinLock((signed __int64)v5, *((_DWORD **)v5 + 1)) )
  {
    *OldIrql = CurrentIrql;
    return 1;
  }
  else
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    return 0;
  }
}
