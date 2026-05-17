/*
 * XREFs of RtlCompressBufferXpressLz @ 0x1800C10A0
 * Callers:
 *     EtwpWriteBufferCompressed @ 0x18008E788 (EtwpWriteBufferCompressed.c)
 * Callees:
 *     RtlCompressBufferXpressLzStandard @ 0x1800C1160 (RtlCompressBufferXpressLzStandard.c)
 *     RtlCompressBufferXpressLzMax @ 0x180150C30 (RtlCompressBufferXpressLzMax.c)
 */

__int64 __fastcall RtlCompressBufferXpressLz(
        __int16 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  if ( !a1 )
    return RtlCompressBufferXpressLzStandard(a2, a3, a4, a5, a7, (a8 + 7) & 0xFFFFFFFFFFFFFFF8uLL, 0LL, 0LL);
  if ( a1 == 256 )
    return RtlCompressBufferXpressLzMax(a2, a3, a4, a5, a7, (void *)((a8 + 7) & 0xFFFFFFFFFFFFFFF8uLL), 0LL, 0LL);
  return 3221225659LL;
}
