/*
 * XREFs of MmAcquireLoadLock @ 0x14036CED0
 * Callers:
 *     MiFlushDeferredRetpolineImageLoadEvents @ 0x1407E0A10 (MiFlushDeferredRetpolineImageLoadEvents.c)
 *     MiLogHotPatchRundown @ 0x1407E463C (MiLogHotPatchRundown.c)
 *     MmInsertSecureImageActivePatch @ 0x1407E61F0 (MmInsertSecureImageActivePatch.c)
 *     MmRemoveSecureImageActivePatch @ 0x1407E6418 (MmRemoveSecureImageActivePatch.c)
 *     MmLoadSystemImageEx @ 0x1409B0468 (MmLoadSystemImageEx.c)
 *     MiObtainSectionForDriver @ 0x140A13124 (MiObtainSectionForDriver.c)
 *     MiMarkRetpolineBits @ 0x140A83A24 (MiMarkRetpolineBits.c)
 *     MiLoadHotPatch @ 0x140A98E64 (MiLoadHotPatch.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x140AA5D1C (MiLogStrongCodeDriverLoadFailure.c)
 *     MiQueryProcessActivePatches @ 0x140AA8E54 (MiQueryProcessActivePatches.c)
 *     MiShutdownSystem @ 0x140B52044 (MiShutdownSystem.c)
 *     VfDriverEnableDisableVerifier @ 0x140B7A1E0 (VfDriverEnableDisableVerifier.c)
 *     VfDriverEnableVerifierForAll @ 0x140B7A3D4 (VfDriverEnableVerifierForAll.c)
 *     ViDriverReApplyVerifierForAll @ 0x140B7A904 (ViDriverReApplyVerifierForAll.c)
 *     VfAddVerifierEntry @ 0x140B8C34C (VfAddVerifierEntry.c)
 * Callees:
 *     MiAcquireLoadLock @ 0x14036DF38 (MiAcquireLoadLock.c)
 */

__int64 MmAcquireLoadLock()
{
  return MiAcquireLoadLock(1LL);
}
