/*
 * XREFs of RtlpHpEnvCompactionIsScheduled @ 0x14047EEF4
 * Callers:
 *     RtlpHpMetadataAlloc @ 0x140458A08 (RtlpHpMetadataAlloc.c)
 *     RtlpHpAllocateHeapSlow @ 0x1404D2B7C (RtlpHpAllocateHeapSlow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpEnvCompactionIsScheduled(_QWORD *a1)
{
  if ( BYTE1(*a1) == 1 )
    return (unsigned int)ExpHpGCScheduledNonPaged;
  else
    return (unsigned int)ExpHpGCScheduledPaged;
}
