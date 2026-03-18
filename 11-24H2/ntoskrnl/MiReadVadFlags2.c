/*
 * XREFs of MiReadVadFlags2 @ 0x14044BF3C
 * Callers:
 *     MiImageVadHotPatchEligible @ 0x1407F30E4 (MiImageVadHotPatchEligible.c)
 *     MiProcessPatchImageCfg @ 0x1407F5CBC (MiProcessPatchImageCfg.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x140893DD8 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MiFillMapFileInfo @ 0x1408E3144 (MiFillMapFileInfo.c)
 *     MiMapViewOfImageSection @ 0x1408E3418 (MiMapViewOfImageSection.c)
 *     MiUnmapViewOfSection @ 0x1408E4E04 (MiUnmapViewOfSection.c)
 *     MiUnmapVad @ 0x1408E5280 (MiUnmapVad.c)
 *     MiDeleteVad @ 0x1408E5390 (MiDeleteVad.c)
 *     MiMapAllImageScpPages @ 0x1408F9404 (MiMapAllImageScpPages.c)
 *     MiCopyToCfgBitMap @ 0x1408FA0F0 (MiCopyToCfgBitMap.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140967B50 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MmQueryVirtualMemory @ 0x140986420 (MmQueryVirtualMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiReadVadFlags2(__int64 a1)
{
  return *(unsigned int *)(a1 + 64);
}
