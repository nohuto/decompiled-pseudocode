/*
 * XREFs of LZ4_compress_HC_extStateHC @ 0x180152EA4
 * Callers:
 *     RtlCompressBufferLz4 @ 0x18014E960 (RtlCompressBufferLz4.c)
 * Callees:
 *     LZ4_compress_HC_extStateHC_fastReset @ 0x180152F04 (LZ4_compress_HC_extStateHC_fastReset.c)
 *     LZ4_initStreamHC @ 0x180152F88 (LZ4_initStreamHC.c)
 */

__int64 __fastcall LZ4_compress_HC_extStateHC(int a1, int a2, int a3, int a4, int a5)
{
  __int64 result; // rax

  result = LZ4_initStreamHC();
  if ( result )
    return LZ4_compress_HC_extStateHC_fastReset(a1, a2, a3, a4, a5);
  return result;
}
