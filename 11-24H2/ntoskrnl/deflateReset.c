/*
 * XREFs of deflateReset @ 0x1405F2C6C
 * Callers:
 *     RtlCompressDeflateInitCompressionStream @ 0x1405F12E4 (RtlCompressDeflateInitCompressionStream.c)
 * Callees:
 *     deflateResetKeep @ 0x1405F2CA4 (deflateResetKeep.c)
 *     lm_init @ 0x1405F4644 (lm_init.c)
 */

__int64 __fastcall deflateReset(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = deflateResetKeep();
  if ( !v2 )
    lm_init(*(_QWORD *)(a1 + 40));
  return v2;
}
