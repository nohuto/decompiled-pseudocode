/*
 * XREFs of MI_GET_GRAPHICS_PROTECTION_FROM_VAD @ 0x14043CF80
 * Callers:
 *     MiQueryAddressState @ 0x140244320 (MiQueryAddressState.c)
 *     MiProtectPrivateMemory @ 0x14037F8B0 (MiProtectPrivateMemory.c)
 *     MiWriteAwePtes @ 0x1403FBB7C (MiWriteAwePtes.c)
 *     MiProtectAweRegion @ 0x1404C3BAC (MiProtectAweRegion.c)
 *     MmQueryVirtualMemory @ 0x1409D0670 (MmQueryVirtualMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MI_GET_GRAPHICS_PROTECTION_FROM_VAD(__int64 a1)
{
  unsigned int v1; // eax
  unsigned int v3; // edx
  unsigned int v4; // ecx

  v1 = *(_DWORD *)(a1 + 48);
  if ( (v1 & 0x4200000) != 0x4200000 )
    return 0LL;
  v3 = 2048 << (v1 >> 29);
  if ( (v1 & 0x8000000) != 0 )
    v3 |= 0x20000u;
  v4 = v3 | 0x40000;
  if ( (v1 & 0x10000000) == 0 )
    return v3;
  return v4;
}
