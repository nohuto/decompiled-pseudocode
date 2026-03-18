/*
 * XREFs of KeSynchronizeExecution @ 0x1402539F0
 * Callers:
 *     DifKeSynchronizeExecutionWrapper @ 0x140630DB0 (DifKeSynchronizeExecutionWrapper.c)
 * Callees:
 *     KiReleaseSpinLockInstrumented @ 0x14024E080 (KiReleaseSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x140254BA0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140254C70 (KxWaitForSpinLockAndAcquire.c)
 *     KiSynchronizePassiveInterruptExecution @ 0x1404C8588 (KiSynchronizePassiveInterruptExecution.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

BOOLEAN __stdcall KeSynchronizeExecution(
        PKINTERRUPT Interrupt,
        PKSYNCHRONIZE_ROUTINE SynchronizeRoutine,
        PVOID SynchronizeContext)
{
  __int64 v3; // r9
  unsigned __int64 SynchronizeIrql; // rdx
  unsigned __int8 CurrentIrql; // bl
  unsigned __int64 *ActualLock; // rcx
  BOOLEAN v10; // si
  unsigned __int64 *v11; // rcx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  SynchronizeIrql = Interrupt->SynchronizeIrql;
  if ( !(_BYTE)SynchronizeIrql )
    return KiSynchronizePassiveInterruptExecution(Interrupt, SynchronizeRoutine);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(SynchronizeIrql);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, SynchronizeIrql, SynchronizeContext);
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
  v10 = guard_dispatch_icall_no_overrides(SynchronizeContext, SynchronizeIrql, SynchronizeContext, v3);
  v11 = Interrupt->ActualLock;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    _InterlockedAnd64((volatile signed __int64 *)v11, 0LL);
  else
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)v11, retaddr);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return v10;
}
