/*
 * XREFs of deflateReset @ 0x180152CF0
 * Callers:
 *     RtlCompressDeflateInitCompressionStream @ 0x180151374 (RtlCompressDeflateInitCompressionStream.c)
 * Callees:
 *     deflateResetKeep @ 0x180152D28 (deflateResetKeep.c)
 *     lm_init @ 0x1801546D4 (lm_init.c)
 */

__int64 __fastcall deflateReset(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = deflateResetKeep();
  if ( !v2 )
    lm_init(*(_QWORD *)(a1 + 40));
  return v2;
}
