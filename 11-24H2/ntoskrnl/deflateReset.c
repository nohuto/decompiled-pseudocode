/*
 * XREFs of deflateReset @ 0x1405F562C
 * Callers:
 *     RtlCompressDeflateInitCompressionStream @ 0x1405F3CA4 (RtlCompressDeflateInitCompressionStream.c)
 * Callees:
 *     deflateResetKeep @ 0x1405F5664 (deflateResetKeep.c)
 *     lm_init @ 0x1405F7004 (lm_init.c)
 */

__int64 __fastcall deflateReset(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = deflateResetKeep();
  if ( !v2 )
    lm_init(*(_QWORD *)(a1 + 40));
  return v2;
}
