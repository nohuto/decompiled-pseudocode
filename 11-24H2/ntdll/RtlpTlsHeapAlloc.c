/*
 * XREFs of RtlpTlsHeapAlloc @ 0x1800B9940
 * Callers:
 *     RtlTlsAlloc @ 0x1800B9670 (RtlTlsAlloc.c)
 *     RtlTlsSetValue @ 0x1800B98A0 (RtlTlsSetValue.c)
 * Callees:
 *     <none>
 */

__int64 RtlpTlsHeapAlloc()
{
  return RtlpAllocateHeapMetadata(NtCurrentPeb()->ProcessHeap, 0x2000LL);
}
