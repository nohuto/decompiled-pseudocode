/*
 * XREFs of NvmeNamespaceReleaseRemoveLock @ 0x14010C0B0
 * Callers:
 *     NvmeNamespaceDeviceControlIrp @ 0x1401A2234 (NvmeNamespaceDeviceControlIrp.c)
 *     NvmeNamespaceSurpriseRemovalIrp @ 0x1401B1928 (NvmeNamespaceSurpriseRemovalIrp.c)
 * Callees:
 *     <none>
 */

void __fastcall NvmeNamespaceReleaseRemoveLock(__int64 a1)
{
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 120));
}
