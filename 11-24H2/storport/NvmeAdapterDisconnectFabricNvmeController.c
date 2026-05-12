/*
 * XREFs of NvmeAdapterDisconnectFabricNvmeController @ 0x1400E1D10
 * Callers:
 *     NvmeAdapterDisconnectController @ 0x14019650C (NvmeAdapterDisconnectController.c)
 * Callees:
 *     NvmeAdapterCleanupFabricNvmeController @ 0x1400DEF90 (NvmeAdapterCleanupFabricNvmeController.c)
 */

__int64 __fastcall NvmeAdapterDisconnectFabricNvmeController(__int64 a1, __int64 a2)
{
  return NvmeAdapterCleanupFabricNvmeController(a1, a2);
}
