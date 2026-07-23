/*
 * XREFs of MiGetBaseLoaderPortion @ 0x1404C96FC
 * Callers:
 *     MiDriverLoadSucceeded @ 0x1406F74AC (MiDriverLoadSucceeded.c)
 *     MiApplyRequiredDriverHotPatches @ 0x1406F9884 (MiApplyRequiredDriverHotPatches.c)
 *     MiUnloadApproved @ 0x1407E7E7C (MiUnloadApproved.c)
 *     MiBackSingleImageWithPagefile @ 0x1407E8100 (MiBackSingleImageWithPagefile.c)
 *     MiBackSystemImageWithPagefile @ 0x1407E8184 (MiBackSystemImageWithPagefile.c)
 *     MiSplitDriverPage @ 0x1407E8628 (MiSplitDriverPage.c)
 *     MiApplyDriverHotPatch @ 0x1407F122C (MiApplyDriverHotPatch.c)
 *     MiApplyHotPatchToDriver @ 0x1407F17A4 (MiApplyHotPatchToDriver.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x1407F19B8 (MiApplyHotPatchToLoadedDriver.c)
 *     MiIsActiveSystemHotPatch @ 0x1407F3D38 (MiIsActiveSystemHotPatch.c)
 *     MiLogHotPatchRundown @ 0x1407F4BB8 (MiLogHotPatchRundown.c)
 *     MmLoadSystemImageEx @ 0x1409B7B70 (MmLoadSystemImageEx.c)
 *     MiResolveImageReferences @ 0x140A10E04 (MiResolveImageReferences.c)
 *     MiObtainSectionForDriver @ 0x140A116B4 (MiObtainSectionForDriver.c)
 *     MiGetSystemAddressForImage @ 0x140A5536C (MiGetSystemAddressForImage.c)
 *     MiUnlockDriverCode @ 0x140A8472C (MiUnlockDriverCode.c)
 *     MiUnloadSystemImage @ 0x140A870C4 (MiUnloadSystemImage.c)
 *     MiReturnSystemImageCommitment @ 0x140A8BE44 (MiReturnSystemImageCommitment.c)
 *     MiLockdownSections @ 0x140A8FCB0 (MiLockdownSections.c)
 *     MiFreeRetpolineImportInfo @ 0x140A9495C (MiFreeRetpolineImportInfo.c)
 *     MiInitializeImageSectionLocks @ 0x140A9CD4C (MiInitializeImageSectionLocks.c)
 *     MiQueryProcessActivePatches @ 0x140AA9284 (MiQueryProcessActivePatches.c)
 *     MiEnumerateBasePatches @ 0x140B65448 (MiEnumerateBasePatches.c)
 *     MiMarkHotPatchesForHiberPhase @ 0x140B65520 (MiMarkHotPatchesForHiberPhase.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetBaseLoaderPortion(__int64 a1)
{
  return a1;
}
