/*
 * XREFs of ExFreeCacheAwareRundownProtection @ 0x14047F710
 * Callers:
 *     PfpPartitionCleanup @ 0x1407456A0 (PfpPartitionCleanup.c)
 *     EtwpCleanupSiloState @ 0x1407A722C (EtwpCleanupSiloState.c)
 *     MiDeletePartitionResources @ 0x1407FC4B4 (MiDeletePartitionResources.c)
 *     RawCleanupVcb @ 0x1408AE3C4 (RawCleanupVcb.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __stdcall ExFreeCacheAwareRundownProtection(PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware)
{
  ExFreePoolWithTag(RunRefCacheAware->PoolToFree, 0);
  ExFreePoolWithTag(RunRefCacheAware, 0);
}
