/*
 * XREFs of PfpPartitionRundownProtectionAcquire @ 0x140473AB8
 * Callers:
 *     PfpPartitionFindOrCreate @ 0x1407456D0 (PfpPartitionFindOrCreate.c)
 *     PfSetSuperfetchInformation @ 0x1408F573C (PfSetSuperfetchInformation.c)
 *     PfpPartitionFindByHandle @ 0x1408F6998 (PfpPartitionFindByHandle.c)
 * Callees:
 *     ExAcquireRundownProtectionCacheAware @ 0x140238FA0 (ExAcquireRundownProtectionCacheAware.c)
 */

__int64 __fastcall PfpPartitionRundownProtectionAcquire(__int64 a1)
{
  return ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 16));
}
