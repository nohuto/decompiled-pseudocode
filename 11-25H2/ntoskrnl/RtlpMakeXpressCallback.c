/*
 * XREFs of RtlpMakeXpressCallback @ 0x14041BFB0
 * Callers:
 *     RtlCompressBufferXpressHuffStandard @ 0x1403A3050 (RtlCompressBufferXpressHuffStandard.c)
 *     RtlCompressBufferXpressLzStandard @ 0x14041B820 (RtlCompressBufferXpressLzStandard.c)
 *     RtlCompressBufferXpressLzMax @ 0x14041C000 (RtlCompressBufferXpressLzMax.c)
 *     RtlCompressBufferXpressHuffMax @ 0x140499C20 (RtlCompressBufferXpressHuffMax.c)
 *     RtlDecompressBufferXpressHuffProgress @ 0x1405E4F80 (RtlDecompressBufferXpressHuffProgress.c)
 *     RtlDecompressBufferXpressLzProgress @ 0x1405E55C0 (RtlDecompressBufferXpressLzProgress.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
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
