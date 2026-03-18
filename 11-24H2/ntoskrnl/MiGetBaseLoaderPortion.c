/*
 * XREFs of MiGetBaseLoaderPortion @ 0x1404D0508
 * Callers:
 *     MiDriverLoadSucceeded @ 0x1406F986C (MiDriverLoadSucceeded.c)
 *     MiApplyRequiredDriverHotPatches @ 0x1406FBC44 (MiApplyRequiredDriverHotPatches.c)
 *     MiUnloadApproved @ 0x1407E78AC (MiUnloadApproved.c)
 *     MiBackSingleImageWithPagefile @ 0x1407E7B30 (MiBackSingleImageWithPagefile.c)
 *     MiBackSystemImageWithPagefile @ 0x1407E7BB4 (MiBackSystemImageWithPagefile.c)
 *     MiSplitDriverPage @ 0x1407E8058 (MiSplitDriverPage.c)
 *     MiApplyDriverHotPatch @ 0x1407F0C5C (MiApplyDriverHotPatch.c)
 *     MiApplyHotPatchToDriver @ 0x1407F11D4 (MiApplyHotPatchToDriver.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x1407F13E8 (MiApplyHotPatchToLoadedDriver.c)
 *     MiIsActiveSystemHotPatch @ 0x1407F3744 (MiIsActiveSystemHotPatch.c)
 *     MiLogHotPatchRundown @ 0x1407F44C4 (MiLogHotPatchRundown.c)
 *     MmLoadSystemImageEx @ 0x1409C87D8 (MmLoadSystemImageEx.c)
 *     MiResolveImageReferences @ 0x140A17C94 (MiResolveImageReferences.c)
 *     MiObtainSectionForDriver @ 0x140A18544 (MiObtainSectionForDriver.c)
 *     MiGetSystemAddressForImage @ 0x140A5E524 (MiGetSystemAddressForImage.c)
 *     MiUnlockDriverCode @ 0x140A8823C (MiUnlockDriverCode.c)
 *     MiUnloadSystemImage @ 0x140A8AD84 (MiUnloadSystemImage.c)
 *     MiReturnSystemImageCommitment @ 0x140A8F7AC (MiReturnSystemImageCommitment.c)
 *     MiLockdownSections @ 0x140A93500 (MiLockdownSections.c)
 *     MiFreeRetpolineImportInfo @ 0x140A981A0 (MiFreeRetpolineImportInfo.c)
 *     MiInitializeImageSectionLocks @ 0x140AA19BC (MiInitializeImageSectionLocks.c)
 *     MiQueryProcessActivePatches @ 0x140AAE3A8 (MiQueryProcessActivePatches.c)
 *     MiEnumerateBasePatches @ 0x140B63378 (MiEnumerateBasePatches.c)
 *     MiMarkHotPatchesForHiberPhase @ 0x140B63450 (MiMarkHotPatchesForHiberPhase.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetBaseLoaderPortion(__int64 a1)
{
  return a1;
}
