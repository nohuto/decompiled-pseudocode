/*
 * XREFs of RtlpMakeXpressCallback @ 0x140419D30
 * Callers:
 *     RtlCompressBufferXpressHuffStandard @ 0x14038BB60 (RtlCompressBufferXpressHuffStandard.c)
 *     RtlCompressBufferXpressLzStandard @ 0x1404195A0 (RtlCompressBufferXpressLzStandard.c)
 *     RtlCompressBufferXpressLzMax @ 0x140419D80 (RtlCompressBufferXpressLzMax.c)
 *     RtlCompressBufferXpressHuffMax @ 0x140499D00 (RtlCompressBufferXpressHuffMax.c)
 *     RtlDecompressBufferXpressHuffProgress @ 0x1405F12D0 (RtlDecompressBufferXpressHuffProgress.c)
 *     RtlDecompressBufferXpressLzProgress @ 0x1405F1910 (RtlDecompressBufferXpressLzProgress.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

unsigned __int64 __fastcall RtlpMakeXpressCallback(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 result; // rax

  guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 8), a2, a3, a4);
  result = a3 + *(unsigned int *)(a1 + 16);
  if ( a2 < result )
    return a2;
  return result;
}
