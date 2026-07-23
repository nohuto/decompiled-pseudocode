/*
 * XREFs of ViKeIrqlLogAndTrimMemory @ 0x140BA9F68
 * Callers:
 *     VerifierKeAcquireQueuedSpinLock @ 0x140B91BE0 (VerifierKeAcquireQueuedSpinLock.c)
 *     VerifierKeAcquireInStackQueuedSpinLockCommon @ 0x140B96FE8 (VerifierKeAcquireInStackQueuedSpinLockCommon.c)
 *     VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x140B971D0 (VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeAcquireQueuedSpinLockRaiseToSynch @ 0x140B972D0 (VerifierKeAcquireQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeSynchronizeExecution @ 0x140B979B0 (VerifierKeSynchronizeExecution.c)
 *     VerifierKeTryToAcquireQueuedSpinLock @ 0x140B97A90 (VerifierKeTryToAcquireQueuedSpinLock.c)
 *     VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch @ 0x140B97B90 (VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch.c)
 *     VerifierPortKeAcquireSpinLockNoXdv @ 0x140B97E90 (VerifierPortKeAcquireSpinLockNoXdv.c)
 *     ViKeAcquireSpinLockCommon @ 0x140B980C0 (ViKeAcquireSpinLockCommon.c)
 *     VerifierKeAcquireSpinLockRaiseToDpc @ 0x140BAA320 (VerifierKeAcquireSpinLockRaiseToDpc.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140288430 (KeAreInterruptsEnabled.c)
 *     MmVerifierTrimMemory @ 0x140BA67F8 (MmVerifierTrimMemory.c)
 *     VfKeIrqlLogRaise @ 0x140BA9FE0 (VfKeIrqlLogRaise.c)
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
