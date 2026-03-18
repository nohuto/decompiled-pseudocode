/*
 * XREFs of MiValidateVadMetadataFlags @ 0x1408DFDD0
 * Callers:
 *     MiMapViewOfSection @ 0x14089A1A0 (MiMapViewOfSection.c)
 *     MiAllocateVirtualMemory @ 0x1408DF540 (MiAllocateVirtualMemory.c)
 * Callees:
 *     PdcCreateWatchdogAroundClientCall @ 0x140484160 (PdcCreateWatchdogAroundClientCall.c)
 */

__int64 __fastcall MiValidateVadMetadataFlags(__int64 a1)
{
  int v1; // r9d
  int v2; // eax
  int v3; // r8d

  v1 = 0;
  if ( (*(_DWORD *)(a1 + 60) & 8) == 0 )
    goto LABEL_5;
  v2 = PdcCreateWatchdogAroundClientCall();
  v1 = v3 | 4;
  if ( !v2 )
    v1 = v3;
  if ( (v1 & 1) == 0 )
LABEL_5:
    *(_DWORD *)(a1 + 120) &= ~2u;
  if ( (v1 & 4) == 0 && (*(_DWORD *)(a1 + 120) & 8) != 0 )
    return 3221225485LL;
  *(_DWORD *)(a1 + 120) |= v1;
  return 0LL;
}
