/*
 * XREFs of sub_1800989C8 @ 0x1800989C8
 * Callers:
 *     sub_18004E580 @ 0x18004E580 (sub_18004E580.c)
 * Callees:
 *     sub_1800986AC @ 0x1800986AC (sub_1800986AC.c)
 *     sub_180098964 @ 0x180098964 (sub_180098964.c)
 */

__int64 __fastcall sub_1800989C8(__int64 a1)
{
  __m128 *v1; // r8
  __m128 v2; // xmm2
  __m128 *v3; // rcx
  __m128 v4; // xmm3
  __m128 v5; // xmm2
  __m128 v6; // xmm2
  __m128 v7; // xmm3
  __m128 v8; // xmm2
  __m128 v9; // xmm2
  __m128 v10; // xmm3
  __m128 v11; // xmm2
  __int64 v12; // rcx

  sub_180098964(a1);
  v2 = _mm_mul_ps(v1[3], (__m128)xmmword_18018D610);
  v3->m128_i32[0] = v2.m128_i32[0];
  v3->m128_i32[1] = _mm_shuffle_ps(v2, v2, 85).m128_u32[0];
  v3->m128_i32[2] = _mm_shuffle_ps(v2, v2, 170).m128_u32[0];
  v3->m128_i32[3] = _mm_shuffle_ps(v2, v2, 255).m128_u32[0];
  v4 = _mm_mul_ps(v1[1], (__m128)xmmword_18018D610);
  v3[1].m128_i32[0] = v4.m128_i32[0];
  v3[1].m128_i32[1] = _mm_shuffle_ps(v4, v4, 85).m128_u32[0];
  v3[1].m128_i32[2] = _mm_shuffle_ps(v4, v4, 170).m128_u32[0];
  v3[1].m128_i32[3] = _mm_shuffle_ps(v4, v4, 255).m128_u32[0];
  v5 = _mm_mul_ps(v1[2], (__m128)xmmword_18018D610);
  v3[2].m128_i32[0] = v5.m128_i32[0];
  v3[2].m128_i32[1] = _mm_shuffle_ps(v5, v5, 85).m128_u32[0];
  v3[2].m128_i32[2] = _mm_shuffle_ps(v5, v5, 170).m128_u32[0];
  v3[2].m128_i32[3] = _mm_shuffle_ps(v5, v5, 255).m128_u32[0];
  v6 = _mm_add_ps(
         _mm_sub_ps(_mm_mul_ps((__m128)xmmword_18018D5A0, *v1), _mm_mul_ps(v1[6], (__m128)xmmword_18018D4E0)),
         _mm_mul_ps(v1[8], (__m128)xmmword_18018D520));
  v3[3].m128_i32[0] = v6.m128_i32[0];
  v3[3].m128_i32[1] = _mm_shuffle_ps(v6, v6, 85).m128_u32[0];
  v3[3].m128_i32[2] = _mm_shuffle_ps(v6, v6, 170).m128_u32[0];
  v3[3].m128_i32[3] = _mm_shuffle_ps(v6, v6, 255).m128_u32[0];
  v7 = _mm_sub_ps(
         _mm_sub_ps(_mm_mul_ps((__m128)xmmword_18018D5A0, *v1), _mm_mul_ps((__m128)xmmword_18018D4E0, v1[6])),
         _mm_mul_ps(v1[8], (__m128)xmmword_18018D520));
  v3[4].m128_i32[0] = v7.m128_i32[0];
  v3[4].m128_i32[1] = _mm_shuffle_ps(v7, v7, 85).m128_u32[0];
  v3[4].m128_i32[2] = _mm_shuffle_ps(v7, v7, 170).m128_u32[0];
  v3[4].m128_i32[3] = _mm_shuffle_ps(v7, v7, 255).m128_u32[0];
  v8 = _mm_add_ps(_mm_mul_ps((__m128)xmmword_18018D530, v1[6]), _mm_mul_ps((__m128)xmmword_18018D5A0, *v1));
  v3[5].m128_i32[0] = v8.m128_i32[0];
  v3[5].m128_i32[2] = _mm_shuffle_ps(v8, v8, 170).m128_u32[0];
  v3[5].m128_i32[1] = _mm_shuffle_ps(v8, v8, 85).m128_u32[0];
  v3[5].m128_i32[3] = _mm_shuffle_ps(v8, v8, 255).m128_u32[0];
  v9 = _mm_mul_ps(v1[5], (__m128)xmmword_18018D590);
  v3[6].m128_i32[0] = v9.m128_i32[0];
  v3[6].m128_i32[1] = _mm_shuffle_ps(v9, v9, 85).m128_u32[0];
  v3[6].m128_i32[2] = _mm_shuffle_ps(v9, v9, 170).m128_u32[0];
  v3[6].m128_i32[3] = _mm_shuffle_ps(v9, v9, 255).m128_u32[0];
  v10 = _mm_mul_ps(v1[7], (__m128)xmmword_18018D590);
  v3[7].m128_i32[0] = v10.m128_i32[0];
  v3[7].m128_i32[1] = _mm_shuffle_ps(v10, v10, 85).m128_u32[0];
  v3[7].m128_i32[2] = _mm_shuffle_ps(v10, v10, 170).m128_u32[0];
  v3[7].m128_i32[3] = _mm_shuffle_ps(v10, v10, 255).m128_u32[0];
  v11 = _mm_mul_ps(v1[4], (__m128)xmmword_18018D590);
  v3[8].m128_i32[0] = v11.m128_i32[0];
  v3[8].m128_i32[2] = _mm_shuffle_ps(v11, v11, 170).m128_u32[0];
  v3[8].m128_i32[1] = _mm_shuffle_ps(v11, v11, 85).m128_u32[0];
  v3[8].m128_i32[3] = _mm_shuffle_ps(v11, v11, 255).m128_u32[0];
  sub_1800986AC(v3, COERCE_DOUBLE(1050868099LL));
  return v12;
}
