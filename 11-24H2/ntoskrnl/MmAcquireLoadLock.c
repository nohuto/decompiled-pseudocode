/*
 * XREFs of MmAcquireLoadLock @ 0x1404CBB50
 * Callers:
 *     MiFlushDeferredRetpolineImageLoadEvents @ 0x1407F0E80 (MiFlushDeferredRetpolineImageLoadEvents.c)
 *     MiLogHotPatchRundown @ 0x1407F4BB8 (MiLogHotPatchRundown.c)
 *     MmInsertSecureImageActivePatch @ 0x1407F67F4 (MmInsertSecureImageActivePatch.c)
 *     MmRemoveSecureImageActivePatch @ 0x1407F6A1C (MmRemoveSecureImageActivePatch.c)
 *     MmLoadSystemImageEx @ 0x1409B7B70 (MmLoadSystemImageEx.c)
 *     MiObtainSectionForDriver @ 0x140A116B4 (MiObtainSectionForDriver.c)
 *     MiMarkRetpolineBits @ 0x140A84A10 (MiMarkRetpolineBits.c)
 *     MiLoadHotPatch @ 0x140A9ADA4 (MiLoadHotPatch.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x140AA650C (MiLogStrongCodeDriverLoadFailure.c)
 *     MiQueryProcessActivePatches @ 0x140AA9284 (MiQueryProcessActivePatches.c)
 *     MiShutdownSystem @ 0x140B64244 (MiShutdownSystem.c)
 *     VfDriverEnableDisableVerifier @ 0x140B8C1C0 (VfDriverEnableDisableVerifier.c)
 *     VfDriverEnableVerifierForAll @ 0x140B8C3B4 (VfDriverEnableVerifierForAll.c)
 *     ViDriverReApplyVerifierForAll @ 0x140B8C8E4 (ViDriverReApplyVerifierForAll.c)
 *     VfAddVerifierEntry @ 0x140B9E32C (VfAddVerifierEntry.c)
 * Callees:
 *     MiAcquireLoadLock @ 0x1402BBB18 (MiAcquireLoadLock.c)
 */

struct _KTHREAD *MmAcquireLoadLock()
{
  return MiAcquireLoadLock(1);
}
