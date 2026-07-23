/*
 * XREFs of chunkset_core_0 @ 0x1405FF02C
 * Callers:
 *     chunkcopy_lapped_relaxed @ 0x1405FEFFC (chunkcopy_lapped_relaxed.c)
 * Callees:
 *     chunkcopy_core @ 0x1405F144C (chunkcopy_core.c)
 *     chunkunroll_relaxed @ 0x1405FF17C (chunkunroll_relaxed.c)
 */

__m128i *__fastcall chunkset_core_0(__m128i *a1, unsigned int a2, int a3)
{
  __int64 v3; // r9
  unsigned int v4; // edx
  unsigned int v5; // edx
  unsigned int v6; // edx
  _OWORD *v7; // rax
  __m128i v9; // xmm0
  __m128i *v10; // rcx
  int v11; // r8d
  __m128i v12; // xmm0
  __m128i v13; // xmm0
  int v14; // r8d
  __m128i v15; // xmm0
  __m128i v16; // xmm0
  int v17; // r8d
  __m128i v18; // xmm0
  __m128i v19; // xmm0
  __m128i v20; // xmm0
  __m128i v21; // xmm0
  __m128i v22; // xmm0
  int i; // r8d
  unsigned int v24; // [rsp+38h] [rbp+10h] BYREF
  int v25; // [rsp+40h] [rbp+18h] BYREF

  v25 = a3;
  v24 = a2;
  v3 = (((_BYTE)a3 - 1) & 0xFu) + 1;
  v4 = a2 - 1;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      v6 = v5 - 2;
      if ( v6 )
      {
        if ( v6 != 4 )
        {
          v7 = (_OWORD *)chunkunroll_relaxed(a1, &v24, &v25, v3);
          return (__m128i *)chunkcopy_core(v7, (_OWORD *)((char *)v7 - v24), v25);
        }
        v9 = _mm_loadl_epi64((__m128i *)((char *)a1 - 8));
        *a1 = _mm_unpacklo_epi64(v9, v9);
        v10 = (__m128i *)((char *)a1 + (unsigned int)v3);
        v11 = a3 - v3;
        if ( v11 )
        {
          v12 = _mm_loadl_epi64((__m128i *)((char *)v10 - 8));
          v13 = _mm_unpacklo_epi64(v12, v12);
          do
          {
            *v10++ = v13;
            v11 -= 16;
          }
          while ( v11 );
        }
      }
      else
      {
        *a1 = _mm_shuffle_epi32(_mm_cvtsi32_si128(a1[-1].m128i_u32[3]), 0);
        v10 = (__m128i *)((char *)a1 + (unsigned int)v3);
        v14 = a3 - v3;
        if ( v14 )
        {
          v15 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v10[-1].m128i_u32[3]), 0);
          do
          {
            *v10++ = v15;
            v14 -= 16;
          }
          while ( v14 );
        }
      }
    }
    else
    {
      v16 = _mm_cvtsi32_si128(a1[-1].m128i_i16[7]);
      *a1 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v16, v16), 0);
      v10 = (__m128i *)((char *)a1 + (unsigned int)v3);
      v17 = a3 - v3;
      if ( v17 )
      {
        v18 = _mm_cvtsi32_si128(v10[-1].m128i_i16[7]);
        v19 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v18, v18), 0);
        do
        {
          *v10++ = v19;
          v17 -= 16;
        }
        while ( v17 );
      }
    }
  }
  else
  {
    v20 = _mm_cvtsi32_si128(a1[-1].m128i_i8[15]);
    v21 = _mm_unpacklo_epi8(v20, v20);
    v22 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v21, v21), 0);
    *a1 = v22;
    v10 = (__m128i *)((char *)a1 + (unsigned int)v3);
    for ( i = a3 - v3; i; i -= 16 )
      *v10++ = v22;
  }
  return v10;
}
