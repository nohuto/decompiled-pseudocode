/*
 * XREFs of PfpPartitionCleanup @ 0x1407473B0
 * Callers:
 *     PfpPartitionCreate @ 0x1405CC80C (PfpPartitionCreate.c)
 *     PfDeletePartition @ 0x140747214 (PfDeletePartition.c)
 * Callees:
 *     ExFreeCacheAwareRundownProtection @ 0x140484170 (ExFreeCacheAwareRundownProtection.c)
 *     PfTCleanup @ 0x140746568 (PfTCleanup.c)
 */

void __fastcall PfpPartitionCleanup(__int64 a1)
{
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v2; // rcx

  PfTCleanup(a1, 1u);
  v2 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(a1 + 16);
  if ( v2 )
    ExFreeCacheAwareRundownProtection(v2);
}
