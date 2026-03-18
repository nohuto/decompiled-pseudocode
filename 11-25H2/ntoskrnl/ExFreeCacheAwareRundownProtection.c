/*
 * XREFs of ExFreeCacheAwareRundownProtection @ 0x140483950
 * Callers:
 *     PfpPartitionCleanup @ 0x14073B390 (PfpPartitionCleanup.c)
 *     EtwpCleanupSiloState @ 0x140797D1C (EtwpCleanupSiloState.c)
 *     MiDeletePartitionResources @ 0x1407EBEB4 (MiDeletePartitionResources.c)
 *     RawCleanupVcb @ 0x14099F844 (RawCleanupVcb.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __stdcall ExFreeCacheAwareRundownProtection(PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware)
{
  ExFreePoolWithTag(RunRefCacheAware->PoolToFree, 0);
  ExFreePoolWithTag(RunRefCacheAware, 0);
}
