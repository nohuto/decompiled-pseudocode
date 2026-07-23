/*
 * XREFs of RtlpMakeXpressCallback @ 0x140409D30
 * Callers:
 *     RtlCompressBufferXpressHuffStandard @ 0x1403854A0 (RtlCompressBufferXpressHuffStandard.c)
 *     RtlCompressBufferXpressLzStandard @ 0x1404095A0 (RtlCompressBufferXpressLzStandard.c)
 *     RtlCompressBufferXpressLzMax @ 0x140409D80 (RtlCompressBufferXpressLzMax.c)
 *     RtlCompressBufferXpressHuffMax @ 0x140494760 (RtlCompressBufferXpressHuffMax.c)
 *     RtlDecompressBufferXpressHuffProgress @ 0x1405EE910 (RtlDecompressBufferXpressHuffProgress.c)
 *     RtlDecompressBufferXpressLzProgress @ 0x1405EEF50 (RtlDecompressBufferXpressLzProgress.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

unsigned __int64 __fastcall RtlpMakeXpressCallback(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 result; // rax

  guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 8), a2);
  result = a3 + *(unsigned int *)(a1 + 16);
  if ( a2 < result )
    return a2;
  return result;
}
