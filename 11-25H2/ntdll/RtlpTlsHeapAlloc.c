/*
 * XREFs of RtlpTlsHeapAlloc @ 0x1800097AC
 * Callers:
 *     RtlTlsSetValue @ 0x18000A7A0 (RtlTlsSetValue.c)
 *     RtlTlsAlloc @ 0x1800F2250 (RtlTlsAlloc.c)
 * Callees:
 *     <none>
 */

__int64 RtlpTlsHeapAlloc()
{
  return RtlpAllocateHeapMetadata(NtCurrentPeb()->ProcessHeap, 0x2000LL);
}
