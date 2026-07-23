/*
 * XREFs of chunkset_core @ 0x18014F8E0
 * Callers:
 *     inflate @ 0x18014FA34 (inflate.c)
 * Callees:
 *     <none>
 */

__m128i *__fastcall chunkset_core(__m128i *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r9d
  __m128i *v4; // r9
  __m128i v6; // xmm0
  __m128i *v7; // rcx
  unsigned int v8; // r8d
  __m128i v9; // xmm0
  __m128i v10; // xmm0
  unsigned int v11; // r8d
  __m128i v12; // xmm0
  __m128i v13; // xmm0
  unsigned int v14; // r8d
  __m128i v15; // xmm0
  __m128i v16; // xmm0
  __m128i v17; // xmm0
  __m128i v18; // xmm0
  __m128i v19; // xmm0
  unsigned int v20; // r8d
  __int64 v21; // rdx

  v3 = (((_BYTE)a3 - 1) & 0xF) + 1;
  switch ( a2 )
  {
    case 1u:
      v17 = _mm_cvtsi32_si128(a1[-1].m128i_i8[15]);
      v18 = _mm_unpacklo_epi8(v17, v17);
      v19 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v18, v18), 0);
      *a1 = v19;
      v7 = (__m128i *)((char *)a1 + v3);
      v20 = a3 - v3;
      if ( v20 )
      {
        v21 = ((v20 - 1) >> 4) + 1;
        do
        {
          *v7++ = v19;
          --v21;
        }
        while ( v21 );
      }
      return v7;
    case 2u:
      v13 = _mm_cvtsi32_si128(a1[-1].m128i_i16[7]);
      *a1 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v13, v13), 0);
      v7 = (__m128i *)((char *)a1 + v3);
      v14 = a3 - v3;
      if ( v14 )
      {
        v15 = _mm_cvtsi32_si128(v7[-1].m128i_i16[7]);
        v16 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v15, v15), 0);
        do
        {
          *v7++ = v16;
          v14 -= 16;
        }
        while ( v14 );
      }
      return v7;
    case 4u:
      *a1 = _mm_shuffle_epi32(_mm_cvtsi32_si128(a1[-1].m128i_u32[3]), 0);
      v7 = (__m128i *)((char *)a1 + v3);
      v11 = a3 - v3;
      if ( v11 )
      {
        v12 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v7[-1].m128i_u32[3]), 0);
        do
        {
          *v7++ = v12;
          v11 -= 16;
        }
        while ( v11 );
      }
      return v7;
    case 8u:
      v6 = _mm_loadl_epi64((__m128i *)((char *)a1 - 8));
      *a1 = _mm_unpacklo_epi64(v6, v6);
      v7 = (__m128i *)((char *)a1 + v3);
      v8 = a3 - v3;
      if ( v8 )
      {
        v9 = _mm_loadl_epi64((__m128i *)((char *)v7 - 8));
        v10 = _mm_unpacklo_epi64(v9, v9);
        do
        {
          *v7++ = v10;
          v8 -= 16;
        }
        while ( v8 );
      }
      return v7;
  }
  v4 = (__m128i *)((char *)a1 - a2);
  while ( a2 < a3 && a2 < 0x10 )
  {
    a3 -= a2;
    *a1 = *v4;
    a1 = (__m128i *)((char *)a1 + a2);
    a2 *= 2;
  }
  return (__m128i *)chunkcopy_core(a1, &a1->m128i_i8[-a2], a3);
}
