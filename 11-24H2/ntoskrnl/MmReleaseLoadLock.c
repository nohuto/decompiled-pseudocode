/*
 * XREFs of MmReleaseLoadLock @ 0x1404C9960
 * Callers:
 *     ViAddVerifierSpecialThunks @ 0x14061032C (ViAddVerifierSpecialThunks.c)
 *     ViAddVerifierThunks @ 0x14061044C (ViAddVerifierThunks.c)
 *     VfDriverRemoveAllDifVerification @ 0x1406110D4 (VfDriverRemoveAllDifVerification.c)
 *     MiProtectDriverSectionPte @ 0x14066B400 (MiProtectDriverSectionPte.c)
 *     MiFlushDeferredRetpolineImageLoadEvents @ 0x1407F08B0 (MiFlushDeferredRetpolineImageLoadEvents.c)
 *     MiLogHotPatchRundown @ 0x1407F44C4 (MiLogHotPatchRundown.c)
 *     MmInsertSecureImageActivePatch @ 0x1407F6080 (MmInsertSecureImageActivePatch.c)
 *     MmRemoveSecureImageActivePatch @ 0x1407F62A8 (MmRemoveSecureImageActivePatch.c)
 *     MmLoadSystemImageEx @ 0x1409C87D8 (MmLoadSystemImageEx.c)
 *     MiObtainSectionForDriver @ 0x140A18544 (MiObtainSectionForDriver.c)
 *     MiMarkRetpolineBits @ 0x140A88520 (MiMarkRetpolineBits.c)
 *     MiUnloadSystemImage @ 0x140A8AD84 (MiUnloadSystemImage.c)
 *     MiLoadHotPatch @ 0x140A9F9D4 (MiLoadHotPatch.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x140AAB2DC (MiLogStrongCodeDriverLoadFailure.c)
 *     MiQueryProcessActivePatches @ 0x140AAE3A8 (MiQueryProcessActivePatches.c)
 *     MiProcessKernelCfgAddressTakenImports @ 0x140ABB69C (MiProcessKernelCfgAddressTakenImports.c)
 *     MiShutdownSystem @ 0x140B62174 (MiShutdownSystem.c)
 *     VfDriverEnableDisableVerifier @ 0x140B8A1C0 (VfDriverEnableDisableVerifier.c)
 *     VfDriverEnableVerifierForAll @ 0x140B8A3B4 (VfDriverEnableVerifierForAll.c)
 *     ViDriverReApplyVerifierForAll @ 0x140B8A8E4 (ViDriverReApplyVerifierForAll.c)
 *     VfAddVerifierEntry @ 0x140B9C32C (VfAddVerifierEntry.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x140C50900 (MiFlushStrongCodeDriverLoadFailures.c)
 *     MmReapplyBootPatchImports @ 0x140C56B08 (MmReapplyBootPatchImports.c)
 *     MmRegisterHotPatches @ 0x140C56C7C (MmRegisterHotPatches.c)
 *     MiBuildImportsForBootDrivers @ 0x140C5A924 (MiBuildImportsForBootDrivers.c)
 *     MiInitializeLoadedModuleList @ 0x140C5B318 (MiInitializeLoadedModuleList.c)
 *     MiReloadBootLoadedDrivers @ 0x140C5BA34 (MiReloadBootLoadedDrivers.c)
 *     PipInitializeCoreDriversAndElam @ 0x140C633C4 (PipInitializeCoreDriversAndElam.c)
 *     PipInitializeDriverDependentDLLs @ 0x140C637D8 (PipInitializeDriverDependentDLLs.c)
 * Callees:
 *     MiReleaseLoadLock @ 0x1402C7310 (MiReleaseLoadLock.c)
 */

__int64 __fastcall MmReleaseLoadLock(struct _KTHREAD *CurrentThread)
{
  if ( !CurrentThread )
    CurrentThread = KeGetCurrentThread();
  return MiReleaseLoadLock((__int64)CurrentThread, 1);
}
