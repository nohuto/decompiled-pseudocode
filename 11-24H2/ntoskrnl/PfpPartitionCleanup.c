/*
 * XREFs of PfpPartitionCleanup @ 0x1407456A0
 * Callers:
 *     PfpPartitionCreate @ 0x1405C9F7C (PfpPartitionCreate.c)
 *     PfDeletePartition @ 0x140745504 (PfDeletePartition.c)
 * Callees:
 *     ExFreeCacheAwareRundownProtection @ 0x14047F710 (ExFreeCacheAwareRundownProtection.c)
 *     PfTCleanup @ 0x140744858 (PfTCleanup.c)
 */

void __fastcall PfpPartitionCleanup(__int64 a1)
{
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v2; // rcx

  PfTCleanup(a1, 1u);
  v2 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(a1 + 16);
  if ( v2 )
    ExFreeCacheAwareRundownProtection(v2);
}
