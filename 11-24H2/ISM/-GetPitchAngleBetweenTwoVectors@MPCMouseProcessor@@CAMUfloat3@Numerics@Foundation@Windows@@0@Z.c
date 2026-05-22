/*
 * XREFs of ?GetPitchAngleBetweenTwoVectors@MPCMouseProcessor@@CAMUfloat3@Numerics@Foundation@Windows@@0@Z @ 0x1801C1F6C
 * Callers:
 *     ?PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801C2820 (-PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputIn.c)
 * Callees:
 *     _o_asinf_0 @ 0x18009D49C (_o_asinf_0.c)
 */

__m128 __fastcall MPCMouseProcessor::GetPitchAngleBetweenTwoVectors(unsigned __int64 *a1, unsigned __int64 *a2)
{
  __m128 v3; // xmm3
  __m128 v4; // xmm2
  __m128 v5; // xmm1
  __m128 v6; // xmm3
  __m128 v7; // xmm0
  __m128 v8; // xmm3
  __m128 v9; // xmm2
  __m128 v10; // xmm1
  __m128 v11; // xmm3
  __int128 v12; // xmm0
  __int128 v13; // xmm6

  v3 = _mm_movelh_ps((__m128)*a1, (__m128)*((unsigned int *)a1 + 2));
  v4 = _mm_mul_ps(v3, v3);
  v5 = _mm_shuffle_ps(v4, v4, 102);
  v4.m128_f32[0] = (float)(v4.m128_f32[0] + v5.m128_f32[0]) + _mm_shuffle_ps(v5, v5, 85).m128_f32[0];
  v6 = _mm_div_ps(v3, _mm_sqrt_ps(_mm_shuffle_ps(v4, v4, 0)));
  *a1 = v6.m128_u64[0];
  v7 = (__m128)*((unsigned int *)a2 + 2);
  *((_DWORD *)a1 + 2) = _mm_shuffle_ps(v6, v6, 170).m128_u32[0];
  v8 = _mm_movelh_ps((__m128)*a2, v7);
  v9 = _mm_mul_ps(v8, v8);
  v10 = _mm_shuffle_ps(v9, v9, 102);
  v9.m128_f32[0] = (float)(v9.m128_f32[0] + v10.m128_f32[0]) + _mm_shuffle_ps(v10, v10, 85).m128_f32[0];
  v11 = _mm_div_ps(v8, _mm_sqrt_ps(_mm_shuffle_ps(v9, v9, 0)));
  *a2 = v11.m128_u64[0];
  *((_DWORD *)a2 + 2) = _mm_shuffle_ps(v11, v11, 170).m128_u32[0];
  v12 = *((unsigned int *)a2 + 1);
  *(float *)&v12 = o_asinf_0(*(float *)&v12);
  v13 = v12;
  *(float *)&v13 = *(float *)&v12 - o_asinf_0(*((float *)a1 + 1));
  return (__m128)v13;
}
