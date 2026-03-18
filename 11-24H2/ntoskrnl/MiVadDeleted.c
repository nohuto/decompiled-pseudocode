/*
 * XREFs of MiVadDeleted @ 0x140428540
 * Callers:
 *     MiGetVadForHotPatchInProgress @ 0x1407F2B54 (MiGetVadForHotPatchInProgress.c)
 *     MiHotPatchProcess @ 0x1407F2D08 (MiHotPatchProcess.c)
 *     MiPrepareToHotPatchVad @ 0x1407F5B90 (MiPrepareToHotPatchVad.c)
 *     MiProcessPatchImageCfg @ 0x1407F5CBC (MiProcessPatchImageCfg.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1408DA8E0 (MiLoadSectionIntoVsmEnclave.c)
 *     MiCommitFileBackedSection @ 0x1408DDC1C (MiCommitFileBackedSection.c)
 *     MiCleanVad @ 0x1408E5224 (MiCleanVad.c)
 *     NtAreMappedFilesTheSame @ 0x1408E8130 (NtAreMappedFilesTheSame.c)
 *     MiLockVadRange @ 0x1408E8B10 (MiLockVadRange.c)
 *     MmIsFileMapped @ 0x1408EF744 (MmIsFileMapped.c)
 *     MiMarkSharedImageCfgBits @ 0x1408F9C78 (MiMarkSharedImageCfgBits.c)
 *     MiPopulateCfgBitMap @ 0x1408F9F54 (MiPopulateCfgBitMap.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140967B50 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1409C33C4 (MiAllocateFromSubAllocatedRegion.c)
 *     MiReturnPageTablePageCommitment @ 0x1409DE1C0 (MiReturnPageTablePageCommitment.c)
 *     MmCleanProcessAddressSpace @ 0x140A06E44 (MmCleanProcessAddressSpace.c)
 *     MiPrepareVadDelete @ 0x140A19C90 (MiPrepareVadDelete.c)
 *     MiQuerySingleLoadedPatch @ 0x140A32534 (MiQuerySingleLoadedPatch.c)
 *     MiFinishPlaceholderVadReplacement @ 0x140A7084C (MiFinishPlaceholderVadReplacement.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVadDeleted(__int64 a1)
{
  return (*(_DWORD *)(a1 + 48) >> 2) & 1;
}
