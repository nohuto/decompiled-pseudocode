/*
 * XREFs of PfpPartitionRundownProtectionAcquire @ 0x140477518
 * Callers:
 *     PfpPartitionFindOrCreate @ 0x1407473E0 (PfpPartitionFindOrCreate.c)
 *     PfSetSuperfetchInformation @ 0x140932C24 (PfSetSuperfetchInformation.c)
 *     PfpPartitionFindByHandle @ 0x140933E78 (PfpPartitionFindByHandle.c)
 * Callees:
 *     ExAcquireRundownProtectionCacheAware @ 0x140283A10 (ExAcquireRundownProtectionCacheAware.c)
 */

__int64 __fastcall PfpPartitionRundownProtectionAcquire(__int64 a1)
{
  return ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 16));
}
