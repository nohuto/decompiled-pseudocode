/*
 * XREFs of KeCopyPageNt @ 0x1406B4400
 * Callers:
 *     KeCopyPageNtMfence @ 0x1406B4460 (KeCopyPageNtMfence.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeCopyPageNt(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __m128i si128; // xmm1
  __m128i v6; // xmm2
  __m128i v7; // xmm3

  result = -4096LL;
  v3 = a2 + 4096;
  v4 = a1 + 4096;
  do
  {
    si128 = _mm_stream_load_si128((__m128i *)(v3 + result + 16));
    v6 = _mm_stream_load_si128((__m128i *)(v3 + result + 32));
    v7 = _mm_stream_load_si128((__m128i *)(v3 + result + 48));
    _mm_stream_si128((__m128i *)(v4 + result), _mm_stream_load_si128((__m128i *)(v3 + result)));
    _mm_stream_si128((__m128i *)(v4 + result + 16), si128);
    _mm_stream_si128((__m128i *)(v4 + result + 32), v6);
    _mm_stream_si128((__m128i *)(v4 + result + 48), v7);
    result += 64LL;
  }
  while ( result );
  _mm_sfence();
  return result;
}
