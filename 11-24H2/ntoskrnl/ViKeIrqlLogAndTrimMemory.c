/*
 * XREFs of ViKeIrqlLogAndTrimMemory @ 0x140BA7F68
 * Callers:
 *     VerifierKeAcquireQueuedSpinLock @ 0x140B8FBE0 (VerifierKeAcquireQueuedSpinLock.c)
 *     VerifierKeAcquireInStackQueuedSpinLockCommon @ 0x140B94FE8 (VerifierKeAcquireInStackQueuedSpinLockCommon.c)
 *     VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x140B951D0 (VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeAcquireQueuedSpinLockRaiseToSynch @ 0x140B952D0 (VerifierKeAcquireQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeSynchronizeExecution @ 0x140B959B0 (VerifierKeSynchronizeExecution.c)
 *     VerifierKeTryToAcquireQueuedSpinLock @ 0x140B95A90 (VerifierKeTryToAcquireQueuedSpinLock.c)
 *     VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch @ 0x140B95B90 (VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch.c)
 *     VerifierPortKeAcquireSpinLockNoXdv @ 0x140B95E90 (VerifierPortKeAcquireSpinLockNoXdv.c)
 *     ViKeAcquireSpinLockCommon @ 0x140B960C0 (ViKeAcquireSpinLockCommon.c)
 *     VerifierKeAcquireSpinLockRaiseToDpc @ 0x140BA8320 (VerifierKeAcquireSpinLockRaiseToDpc.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140257E20 (KeAreInterruptsEnabled.c)
 *     MmVerifierTrimMemory @ 0x140BA47F8 (MmVerifierTrimMemory.c)
 *     VfKeIrqlLogRaise @ 0x140BA7FE0 (VfKeIrqlLogRaise.c)
 */

__int64 __fastcall ViKeIrqlLogAndTrimMemory(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // bl
  unsigned __int8 CurrentIrql; // di
  __int64 v4; // rsi

  v2 = a1;
  if ( !ViIrqlTrimAndLog )
    return 0LL;
  CurrentIrql = KeGetCurrentIrql();
  LOBYTE(a2) = a1;
  LOBYTE(a1) = CurrentIrql;
  v4 = VfKeIrqlLogRaise(a1, a2);
  if ( KeAreInterruptsEnabled() && CurrentIrql < 2u && v2 >= 2u )
  {
    if ( ViIrqlTrimAndLog )
      MmVerifierTrimMemory();
  }
  return v4;
}
