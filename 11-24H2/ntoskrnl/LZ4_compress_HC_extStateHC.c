/*
 * XREFs of LZ4_compress_HC_extStateHC @ 0x1404D8864
 * Callers:
 *     RtlCompressBufferLz4 @ 0x14038A3F0 (RtlCompressBufferLz4.c)
 * Callees:
 *     LZ4_initStreamHC @ 0x1404F9F64 (LZ4_initStreamHC.c)
 *     LZ4_compress_HC_extStateHC_fastReset @ 0x1406018E0 (LZ4_compress_HC_extStateHC_fastReset.c)
 */

__int64 __fastcall LZ4_compress_HC_extStateHC(int a1, int a2, int a3, int a4, int a5)
{
  __int64 result; // rax

  result = LZ4_initStreamHC();
  if ( result )
    return LZ4_compress_HC_extStateHC_fastReset(a1, a2, a3, a4, a5);
  return result;
}
