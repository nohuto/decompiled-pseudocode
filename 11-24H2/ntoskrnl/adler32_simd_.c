/*
 * XREFs of adler32_simd_ @ 0x14060165C
 * Callers:
 *     adler32_z @ 0x1405FF6B4 (adler32_z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall adler32_simd_(unsigned int a1, const __m128i *a2, unsigned __int64 a3)
{
  unsigned int v3; // r9d
  unsigned int v4; // r10d
  unsigned __int64 v5; // rcx
  unsigned __int64 v7; // r8
  unsigned int v8; // edx
  __m128i v9; // xmm0
  __m128i v10; // xmm5
  __m128i v11; // xmm6
  __m128i v12; // xmm4
  __m128i v13; // xmm5
  __m128i v14; // xmm2
  __m128i v15; // xmm3
  __m128i v16; // xmm1
  __m128i v17; // xmm4
  int v18; // eax
  __m128i v19; // xmm1
  int v20; // eax
  unsigned __int8 *v21; // r11
  int v22; // r9d
  int v23; // r10d
  int v24; // eax
  int v25; // r9d
  int v26; // r10d
  int v27; // eax
  int v28; // r9d
  int v29; // r10d
  int v30; // eax
  int v31; // r9d
  int v32; // r10d
  int v33; // eax
  int v34; // r9d
  int v35; // r10d
  int v36; // eax
  int v37; // r9d
  int v38; // r10d
  int v39; // eax
  int v40; // r9d
  int v41; // r10d
  int v42; // eax
  int v43; // r9d
  int v44; // r10d
  int v45; // eax
  int v46; // r9d
  int v47; // r10d
  int v48; // eax
  int v49; // r9d
  int v50; // r10d
  int v51; // eax
  int v52; // r9d
  int v53; // r10d
  int v54; // eax
  int v55; // r9d
  int v56; // r10d
  int v57; // eax
  int v58; // r9d
  int v59; // r10d
  int v60; // eax
  int v61; // r9d
  int v62; // r10d
  int v63; // eax
  int v64; // r9d
  int v65; // r10d
  int v66; // eax
  int v67; // ecx
  unsigned int v68; // eax

  v3 = (unsigned __int16)a1;
  v4 = HIWORD(a1);
  v5 = a3 >> 5;
  v7 = a3 - 32 * (a3 >> 5);
  while ( v5 )
  {
    v8 = 173;
    v9 = _mm_cvtsi32_si128(0);
    v10 = _mm_cvtsi32_si128(v4);
    v11 = 0LL;
    if ( v5 < 0xAD )
      v8 = v5;
    v5 -= v8;
    v12 = _mm_unpacklo_epi32(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v3 * v8), v9), (__m128i)_xmm);
    v13 = _mm_unpacklo_epi32(_mm_unpacklo_epi32(v10, _mm_cvtsi32_si128(0)), (__m128i)_xmm);
    do
    {
      v14 = _mm_loadu_si128(a2);
      v15 = _mm_loadu_si128(a2 + 1);
      a2 += 2;
      v12 = _mm_add_epi32(v12, v11);
      v11 = _mm_add_epi32(_mm_add_epi32(v11, _mm_sad_epu8(v14, (__m128i)_xmm)), _mm_sad_epu8(v15, (__m128i)_xmm));
      v13 = _mm_add_epi32(
              _mm_add_epi32(v13, _mm_madd_epi16(_mm_maddubs_epi16(v14, (__m128i)_xmm), (__m128i)_xmm)),
              _mm_madd_epi16(_mm_maddubs_epi16(v15, (__m128i)_xmm), (__m128i)_xmm));
      --v8;
    }
    while ( v8 );
    v16 = _mm_add_epi32(_mm_shuffle_epi32(v11, 177), v11);
    v17 = _mm_add_epi32(_mm_slli_epi32(v12, 5u), v13);
    v18 = _mm_cvtsi128_si32(_mm_add_epi32(_mm_shuffle_epi32(v16, 78), v16));
    v19 = _mm_add_epi32(_mm_shuffle_epi32(v17, 177), v17);
    v3 = (v18 + v3) % 0xFFF1;
    v4 = _mm_cvtsi128_si32(_mm_add_epi32(_mm_shuffle_epi32(v19, 78), v19)) % 0xFFF1u;
  }
  if ( v7 )
  {
    if ( v7 < 0x10 )
      goto LABEL_18;
    v20 = a2->m128i_u8[0];
    v21 = &a2->m128i_u8[1];
    v22 = v20 + v3;
    v23 = v22 + v4;
    v24 = *v21++;
    v25 = v24 + v22;
    v26 = v25 + v23;
    v27 = *v21++;
    v28 = v27 + v25;
    v29 = v28 + v26;
    v30 = *v21++;
    v31 = v30 + v28;
    v32 = v31 + v29;
    v33 = *v21++;
    v34 = v33 + v31;
    v35 = v34 + v32;
    v36 = *v21++;
    v37 = v36 + v34;
    v38 = v37 + v35;
    v39 = *v21++;
    v40 = v39 + v37;
    v41 = v40 + v38;
    v42 = *v21++;
    v43 = v42 + v40;
    v44 = v43 + v41;
    v45 = *v21++;
    v46 = v45 + v43;
    v47 = v46 + v44;
    v48 = *v21++;
    v49 = v48 + v46;
    v50 = v49 + v47;
    v51 = *v21++;
    v52 = v51 + v49;
    v53 = v52 + v50;
    v54 = *v21++;
    v55 = v54 + v52;
    v56 = v55 + v53;
    v57 = *v21++;
    v58 = v57 + v55;
    v59 = v58 + v56;
    v60 = *v21++;
    v61 = v60 + v58;
    v62 = v61 + v59;
    v63 = *v21++;
    v64 = v63 + v61;
    v65 = v64 + v62;
    v66 = *v21;
    a2 = (const __m128i *)(v21 + 1);
    v3 = v66 + v64;
    v4 = v3 + v65;
    v7 -= 16LL;
    if ( v7 )
    {
LABEL_18:
      do
      {
        v67 = a2->m128i_u8[0];
        a2 = (const __m128i *)((char *)a2 + 1);
        v3 += v67;
        v4 += v3;
        --v7;
      }
      while ( v7 );
    }
    v4 %= 0xFFF1u;
    v68 = v3 - 65521;
    if ( v3 < 0xFFF1 )
      v68 = v3;
    v3 = v68;
  }
  return v3 | (v4 << 16);
}
