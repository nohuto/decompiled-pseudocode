/*
 * XREFs of RtlpHpEnvCompactionIsScheduled @ 0x1404882C8
 * Callers:
 *     RtlpHpAllocateHeapSlow @ 0x1403C9AF8 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpMetadataAlloc @ 0x1403CAF34 (RtlpHpMetadataAlloc.c)
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
