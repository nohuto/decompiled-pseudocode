/*
 * XREFs of deflateReset @ 0x1801510B0
 * Callers:
 *     RtlCompressDeflateInitCompressionStream @ 0x18014F734 (RtlCompressDeflateInitCompressionStream.c)
 * Callees:
 *     deflateResetKeep @ 0x1801510E8 (deflateResetKeep.c)
 *     lm_init @ 0x180152A94 (lm_init.c)
 */

__int64 __fastcall deflateReset(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = deflateResetKeep();
  if ( !v2 )
    lm_init(*(_QWORD *)(a1 + 40));
  return v2;
}
