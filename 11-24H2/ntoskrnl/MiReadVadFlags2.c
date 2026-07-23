/*
 * XREFs of MiReadVadFlags2 @ 0x14044307C
 * Callers:
 *     MiProcessPatchImageCfg @ 0x1407F63AC (MiProcessPatchImageCfg.c)
 *     MiDeleteVad @ 0x140895840 (MiDeleteVad.c)
 *     MiUnmapVad @ 0x140895E38 (MiUnmapVad.c)
 *     MiUnmapViewOfSection @ 0x140896E14 (MiUnmapViewOfSection.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x1408DBBC8 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MiFillMapFileInfo @ 0x140919CF4 (MiFillMapFileInfo.c)
 *     MiMapAllImageScpPages @ 0x14091BCE0 (MiMapAllImageScpPages.c)
 *     MiCopyToCfgBitMap @ 0x14091C9CC (MiCopyToCfgBitMap.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1409505E0 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MmQueryVirtualMemory @ 0x14096EC30 (MmQueryVirtualMemory.c)
 *     MiMapViewOfImageSection @ 0x140AE8594 (MiMapViewOfImageSection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiReadVadFlags2(__int64 a1)
{
  return *(unsigned int *)(a1 + 64);
}
