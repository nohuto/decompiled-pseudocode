/*
 * XREFs of RtlpTlsHeapAlloc @ 0x1800B16E0
 * Callers:
 *     RtlTlsAlloc @ 0x1800B1410 (RtlTlsAlloc.c)
 *     RtlTlsSetValue @ 0x1800B1640 (RtlTlsSetValue.c)
 * Callees:
 *     <none>
 */

__int64 RtlpTlsHeapAlloc()
{
  return RtlpAllocateHeapMetadata(NtCurrentPeb()->ProcessHeap, 0x2000LL);
}
