/*
 * XREFs of HsaGetDeviceAperture @ 0x140572F08
 * Callers:
 *     HsaAllocateRemappingTableEntry @ 0x1405724A0 (HsaAllocateRemappingTableEntry.c)
 *     HsaFreeRemappingTableEntry @ 0x140572DC0 (HsaFreeRemappingTableEntry.c)
 *     HsaUpdateRemappingDestination @ 0x140573A30 (HsaUpdateRemappingDestination.c)
 *     HsaUpdateRemappingTableEntry @ 0x140573C80 (HsaUpdateRemappingTableEntry.c)
 * Callees:
 *     ExtEnvCriticalFailure @ 0x14055FC80 (ExtEnvCriticalFailure.c)
 */

unsigned __int64 __fastcall HsaGetDeviceAperture(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  unsigned __int64 result; // rax

  v1 = WORD1(a1);
  if ( (unsigned int)v1 >= 0x20 )
    ExtEnvCriticalFailure(a1, 0LL, 0LL, 0LL, 0LL);
  v2 = HsaDeviceApertureRanges[v1];
  result = 0LL;
  if ( v2 )
    return v2 + ((unsigned __int64)((unsigned __int16)a1 >> 9) << 6);
  return result;
}
