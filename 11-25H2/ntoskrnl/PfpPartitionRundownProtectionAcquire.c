/*
 * XREFs of PfpPartitionRundownProtectionAcquire @ 0x1404778C0
 * Callers:
 *     PfpPartitionFindOrCreate @ 0x14073B3C0 (PfpPartitionFindOrCreate.c)
 *     PfSetSuperfetchInformation @ 0x1408E9C54 (PfSetSuperfetchInformation.c)
 *     PfpPartitionFindByHandle @ 0x14093AACC (PfpPartitionFindByHandle.c)
 * Callees:
 *     ExAcquireRundownProtectionCacheAware @ 0x1402ADA40 (ExAcquireRundownProtectionCacheAware.c)
 */

__int64 __fastcall PfpPartitionRundownProtectionAcquire(__int64 a1)
{
  return ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 16));
}
