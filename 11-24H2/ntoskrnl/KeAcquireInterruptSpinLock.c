/*
 * XREFs of KeAcquireInterruptSpinLock @ 0x14043D390
 * Callers:
 *     <none>
 * Callees:
 *     KiAcquireSpinLockInstrumented @ 0x1402851B0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140285280 (KxWaitForSpinLockAndAcquire.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

KIRQL __stdcall KeAcquireInterruptSpinLock(PKINTERRUPT Interrupt)
{
  __int64 v1; // r8
  __int64 v2; // r9
  unsigned __int64 SynchronizeIrql; // rdx
  PKINTERRUPT v4; // rbx
  KIRQL CurrentIrql; // di
  volatile signed __int32 *ActualLock; // rcx

  SynchronizeIrql = Interrupt->SynchronizeIrql;
  v4 = Interrupt;
  if ( !(_BYTE)SynchronizeIrql )
    KeBugCheckEx(0x13Bu, 1uLL, (ULONG_PTR)Interrupt, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(SynchronizeIrql);
  if ( KiIrqlFlags )
  {
    LOBYTE(Interrupt) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(Interrupt, SynchronizeIrql);
  }
  ActualLock = (volatile signed __int32 *)v4->ActualLock;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    if ( _interlockedbittestandset64(ActualLock, 0LL) )
      KxWaitForSpinLockAndAcquire(ActualLock, SynchronizeIrql, v1, v2);
  }
  else
  {
    KiAcquireSpinLockInstrumented(ActualLock);
  }
  return CurrentIrql;
}
