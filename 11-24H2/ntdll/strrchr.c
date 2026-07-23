/*
 * XREFs of strrchr @ 0x180124B80
 * Callers:
 *     LdrpSnapModule @ 0x18006CB10 (LdrpSnapModule.c)
 *     LdrpResolveProcedureAddress @ 0x18006DB10 (LdrpResolveProcedureAddress.c)
 *     LdrpEnclaveAddForwarderModules @ 0x1800D4828 (LdrpEnclaveAddForwarderModules.c)
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
  int v8; // r11d
  __m128i v9; // xmm3
  unsigned int v10; // edx
  int i; // ebx
  __int64 v12; // rcx
  char *v13; // rcx
  __m128i v14; // xmm0
  unsigned int v15; // edx
  __int64 v16; // rcx
  char *v17; // rcx
  __m128i v18; // xmm0
  unsigned __int8 v19; // zf
  int v20; // ecx

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
      v18 = _mm_cvtsi32_si128((unsigned __int8)Ch);
      while ( 1 )
      {
        v20 = _mm_cmpistri(v18, *v3, 64);
        v19 = _mm_cmpistrz(v18, *v3, 64);
        if ( _mm_cmpistrc(v18, *v3, 64) )
        {
          v2 = &v3->m128i_i8[v20];
          v19 = _mm_cmpistrz(v18, *v3, 64);
        }
        if ( v19 )
          break;
        ++v3;
      }
    }
    else
    {
      v7 = (const __m128i *)((unsigned __int64)Str & 0xFFFFFFFFFFFFFFF0uLL);
      v8 = -1 << ((unsigned __int8)Str & 0xF);
      v9 = _mm_shuffle_epi32(
             _mm_shufflelo_epi16(_mm_cvtsi32_si128((unsigned __int8)Ch | ((unsigned __int8)Ch << 8)), 0),
             0);
      v10 = v8 & _mm_movemask_epi8(_mm_cmpeq_epi8(v9, *(__m128i *)((unsigned __int64)Str & 0xFFFFFFFFFFFFFFF0uLL)));
      for ( i = v8 & _mm_movemask_epi8(
                       _mm_cmpeq_epi8(
                         _mm_loadu_si128((const __m128i *)((unsigned __int64)Str & 0xFFFFFFFFFFFFFFF0uLL)),
                         (__m128i)0LL)); !i; v10 = _mm_movemask_epi8(_mm_cmpeq_epi8(v14, v9)) )
      {
        _BitScanReverse((unsigned int *)&v12, v10);
        v13 = &v7->m128i_i8[v12];
        if ( v10 )
          v2 = v13;
        v14 = _mm_loadu_si128(++v7);
        i = _mm_movemask_epi8(_mm_cmpeq_epi8(v14, (__m128i)0LL));
      }
      v15 = ((i & -i) - 1) & v10;
      _BitScanReverse((unsigned int *)&v16, v15);
      v17 = &v7->m128i_i8[v16];
      if ( v15 )
        return v17;
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
