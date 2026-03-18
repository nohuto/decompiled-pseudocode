/*
 * XREFs of EtwpClearPartitionContext @ 0x1404B9100
 * Callers:
 *     EtwpFreeLoggerContext @ 0x1409D77E0 (EtwpFreeLoggerContext.c)
 * Callees:
 *     PsDereferencePartition @ 0x140275E60 (PsDereferencePartition.c)
 */

__int64 __fastcall EtwpClearPartitionContext(__int64 *a1)
{
  __int64 v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    PsDereferencePartition(v2);
    *a1 = 0LL;
  }
  return 0LL;
}
