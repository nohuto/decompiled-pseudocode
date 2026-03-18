/*
 * XREFs of IommupValidateMdl @ 0x140567674
 * Callers:
 *     IommuMapIdentityRangeEx @ 0x1403ACCD0 (IommuMapIdentityRangeEx.c)
 *     IommuUnmapIdentityRangeEx @ 0x1403AD580 (IommuUnmapIdentityRangeEx.c)
 *     IommuMapLogicalRangeEx @ 0x1403ADCD0 (IommuMapLogicalRangeEx.c)
 *     IommupProcessPhysicalAddress @ 0x140474728 (IommupProcessPhysicalAddress.c)
 *     IommuMapIdentityRange @ 0x140566A30 (IommuMapIdentityRange.c)
 *     IommuMapLogicalRange @ 0x140566AA0 (IommuMapLogicalRange.c)
 *     IommuUnmapIdentityRange @ 0x140567200 (IommuUnmapIdentityRange.c)
 * Callees:
 *     <none>
 */

bool __fastcall IommupValidateMdl(__int64 a1)
{
  return (*(_DWORD *)(a1 + 44) & 0xFFF) == 0 && (*(_DWORD *)(a1 + 40) & 0xFFF) == 0;
}
