/*
 * XREFs of VfDriverLock @ 0x140B8A4B4
 * Callers:
 *     VfIsVerificationEnabledForImage @ 0x1406101C0 (VfIsVerificationEnabledForImage.c)
 *     VfDriverRemoveAllDifVerification @ 0x1406110D4 (VfDriverRemoveAllDifVerification.c)
 *     MmIsDriverSuspectForVerifier @ 0x140B82CF0 (MmIsDriverSuspectForVerifier.c)
 *     VfDriverApplyDifVerification @ 0x140B8A038 (VfDriverApplyDifVerification.c)
 *     VfDriverEnableVerifier @ 0x140B8A250 (VfDriverEnableVerifier.c)
 *     VfDriverEnableVerifierForAll @ 0x140B8A3B4 (VfDriverEnableVerifierForAll.c)
 *     VfDriverRemoveDifVerification @ 0x140B8A4F0 (VfDriverRemoveDifVerification.c)
 *     ViDriverReApplyVerifierForAll @ 0x140B8A8E4 (ViDriverReApplyVerifierForAll.c)
 *     VfThunkAddDriverThunks @ 0x140B96E3C (VfThunkAddDriverThunks.c)
 *     VfThunkAddSpecialDriverThunks @ 0x140B96ED4 (VfThunkAddSpecialDriverThunks.c)
 *     VfSuspectApplyDifVolatileVerification @ 0x140B9A568 (VfSuspectApplyDifVolatileVerification.c)
 *     VfSuspectDriversGetVerifierInformation @ 0x140B9A894 (VfSuspectDriversGetVerifierInformation.c)
 *     VfSuspectDriversLoadCallback @ 0x140B9AB3C (VfSuspectDriversLoadCallback.c)
 *     VfSuspectDriversRemove @ 0x140B9AEA4 (VfSuspectDriversRemove.c)
 *     VfSuspectDriversUnloadCallback @ 0x140B9AF44 (VfSuspectDriversUnloadCallback.c)
 *     VfAddVerifierEntry @ 0x140B9C32C (VfAddVerifierEntry.c)
 *     VfSetVerifierInformation @ 0x140B9C4FC (VfSetVerifierInformation.c)
 *     VfSetVerifierInformationEx @ 0x140B9C634 (VfSetVerifierInformationEx.c)
 *     VfSuspectDriversParseRegistryString @ 0x140C3BD54 (VfSuspectDriversParseRegistryString.c)
 *     VfXdvExcludeParseRegistryString @ 0x140C3BF00 (VfXdvExcludeParseRegistryString.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 */

struct _KTHREAD *VfDriverLock()
{
  struct _KTHREAD *result; // rax

  KeWaitForSingleObject(&ViDriversLoadLock, WrVirtualMemory, 0, 0, 0LL);
  result = KeGetCurrentThread();
  ViDriversLoadLockOwner = (__int64)result;
  return result;
}
