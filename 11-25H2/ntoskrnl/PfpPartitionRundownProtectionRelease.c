/*
 * XREFs of PfpPartitionRundownProtectionRelease @ 0x140471A7C
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1408E9C54 (PfSetSuperfetchInformation.c)
 *     PfGetCompletedTrace @ 0x14093A5D4 (PfGetCompletedTrace.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAware @ 0x140302690 (ExReleaseRundownProtectionCacheAware.c)
 */

void __fastcall PfpPartitionRundownProtectionRelease(__int64 a1)
{
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 16));
}
