/*
 * XREFs of MmReleaseLoadLock @ 0x14036D060
 * Callers:
 *     ViAddVerifierSpecialThunks @ 0x14060436C (ViAddVerifierSpecialThunks.c)
 *     ViAddVerifierThunks @ 0x14060448C (ViAddVerifierThunks.c)
 *     VfDriverRemoveAllDifVerification @ 0x140605114 (VfDriverRemoveAllDifVerification.c)
 *     MiProtectDriverSectionPte @ 0x14065F8C0 (MiProtectDriverSectionPte.c)
 *     MiFlushDeferredRetpolineImageLoadEvents @ 0x1407E0A10 (MiFlushDeferredRetpolineImageLoadEvents.c)
 *     MiLogHotPatchRundown @ 0x1407E463C (MiLogHotPatchRundown.c)
 *     MmInsertSecureImageActivePatch @ 0x1407E61F0 (MmInsertSecureImageActivePatch.c)
 *     MmRemoveSecureImageActivePatch @ 0x1407E6418 (MmRemoveSecureImageActivePatch.c)
 *     MmLoadSystemImageEx @ 0x1409B0468 (MmLoadSystemImageEx.c)
 *     MiObtainSectionForDriver @ 0x140A13124 (MiObtainSectionForDriver.c)
 *     MiMarkRetpolineBits @ 0x140A83A24 (MiMarkRetpolineBits.c)
 *     MiUnloadSystemImage @ 0x140A862D4 (MiUnloadSystemImage.c)
 *     MiLoadHotPatch @ 0x140A98E64 (MiLoadHotPatch.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x140AA5D1C (MiLogStrongCodeDriverLoadFailure.c)
 *     MiQueryProcessActivePatches @ 0x140AA8E54 (MiQueryProcessActivePatches.c)
 *     MiProcessKernelCfgAddressTakenImports @ 0x140AB735C (MiProcessKernelCfgAddressTakenImports.c)
 *     MiShutdownSystem @ 0x140B52044 (MiShutdownSystem.c)
 *     VfDriverEnableDisableVerifier @ 0x140B7A1E0 (VfDriverEnableDisableVerifier.c)
 *     VfDriverEnableVerifierForAll @ 0x140B7A3D4 (VfDriverEnableVerifierForAll.c)
 *     ViDriverReApplyVerifierForAll @ 0x140B7A904 (ViDriverReApplyVerifierForAll.c)
 *     VfAddVerifierEntry @ 0x140B8C34C (VfAddVerifierEntry.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x140C3F6D0 (MiFlushStrongCodeDriverLoadFailures.c)
 *     MmReapplyBootPatchImports @ 0x140C45828 (MmReapplyBootPatchImports.c)
 *     MmRegisterHotPatches @ 0x140C4599C (MmRegisterHotPatches.c)
 *     MiBuildImportsForBootDrivers @ 0x140C49598 (MiBuildImportsForBootDrivers.c)
 *     MiInitializeLoadedModuleList @ 0x140C49F8C (MiInitializeLoadedModuleList.c)
 *     MiReloadBootLoadedDrivers @ 0x140C4A6A8 (MiReloadBootLoadedDrivers.c)
 *     PipInitializeCoreDriversAndElam @ 0x140C520B0 (PipInitializeCoreDriversAndElam.c)
 *     PipInitializeDriverDependentDLLs @ 0x140C524C4 (PipInitializeDriverDependentDLLs.c)
 * Callees:
 *     MiReleaseLoadLock @ 0x14036E2B0 (MiReleaseLoadLock.c)
 */

__int64 __fastcall MmReleaseLoadLock(struct _KTHREAD *CurrentThread)
{
  if ( !CurrentThread )
    CurrentThread = KeGetCurrentThread();
  return MiReleaseLoadLock(CurrentThread, 1LL);
}
