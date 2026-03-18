/*
 * XREFs of KeAcquireInterruptSpinLock @ 0x140443990
 * Callers:
 *     <none>
 * Callees:
 *     KiAcquireSpinLockInstrumented @ 0x140253620 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1402536F0 (KxWaitForSpinLockAndAcquire.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

KIRQL __stdcall KeAcquireInterruptSpinLock(PKINTERRUPT Interrupt)
{
  unsigned __int64 SynchronizeIrql; // rdx
  PKINTERRUPT v2; // rbx
  KIRQL CurrentIrql; // di
  volatile signed __int32 *ActualLock; // rcx

  SynchronizeIrql = Interrupt->SynchronizeIrql;
  v2 = Interrupt;
  if ( !(_BYTE)SynchronizeIrql )
    KeBugCheckEx(0x13Bu, 1uLL, (ULONG_PTR)Interrupt, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(SynchronizeIrql);
  if ( KiIrqlFlags )
  {
    LOBYTE(Interrupt) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(Interrupt);
  }
  ActualLock = (volatile signed __int32 *)v2->ActualLock;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    if ( _interlockedbittestandset64(ActualLock, 0LL) )
      KxWaitForSpinLockAndAcquire(ActualLock);
  }
  else
  {
    KiAcquireSpinLockInstrumented(ActualLock);
  }
  return CurrentIrql;
}
