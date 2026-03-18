/*
 * XREFs of DxgkIsDirtyBitTrackingSupported @ 0x1400683DC
 * Callers:
 *     DpiFdoInitializeGpuVirtualization @ 0x1403FDFB4 (DpiFdoInitializeGpuVirtualization.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkIsDirtyBitTrackingSupported(__int64 a1)
{
  return *(_DWORD *)(a1 + 5088) & 1;
}
