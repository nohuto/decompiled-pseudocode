/*
 * XREFs of VfDriverLock @ 0x140B8C4B4
 * Callers:
 *     VfIsVerificationEnabledForImage @ 0x14060E780 (VfIsVerificationEnabledForImage.c)
 *     VfDriverRemoveAllDifVerification @ 0x14060F694 (VfDriverRemoveAllDifVerification.c)
 *     MmIsDriverSuspectForVerifier @ 0x140B84CF0 (MmIsDriverSuspectForVerifier.c)
 *     VfDriverApplyDifVerification @ 0x140B8C038 (VfDriverApplyDifVerification.c)
 *     VfDriverEnableVerifier @ 0x140B8C250 (VfDriverEnableVerifier.c)
 *     VfDriverEnableVerifierForAll @ 0x140B8C3B4 (VfDriverEnableVerifierForAll.c)
 *     VfDriverRemoveDifVerification @ 0x140B8C4F0 (VfDriverRemoveDifVerification.c)
 *     ViDriverReApplyVerifierForAll @ 0x140B8C8E4 (ViDriverReApplyVerifierForAll.c)
 *     VfThunkAddDriverThunks @ 0x140B98E3C (VfThunkAddDriverThunks.c)
 *     VfThunkAddSpecialDriverThunks @ 0x140B98ED4 (VfThunkAddSpecialDriverThunks.c)
 *     VfSuspectApplyDifVolatileVerification @ 0x140B9C568 (VfSuspectApplyDifVolatileVerification.c)
 *     VfSuspectDriversGetVerifierInformation @ 0x140B9C894 (VfSuspectDriversGetVerifierInformation.c)
 *     VfSuspectDriversLoadCallback @ 0x140B9CB3C (VfSuspectDriversLoadCallback.c)
 *     VfSuspectDriversRemove @ 0x140B9CEA4 (VfSuspectDriversRemove.c)
 *     VfSuspectDriversUnloadCallback @ 0x140B9CF44 (VfSuspectDriversUnloadCallback.c)
 *     VfAddVerifierEntry @ 0x140B9E32C (VfAddVerifierEntry.c)
 *     VfSetVerifierInformation @ 0x140B9E4FC (VfSetVerifierInformation.c)
 *     VfSetVerifierInformationEx @ 0x140B9E634 (VfSetVerifierInformationEx.c)
 *     VfSuspectDriversParseRegistryString @ 0x140C3DEAC (VfSuspectDriversParseRegistryString.c)
 *     VfXdvExcludeParseRegistryString @ 0x140C3E058 (VfXdvExcludeParseRegistryString.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 */

struct _KTHREAD *VfDriverLock()
{
  struct _KTHREAD *result; // rax

  KeWaitForSingleObject(&ViDriversLoadLock, WrVirtualMemory, 0, 0, 0LL);
  result = KeGetCurrentThread();
  ViDriversLoadLockOwner = (__int64)result;
  return result;
}
