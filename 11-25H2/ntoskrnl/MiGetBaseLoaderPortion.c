/*
 * XREFs of MiGetBaseLoaderPortion @ 0x1404D0B80
 * Callers:
 *     MiDriverLoadSucceeded @ 0x1406EDB90 (MiDriverLoadSucceeded.c)
 *     MiApplyRequiredDriverHotPatches @ 0x1406EFDD4 (MiApplyRequiredDriverHotPatches.c)
 *     MiUnloadApproved @ 0x1407D79F4 (MiUnloadApproved.c)
 *     MiBackSingleImageWithPagefile @ 0x1407D7C78 (MiBackSingleImageWithPagefile.c)
 *     MiBackSystemImageWithPagefile @ 0x1407D7CFC (MiBackSystemImageWithPagefile.c)
 *     MiSplitDriverPage @ 0x1407D8198 (MiSplitDriverPage.c)
 *     MiApplyDriverHotPatch @ 0x1407E0DBC (MiApplyDriverHotPatch.c)
 *     MiApplyHotPatchToDriver @ 0x1407E1334 (MiApplyHotPatchToDriver.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x1407E1548 (MiApplyHotPatchToLoadedDriver.c)
 *     MiIsActiveSystemHotPatch @ 0x1407E38BC (MiIsActiveSystemHotPatch.c)
 *     MiLogHotPatchRundown @ 0x1407E463C (MiLogHotPatchRundown.c)
 *     MmLoadSystemImageEx @ 0x1409B0468 (MmLoadSystemImageEx.c)
 *     MiResolveImageReferences @ 0x140A1286C (MiResolveImageReferences.c)
 *     MiObtainSectionForDriver @ 0x140A13124 (MiObtainSectionForDriver.c)
 *     MiGetSystemAddressForImage @ 0x140A5B2CC (MiGetSystemAddressForImage.c)
 *     MiUnlockDriverCode @ 0x140A8370C (MiUnlockDriverCode.c)
 *     MiUnloadSystemImage @ 0x140A862D4 (MiUnloadSystemImage.c)
 *     MiReturnSystemImageCommitment @ 0x140A8A7E0 (MiReturnSystemImageCommitment.c)
 *     MiLockdownSections @ 0x140A8EA10 (MiLockdownSections.c)
 *     MiFreeRetpolineImportInfo @ 0x140A9400C (MiFreeRetpolineImportInfo.c)
 *     MiInitializeImageSectionLocks @ 0x140A9C1AC (MiInitializeImageSectionLocks.c)
 *     MiQueryProcessActivePatches @ 0x140AA8E54 (MiQueryProcessActivePatches.c)
 *     MiEnumerateBasePatches @ 0x140B53228 (MiEnumerateBasePatches.c)
 *     MiMarkHotPatchesForHiberPhase @ 0x140B53300 (MiMarkHotPatchesForHiberPhase.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetBaseLoaderPortion(__int64 a1)
{
  return a1;
}
