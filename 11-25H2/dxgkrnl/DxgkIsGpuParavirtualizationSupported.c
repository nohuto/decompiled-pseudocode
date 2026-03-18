/*
 * XREFs of DxgkIsGpuParavirtualizationSupported @ 0x14019DCFC
 * Callers:
 *     DpiFdoInitializeGpuVirtualization @ 0x140404394 (DpiFdoInitializeGpuVirtualization.c)
 * Callees:
 *     <none>
 */

bool __fastcall DxgkIsGpuParavirtualizationSupported(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( *(int *)(a1 + 2736) >= 9216 && (*(_DWORD *)(a1 + 2468) & 0x400) != 0 )
    return **(_BYTE **)(a1 + 3008) >= 0;
  return v1;
}
