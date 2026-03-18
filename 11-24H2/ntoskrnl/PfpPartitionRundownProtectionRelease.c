/*
 * XREFs of PfpPartitionRundownProtectionRelease @ 0x14046FF1C
 * Callers:
 *     PfSetSuperfetchInformation @ 0x140932C24 (PfSetSuperfetchInformation.c)
 *     PfGetCompletedTrace @ 0x140933980 (PfGetCompletedTrace.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAware @ 0x140275DE0 (ExReleaseRundownProtectionCacheAware.c)
 */

void __fastcall PfpPartitionRundownProtectionRelease(__int64 a1)
{
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 16));
}
