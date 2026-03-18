/*
 * XREFs of RtlCompressBufferLz4 @ 0x1403A1770
 * Callers:
 *     RtlCompressBuffer @ 0x1403A15F0 (RtlCompressBuffer.c)
 * Callees:
 *     LZ4_compress_fast_extState @ 0x1403A17F0 (LZ4_compress_fast_extState.c)
 *     LZ4_compress_HC_extStateHC @ 0x1404D97E4 (LZ4_compress_HC_extStateHC.c)
 */

__int64 __fastcall RtlCompressBufferLz4(__int16 a1, int a2, int a3, int a4, int a5, int a6, int *a7, __int64 a8)
{
  int v8; // eax

  if ( (a1 & 0xFEFF) != 0 )
    return 3221225659LL;
  if ( (a8 & 7) != 0 )
    return 3221226612LL;
  if ( a1 )
    v8 = LZ4_compress_HC_extStateHC(a8, a2, a4, a3, a5);
  else
    v8 = LZ4_compress_fast_extState(a8, a2, a4, a3, a5);
  if ( v8 <= 0 )
    return 3221225507LL;
  *a7 = v8;
  return 0LL;
}
