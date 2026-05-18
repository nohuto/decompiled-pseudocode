/*
 * XREFs of sub_18003F944 @ 0x18003F944
 * Callers:
 *     sub_180047418 @ 0x180047418 (sub_180047418.c)
 *     sub_180084280 @ 0x180084280 (sub_180084280.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 */

// local variable allocation has failed, the output may be wrong!
unsigned __int64 __fastcall sub_18003F944(unsigned __int64 *a1, __int64 a2, double a3, double a4)
{
  __m128 v4; // xmm0
  __m128 v5; // xmm1
  __m128 v6; // xmm7
  __m128 v7; // xmm8
  __m128 v8; // xmm9
  __m128 v9; // xmm5
  unsigned __int64 result; // rax
  __m128 v11; // xmm6
  __m128 v12; // xmm2
  __m128 v13; // xmm3
  __m128 v14; // xmm4
  __m128 v15; // xmm1
  __m128 v16; // xmm1
  __m128 v17; // xmm2
  __m128 v18; // xmm0
  __m128 v19; // xmm3
  __m128 v20; // xmm0

  v6 = *(__m128 *)&a4;
  v7 = *(__m128 *)&a3;
  v8 = v5;
  v9 = _mm_movelh_ps((__m128)*a1, (__m128)*((unsigned int *)a1 + 2));
  result = 1LL;
  v11 = _mm_movelh_ps((__m128)*(unsigned __int64 *)((char *)a1 + 12), (__m128)*((unsigned int *)a1 + 5));
  v12 = _mm_add_ps(_mm_mul_ps(v11, (__m128)xmmword_1800F80A0[0]), v9);
  v13 = _mm_add_ps(
          _mm_add_ps(
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v12, v12, 170), v7), *(__m128 *)&a4),
            _mm_mul_ps(_mm_shuffle_ps(v12, v12, 85), v5)),
          _mm_mul_ps(_mm_shuffle_ps(v12, v12, 0), v4));
  v14 = v13;
  do
  {
    v15 = _mm_mul_ps(v11, (__m128)xmmword_1800F80A0[result++]);
    v16 = _mm_add_ps(v15, v9);
    v17 = _mm_add_ps(
            _mm_add_ps(
              _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v16, v16, 170), v7), v6),
              _mm_mul_ps(_mm_shuffle_ps(v16, v16, 85), v8)),
            _mm_mul_ps(_mm_shuffle_ps(v16, v16, 0), v4));
    v14 = _mm_min_ps(v14, v17);
    v13 = _mm_max_ps(v13, v17);
  }
  while ( result < 8 );
  v18 = v13;
  v19 = _mm_mul_ps(_mm_sub_ps(v13, v14), (__m128)xmmword_18018D550);
  v20 = _mm_mul_ps(_mm_add_ps(v18, v14), (__m128)xmmword_18018D550);
  *(_QWORD *)a2 = v20.m128_u64[0];
  *(_DWORD *)(a2 + 8) = _mm_shuffle_ps(v20, v20, 170).m128_u32[0];
  *(_QWORD *)(a2 + 12) = v19.m128_u64[0];
  *(_DWORD *)(a2 + 20) = _mm_shuffle_ps(v19, v19, 170).m128_u32[0];
  return result * 16;
}
