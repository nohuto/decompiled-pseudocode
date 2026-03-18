/*
 * XREFs of MiReadVadFlags2 @ 0x140455FA8
 * Callers:
 *     MiImageVadHotPatchEligible @ 0x1407E325C (MiImageVadHotPatchEligible.c)
 *     MiProcessPatchImageCfg @ 0x1407E5E2C (MiProcessPatchImageCfg.c)
 *     MiUnmapViewOfSection @ 0x1408B4494 (MiUnmapViewOfSection.c)
 *     MiUnmapVad @ 0x1408B4E4C (MiUnmapVad.c)
 *     MiDeleteVad @ 0x1408B4F54 (MiDeleteVad.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x1408F87C4 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MiMapViewOfImageSection @ 0x1409028FC (MiMapViewOfImageSection.c)
 *     MiFillMapFileInfo @ 0x140903B10 (MiFillMapFileInfo.c)
 *     MiMapAllImageScpPages @ 0x1409045F8 (MiMapAllImageScpPages.c)
 *     MiCopyToCfgBitMap @ 0x14090603C (MiCopyToCfgBitMap.c)
 *     MmQueryVirtualMemory @ 0x1409D0670 (MmQueryVirtualMemory.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1409F5620 (MmEnumerateAddressSpaceAndReferenceImages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiReadVadFlags2(__int64 a1)
{
  return *(unsigned int *)(a1 + 64);
}
