/*
 * XREFs of strrchr @ 0x1404FD230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char *__cdecl strrchr(const char *Str, int Ch)
{
  char *v2; // r9
  __m128i *v3; // r8
  __m128i *v4; // rdx
  __int64 v5; // rax
  const __m128i *v7; // r10
  __m128i v8; // xmm2
  int v9; // r11d
  __m128i v10; // xmm4
  unsigned int v11; // edx
  int i; // ebx
  __int64 v13; // rcx
  char *v14; // rcx
  __m128i v15; // xmm0
  unsigned int v16; // edx
  __int64 v17; // rcx
  char *v18; // rcx
  __m128i v19; // xmm1
  __m128i v20; // xmm0
  unsigned __int8 v21; // zf
  int v22; // ecx

  v2 = 0LL;
  v3 = (__m128i *)Str;
  if ( (_BYTE)Ch )
  {
    if ( (_isa_info & 8) != 0 )
    {
      while ( ((unsigned __int8)v3 & 0xF) != 0 )
      {
        if ( v3->m128i_i8[0] == (_BYTE)Ch )
          v2 = (char *)v3;
        if ( !v3->m128i_i8[0] )
          return v2;
        v3 = (__m128i *)((char *)v3 + 1);
      }
      v19 = _mm_cvtsi32_si128((unsigned __int8)Ch);
      while ( 1 )
      {
        v20 = _mm_loadu_si128(v3);
        v22 = _mm_cmpistri(v19, v20, 64);
        v21 = _mm_cmpistrz(v19, v20, 64);
        if ( _mm_cmpistrc(v19, v20, 64) )
        {
          v2 = &v3->m128i_i8[v22];
          v21 = _mm_cmpistrz(v19, v20, 64);
        }
        if ( v21 )
          break;
        ++v3;
      }
    }
    else
    {
      v7 = (const __m128i *)((unsigned __int64)Str & 0xFFFFFFFFFFFFFFF0uLL);
      v8 = _mm_loadu_si128((const __m128i *)((unsigned __int64)Str & 0xFFFFFFFFFFFFFFF0uLL));
      v9 = -1 << ((unsigned __int8)Str & 0xF);
      v10 = _mm_shuffle_epi32(
              _mm_shufflelo_epi16(_mm_cvtsi32_si128((unsigned __int8)Ch | ((unsigned __int8)Ch << 8)), 0),
              0);
      v11 = v9 & _mm_movemask_epi8(_mm_cmpeq_epi8(v10, v8));
      for ( i = v9 & _mm_movemask_epi8(_mm_cmpeq_epi8(v8, (__m128i)0LL));
            !i;
            v11 = _mm_movemask_epi8(_mm_cmpeq_epi8(v15, v10)) )
      {
        _BitScanReverse((unsigned int *)&v13, v11);
        v14 = &v7->m128i_i8[v13];
        if ( v11 )
          v2 = v14;
        v15 = _mm_loadu_si128(++v7);
        i = _mm_movemask_epi8(_mm_cmpeq_epi8(v15, (__m128i)0LL));
      }
      v16 = ((i & -i) - 1) & v11;
      _BitScanReverse((unsigned int *)&v17, v16);
      v18 = &v7->m128i_i8[v17];
      if ( v16 )
        return v18;
    }
    return v2;
  }
  else
  {
    v4 = (__m128i *)((unsigned __int64)Str & 0xFFFFFFFFFFFFFFF0uLL);
    for ( LODWORD(v5) = (-1 << ((unsigned __int8)Str & 0xF)) & _mm_movemask_epi8(
                                                                 _mm_cmpeq_epi8(
                                                                   (__m128i)0LL,
                                                                   *(__m128i *)((unsigned __int64)Str & 0xFFFFFFFFFFFFFFF0uLL)));
          !(_DWORD)v5;
          LODWORD(v5) = _mm_movemask_epi8(_mm_cmpeq_epi8((__m128i)0LL, *v4)) )
    {
      ++v4;
    }
    _BitScanForward((unsigned int *)&v5, v5);
    return &v4->m128i_i8[v5];
  }
}
