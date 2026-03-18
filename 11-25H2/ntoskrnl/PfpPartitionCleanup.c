/*
 * XREFs of PfpPartitionCleanup @ 0x14073B390
 * Callers:
 *     PfpPartitionCreate @ 0x1405C823C (PfpPartitionCreate.c)
 *     PfDeletePartition @ 0x14073B1F4 (PfDeletePartition.c)
 * Callees:
 *     ExFreeCacheAwareRundownProtection @ 0x140483950 (ExFreeCacheAwareRundownProtection.c)
 *     PfTCleanup @ 0x14073A548 (PfTCleanup.c)
 */

void __fastcall PfpPartitionCleanup(__int64 a1)
{
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v2; // rcx

  PfTCleanup(a1, 1u);
  v2 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(a1 + 16);
  if ( v2 )
    ExFreeCacheAwareRundownProtection(v2);
}
