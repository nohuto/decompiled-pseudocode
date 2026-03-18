/*
 * XREFs of VfDriverIsKernelImageAddress @ 0x140BA7ECC
 * Callers:
 *     MmIsVerifierEnabled @ 0x140B82D50 (MmIsVerifierEnabled.c)
 *     VerifierKeAcquireQueuedSpinLock @ 0x140B8FBE0 (VerifierKeAcquireQueuedSpinLock.c)
 *     VfPendingShouldForce @ 0x140B91BC8 (VfPendingShouldForce.c)
 *     VerifierKeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140B94F30 (VerifierKeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     VerifierKeAcquireInStackQueuedSpinLockCommon @ 0x140B94FE8 (VerifierKeAcquireInStackQueuedSpinLockCommon.c)
 *     VerifierKeAcquireInStackQueuedSpinLockForDpcCommon @ 0x140B95110 (VerifierKeAcquireInStackQueuedSpinLockForDpcCommon.c)
 *     VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x140B951D0 (VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeAcquireQueuedSpinLockRaiseToSynch @ 0x140B952D0 (VerifierKeAcquireQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeAcquireSpinLockAtDpcLevel @ 0x140B953C0 (VerifierKeAcquireSpinLockAtDpcLevel.c)
 *     VerifierKeSynchronizeExecution @ 0x140B959B0 (VerifierKeSynchronizeExecution.c)
 *     VerifierKeTryToAcquireQueuedSpinLock @ 0x140B95A90 (VerifierKeTryToAcquireQueuedSpinLock.c)
 *     VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch @ 0x140B95B90 (VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeTryToAcquireSpinLockAtDpcLevel @ 0x140B95C90 (VerifierKeTryToAcquireSpinLockAtDpcLevel.c)
 *     VerifierPortKeAcquireSpinLockNoXdv @ 0x140B95E90 (VerifierPortKeAcquireSpinLockNoXdv.c)
 *     ViKeAcquireSpinLockCommon @ 0x140B960C0 (ViKeAcquireSpinLockCommon.c)
 *     ViFaultsInjectionNotification @ 0x140B96BEC (ViFaultsInjectionNotification.c)
 *     VfTargetDriversGetVerifierData @ 0x140BA7E7C (VfTargetDriversGetVerifierData.c)
 *     VfHandlePoolAlloc @ 0x140BA8AA0 (VfHandlePoolAlloc.c)
 *     VfCheckUserHandle @ 0x140BA9228 (VfCheckUserHandle.c)
 * Callees:
 *     <none>
 */

bool __fastcall VfDriverIsKernelImageAddress(unsigned __int64 a1)
{
  bool result; // al

  result = 0;
  if ( ViDriverKernelBase )
  {
    if ( a1 >= ViDriverKernelBase )
      return a1 < ViDriverKernelEnd;
  }
  return result;
}
