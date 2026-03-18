/*
 * XREFs of MmAcquireLoadLock @ 0x1404D2990
 * Callers:
 *     MiFlushDeferredRetpolineImageLoadEvents @ 0x1407F08B0 (MiFlushDeferredRetpolineImageLoadEvents.c)
 *     MiLogHotPatchRundown @ 0x1407F44C4 (MiLogHotPatchRundown.c)
 *     MmInsertSecureImageActivePatch @ 0x1407F6080 (MmInsertSecureImageActivePatch.c)
 *     MmRemoveSecureImageActivePatch @ 0x1407F62A8 (MmRemoveSecureImageActivePatch.c)
 *     MmLoadSystemImageEx @ 0x1409C87D8 (MmLoadSystemImageEx.c)
 *     MiObtainSectionForDriver @ 0x140A18544 (MiObtainSectionForDriver.c)
 *     MiMarkRetpolineBits @ 0x140A88520 (MiMarkRetpolineBits.c)
 *     MiLoadHotPatch @ 0x140A9F9D4 (MiLoadHotPatch.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x140AAB2DC (MiLogStrongCodeDriverLoadFailure.c)
 *     MiQueryProcessActivePatches @ 0x140AAE3A8 (MiQueryProcessActivePatches.c)
 *     MiShutdownSystem @ 0x140B62174 (MiShutdownSystem.c)
 *     VfDriverEnableDisableVerifier @ 0x140B8A1C0 (VfDriverEnableDisableVerifier.c)
 *     VfDriverEnableVerifierForAll @ 0x140B8A3B4 (VfDriverEnableVerifierForAll.c)
 *     ViDriverReApplyVerifierForAll @ 0x140B8A8E4 (ViDriverReApplyVerifierForAll.c)
 *     VfAddVerifierEntry @ 0x140B9C32C (VfAddVerifierEntry.c)
 * Callees:
 *     MiAcquireLoadLock @ 0x1402C6F98 (MiAcquireLoadLock.c)
 */

struct _KTHREAD *MmAcquireLoadLock()
{
  return MiAcquireLoadLock(1);
}
