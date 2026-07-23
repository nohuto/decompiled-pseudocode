/*
 * XREFs of MiImageVadHotPatchEligible @ 0x1407F3718
 * Callers:
 *     MiGetVadForHotPatchInProgress @ 0x1407F3124 (MiGetVadForHotPatchInProgress.c)
 *     MmCommitHotPatchTable @ 0x1407F6688 (MmCommitHotPatchTable.c)
 *     MmPrepareImagePagesForHotPatch @ 0x1407F68F8 (MmPrepareImagePagesForHotPatch.c)
 * Callees:
 *     MiImageVadHotPatchEligibleEx @ 0x14067E350 (MiImageVadHotPatchEligibleEx.c)
 */

_BOOL8 __fastcall MiImageVadHotPatchEligible(__int64 a1)
{
  return (unsigned int)MiImageVadHotPatchEligibleEx(a1) == 0;
}
