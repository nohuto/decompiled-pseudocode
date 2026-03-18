/*
 * XREFs of RtlSizeHeap @ 0x1405E8D40
 * Callers:
 *     <none>
 * Callees:
 *     RtlpLogHeapFailure @ 0x1402B2E04 (RtlpLogHeapFailure.c)
 *     RtlpSizeHeapInternal @ 0x1405ED8E8 (RtlpSizeHeapInternal.c)
 */

__int64 __fastcall RtlSizeHeap(__int64 a1, __int64 a2, ULONG_PTR a3)
{
  if ( !a1 )
    RtlpLogHeapFailure(19, 0LL, a3, 0LL, 0LL, 0LL);
  return RtlpSizeHeapInternal(a1, a2, a3);
}
