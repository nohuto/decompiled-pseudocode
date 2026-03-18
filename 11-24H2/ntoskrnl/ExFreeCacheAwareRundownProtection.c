/*
 * XREFs of ExFreeCacheAwareRundownProtection @ 0x140484170
 * Callers:
 *     PfpPartitionCleanup @ 0x1407473B0 (PfpPartitionCleanup.c)
 *     EtwpCleanupSiloState @ 0x1407A70EC (EtwpCleanupSiloState.c)
 *     MiDeletePartitionResources @ 0x1407FBD44 (MiDeletePartitionResources.c)
 *     RawCleanupVcb @ 0x1409A46D4 (RawCleanupVcb.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __stdcall ExFreeCacheAwareRundownProtection(PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware)
{
  ExFreePoolWithTag(RunRefCacheAware->PoolToFree, 0);
  ExFreePoolWithTag(RunRefCacheAware, 0);
}
