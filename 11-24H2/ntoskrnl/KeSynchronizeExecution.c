/*
 * XREFs of KeSynchronizeExecution @ 0x140284000
 * Callers:
 *     DifKeSynchronizeExecutionWrapper @ 0x14062F370 (DifKeSynchronizeExecutionWrapper.c)
 * Callees:
 *     KiReleaseSpinLockInstrumented @ 0x14027E690 (KiReleaseSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x1402851B0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140285280 (KxWaitForSpinLockAndAcquire.c)
 *     KiSynchronizePassiveInterruptExecution @ 0x1404C1BD4 (KiSynchronizePassiveInterruptExecution.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

BOOLEAN __stdcall KeSynchronizeExecution(
        PKINTERRUPT Interrupt,
        PKSYNCHRONIZE_ROUTINE SynchronizeRoutine,
        PVOID SynchronizeContext)
{
  unsigned __int64 SynchronizeIrql; // rdx
  unsigned __int8 CurrentIrql; // bl
  unsigned __int64 *ActualLock; // rcx
  BOOLEAN v9; // si
  unsigned __int64 *v10; // rcx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  SynchronizeIrql = Interrupt->SynchronizeIrql;
  if ( !(_BYTE)SynchronizeIrql )
    return KiSynchronizePassiveInterruptExecution(Interrupt, SynchronizeRoutine);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(SynchronizeIrql);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, SynchronizeIrql);
  ActualLock = Interrupt->ActualLock;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    if ( _interlockedbittestandset64((volatile signed __int32 *)ActualLock, 0LL) )
      KxWaitForSpinLockAndAcquire();
  }
  else
  {
    KiAcquireSpinLockInstrumented(ActualLock);
  }
  v9 = guard_dispatch_icall_no_overrides(SynchronizeContext, SynchronizeIrql);
  v10 = Interrupt->ActualLock;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    _InterlockedAnd64((volatile signed __int64 *)v10, 0LL);
  else
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)v10, retaddr);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return v9;
}
