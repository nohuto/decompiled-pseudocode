/*
 * XREFs of NvmeAdapterReleaseRemoveLockAndWait @ 0x1400D65A4
 * Callers:
 *     NvmeAdapterRemoveDeviceIrp @ 0x14019B714 (NvmeAdapterRemoveDeviceIrp.c)
 *     NvmeAdapterSurpriseRemovalIrp @ 0x14019DCB8 (NvmeAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     <none>
 */

void __fastcall NvmeAdapterReleaseRemoveLockAndWait(__int64 a1)
{
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 152));
  ExWaitForRundownProtectionReleaseCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 152));
}
