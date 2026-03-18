/*
 * XREFs of RtlpHpEnvCompactionIsScheduled @ 0x1404839D4
 * Callers:
 *     ExAllocateHeapPool @ 0x1402ACDB0 (ExAllocateHeapPool.c)
 *     RtlpHpAllocateHeapSlow @ 0x1402B819C (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpMetadataAlloc @ 0x140420674 (RtlpHpMetadataAlloc.c)
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
