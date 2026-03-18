/*
 * XREFs of KeSynchronizeExecution @ 0x14041A4F0
 * Callers:
 *     DifKeSynchronizeExecutionWrapper @ 0x140624DF0 (DifKeSynchronizeExecutionWrapper.c)
 * Callees:
 *     KiAcquireSpinLockInstrumented @ 0x140253620 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1402536F0 (KxWaitForSpinLockAndAcquire.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402EAAD0 (KiReleaseSpinLockInstrumented.c)
 *     KiSynchronizePassiveInterruptExecution @ 0x14041A5E8 (KiSynchronizePassiveInterruptExecution.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

BOOLEAN __stdcall KeSynchronizeExecution(
        PKINTERRUPT Interrupt,
        PKSYNCHRONIZE_ROUTINE SynchronizeRoutine,
        PVOID SynchronizeContext)
{
  unsigned __int64 SynchronizeIrql; // rdx
  unsigned __int8 CurrentIrql; // di
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
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
  ActualLock = Interrupt->ActualLock;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    if ( _interlockedbittestandset64((volatile signed __int32 *)ActualLock, 0LL) )
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)ActualLock);
  }
  else
  {
    KiAcquireSpinLockInstrumented((volatile signed __int32 *)ActualLock);
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
