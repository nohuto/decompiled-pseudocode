/*
 * XREFs of NvmeAdapterReleaseRemoveLock @ 0x140056050
 * Callers:
 *     NvmeAdapterDeviceControlIrp @ 0x140195438 (NvmeAdapterDeviceControlIrp.c)
 *     RaWmiDispatchIrp @ 0x1401B9E0C (RaWmiDispatchIrp.c)
 * Callees:
 *     <none>
 */

void __fastcall NvmeAdapterReleaseRemoveLock(__int64 a1)
{
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 152));
}
