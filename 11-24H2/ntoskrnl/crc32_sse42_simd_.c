/*
 * XREFs of crc32_sse42_simd_ @ 0x1404562B4
 * Callers:
 *     crc32_z @ 0x140455FAC (crc32_z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall crc32_sse42_simd_(const __m128i *a1, __int64 a2, unsigned int a3)
{
  __m128 v3; // xmm0
  unsigned __int64 v4; // rdx
  const __m128i *v8; // rcx
  unsigned __int64 v11; // r8
  __m128 v23; // xmm0
  __m128 v25; // xmm6
  __m128 v26; // xmm1
  __m128 si128; // xmm3
  __m128 v44; // xmm2
  __m128 v45; // xmm1
  __m128 v48; // xmm2
  unsigned __int64 v54; // rdx
  __m128 v56; // xmm0

  v3 = (__m128)_mm_loadu_si128(a1);
  v4 = a2 - 64;
  _XMM3 = (__m128)_mm_loadu_si128(a1 + 1);
  _XMM5 = (__m128)_mm_loadu_si128(a1 + 2);
  _XMM6 = (__m128)_mm_loadu_si128(a1 + 3);
  v8 = a1 + 4;
  _XMM2 = _mm_xor_ps((__m128)_mm_cvtsi32_si128(a3), v3);
  if ( v4 >= 0x40 )
  {
    _XMM4 = _mm_load_si128((const __m128i *)&xmmword_140019EE0);
    v11 = v4 >> 6;
    v4 += -64LL * (v4 >> 6);
    do
    {
      _XMM1 = _XMM2;
      __asm
      {
        pclmulqdq xmm1, xmm4, 11h
        pclmulqdq xmm2, xmm4, 0
      }
      _XMM2 = _mm_xor_ps(_mm_xor_ps(_XMM1, _XMM2), (__m128)_mm_loadu_si128(v8));
      _XMM1 = _XMM3;
      __asm
      {
        pclmulqdq xmm1, xmm4, 11h
        pclmulqdq xmm3, xmm4, 0
      }
      _XMM3 = _mm_xor_ps(_mm_xor_ps(_XMM1, _XMM3), (__m128)_mm_loadu_si128(v8 + 1));
      _XMM1 = _XMM5;
      __asm
      {
        pclmulqdq xmm1, xmm4, 11h
        pclmulqdq xmm5, xmm4, 0
      }
      _XMM5 = _mm_xor_ps(_mm_xor_ps(_XMM1, _XMM5), (__m128)_mm_loadu_si128(v8 + 2));
      _XMM1 = _XMM6;
      __asm { pclmulqdq xmm6, xmm4, 0 }
      v23 = _XMM6;
      __asm { pclmulqdq xmm1, xmm4, 11h }
      v25 = _XMM1;
      v26 = (__m128)_mm_loadu_si128(v8 + 3);
      v8 += 4;
      _XMM6 = _mm_xor_ps(_mm_xor_ps(v25, v23), v26);
      --v11;
    }
    while ( v11 );
  }
  _XMM4 = _mm_load_si128((const __m128i *)&xmmword_140019AD0);
  _XMM1 = _XMM2;
  __asm
  {
    pclmulqdq xmm2, xmm4, 0
    pclmulqdq xmm1, xmm4, 11h
  }
  _XMM1 = _mm_xor_ps(_mm_xor_ps(_XMM1, _XMM3), _XMM2);
  _XMM0 = _XMM1;
  __asm { pclmulqdq xmm0, xmm4, 11h }
  __asm { pclmulqdq xmm1, xmm4, 0 }
  _XMM0 = _mm_xor_ps(_mm_xor_ps(_XMM0, _XMM5), _XMM1);
  _XMM2 = _XMM0;
  __asm { pclmulqdq xmm2, xmm4, 11h }
  __asm { pclmulqdq xmm0, xmm4, 0 }
  _XMM2 = (__m128i)_mm_xor_ps(_mm_xor_ps(_XMM2, _XMM6), _XMM0);
  if ( v4 >= 0x10 )
  {
    v54 = v4 >> 4;
    do
    {
      _XMM1 = _XMM2;
      v56 = (__m128)_mm_loadu_si128(v8++);
      __asm
      {
        pclmulqdq xmm2, xmm4, 0
        pclmulqdq xmm1, xmm4, 11h
      }
      _XMM2 = (__m128i)_mm_xor_ps(_mm_xor_ps(_XMM1, v56), _XMM2);
      --v54;
    }
    while ( v54 );
  }
  si128 = (__m128)_mm_load_si128((const __m128i *)&_xmm);
  _XMM1 = _XMM2;
  _XMM0 = _mm_loadl_epi64((const __m128i *)&qword_140019AC0);
  __asm { pclmulqdq xmm1, xmm4, 10h }
  v44 = _mm_xor_ps(_XMM1, (__m128)_mm_srli_si128(_XMM2, 8));
  v45 = (__m128)_mm_srli_si128((__m128i)v44, 4);
  _XMM2 = _mm_and_ps(v44, si128);
  __asm { pclmulqdq xmm2, xmm0, 0 }
  v48 = _mm_xor_ps(_XMM2, v45);
  _XMM1 = _mm_and_ps(v48, si128);
  __asm { pclmulqdq xmm1, cs:xmmword_140019AB0, 10h }
  _XMM1 = _mm_and_ps(_XMM1, si128);
  __asm { pclmulqdq xmm1, cs:xmmword_140019AB0, 0 }
  return (unsigned int)_mm_extract_epi32((__m128i)_mm_xor_ps(_XMM1, v48), 1);
}
