/*
 * XREFs of strchr @ 0x180124880
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char *__cdecl strchr(const char *Str, int Val)
{
  const __m128i *v2; // r8
  unsigned int v3; // r10d
  char *v4; // r9
  __m128i v5; // xmm2
  __int64 v6; // rdx
  __m128i v7; // xmm1
  char *v8; // rdx

  v2 = (const __m128i *)((unsigned __int64)Str & 0xFFFFFFFFFFFFFFF0uLL);
  v3 = (unsigned __int8)Val | ((unsigned __int8)Val << 8);
  v4 = 0LL;
  v5 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_cvtsi32_si128(v3), 0), 0);
  for ( LODWORD(v6) = (-1 << ((unsigned __int8)Str & 0xF)) & _mm_movemask_epi8((__m128i)_mm_or_ps(
                                                                                          (__m128)_mm_cmpeq_epi8(
                                                                                                    v5,
                                                                                                    *(__m128i *)((unsigned __int64)Str & 0xFFFFFFFFFFFFFFF0uLL)),
                                                                                          (__m128)_mm_cmpeq_epi8(
                                                                                                    (__m128i)0LL,
                                                                                                    *(__m128i *)((unsigned __int64)Str & 0xFFFFFFFFFFFFFFF0uLL))));
        !(_DWORD)v6;
        LODWORD(v6) = _mm_movemask_epi8((__m128i)_mm_or_ps(
                                                   (__m128)_mm_cmpeq_epi8(v7, v5),
                                                   (__m128)_mm_cmpeq_epi8(v7, (__m128i)_xmm))) )
  {
    v7 = _mm_loadu_si128(++v2);
  }
  _BitScanForward((unsigned int *)&v6, v6);
  v8 = &v2->m128i_i8[v6];
  if ( *v8 == (_BYTE)v3 )
    return v8;
  return v4;
}
