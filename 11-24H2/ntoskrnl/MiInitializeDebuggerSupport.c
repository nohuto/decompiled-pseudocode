/*
 * XREFs of MiInitializeDebuggerSupport @ 0x140680CEC
 * Callers:
 *     MiInitNucleus @ 0x140C51428 (MiInitNucleus.c)
 * Callees:
 *     MiReservePtes @ 0x14029FB10 (MiReservePtes.c)
 *     MxInstallMoreMemory @ 0x14066D8C0 (MxInstallMoreMemory.c)
 */

__int64 MiInitializeDebuggerSupport()
{
  _QWORD *v0; // rax
  unsigned int v1; // r9d
  unsigned int *v2; // r10
  __m128i v3; // xmm4
  __m128i v4; // xmm4
  __m128i v5; // xmm2
  __m128i v6; // xmm1
  __int64 result; // rax
  __m128i v8; // xmm3
  __m128i v9; // xmm3
  __m128i v10; // xmm3

  v0 = (_QWORD *)MiReservePtes((__int64)&qword_140E376A8, 2u);
  v1 = 0;
  qword_140E30310 = (__int64)v0;
  if ( !v0 )
    MxInstallMoreMemory(3);
  v2 = (unsigned int *)&unk_140E31C68;
  *v0 = CLFS_LSN_NULL_EXT;
  qword_140E30318 = qword_140E30310 + 8;
  *(_QWORD *)(qword_140E30310 + 8) = CLFS_LSN_NULL_EXT;
  do
  {
    v3 = _mm_cvtsi32_si128(v1);
    v1 += 4;
    v4 = (__m128i)_mm_or_ps(
                    _mm_and_ps(
                      (__m128)_mm_add_epi32(
                                _mm_slli_epi32(_mm_add_epi32(_mm_shuffle_epi32(v3, 0), (__m128i)_xmm), 2u),
                                (__m128i)_xmm),
                      (__m128)_xmm_fffffffcfffffffcfffffffcfffffffc),
                    _mm_and_ps(
                      (__m128)_mm_unpacklo_epi64(
                                _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(v2 - 12)), _mm_cvtsi32_si128(*(v2 - 6))),
                                _mm_unpacklo_epi32(_mm_cvtsi32_si128(*v2), _mm_cvtsi32_si128(v2[6]))),
                      (__m128)_xmm));
    v5 = _mm_srli_si128(v4, 4);
    v6 = _mm_srli_si128(v5, 4);
    result = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v6, 4));
    v8 = (__m128i)_mm_or_ps(
                    (__m128)_mm_unpacklo_epi64(
                              _mm_unpacklo_epi32(
                                _mm_cvtsi32_si128(_mm_cvtsi128_si32(v4)),
                                _mm_cvtsi32_si128(_mm_cvtsi128_si32(v5))),
                              _mm_unpacklo_epi32(_mm_cvtsi32_si128(_mm_cvtsi128_si32(v6)), _mm_cvtsi32_si128(result))),
                    (__m128)_xmm);
    *(v2 - 12) = _mm_cvtsi128_si32(v8);
    v9 = _mm_srli_si128(v8, 4);
    *(v2 - 6) = _mm_cvtsi128_si32(v9);
    v10 = _mm_srli_si128(v9, 4);
    *v2 = _mm_cvtsi128_si32(v10);
    v2 += 24;
    *(v2 - 18) = _mm_cvtsi128_si32(_mm_srli_si128(v10, 4));
  }
  while ( v1 < 0x200 );
  return result;
}
