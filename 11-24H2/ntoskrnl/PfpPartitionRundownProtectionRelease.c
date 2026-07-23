/*
 * XREFs of PfpPartitionRundownProtectionRelease @ 0x14046A344
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1408F573C (PfSetSuperfetchInformation.c)
 *     PfGetCompletedTrace @ 0x1408F64A0 (PfGetCompletedTrace.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAware @ 0x14022B370 (ExReleaseRundownProtectionCacheAware.c)
 */

void __fastcall PfpPartitionRundownProtectionRelease(__int64 a1)
{
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 16));
}
