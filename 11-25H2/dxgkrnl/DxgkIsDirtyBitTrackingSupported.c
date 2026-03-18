/*
 * XREFs of DxgkIsDirtyBitTrackingSupported @ 0x14006875C
 * Callers:
 *     DpiFdoInitializeGpuVirtualization @ 0x140404394 (DpiFdoInitializeGpuVirtualization.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkIsDirtyBitTrackingSupported(__int64 a1)
{
  return *(_DWORD *)(a1 + 5088) & 1;
}
