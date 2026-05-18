/*
 * XREFs of sub_180064D90 @ 0x180064D90
 * Callers:
 *     sub_1800626E4 @ 0x1800626E4 (sub_1800626E4.c)
 *     sub_180065E60 @ 0x180065E60 (sub_180065E60.c)
 * Callees:
 *     sub_18007C308 @ 0x18007C308 (sub_18007C308.c)
 */

__int64 __fastcall sub_180064D90(
        __int64 a1,
        __m128 *a2,
        __m128 *a3,
        __m128 *a4,
        __m128 *a5,
        _QWORD *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __m128 v9; // xmm4
  __int64 v10; // rcx
  __m128 v11; // xmm2
  __m128 v12; // xmm3
  __m128 v13; // xmm2

  v9 = *a2;
  v10 = *a6;
  v11 = _mm_mul_ps(*a2, *a3);
  v12 = _mm_mul_ps(*a4, *a2);
  a3->m128_i32[0] = v11.m128_i32[0];
  a3->m128_i32[1] = _mm_shuffle_ps(v11, v11, 85).m128_u32[0];
  a3->m128_i32[2] = _mm_shuffle_ps(v11, v11, 170).m128_u32[0];
  a3->m128_i32[3] = _mm_shuffle_ps(v11, v11, 255).m128_u32[0];
  v13 = _mm_mul_ps(*a5, v9);
  a4->m128_i32[1] = _mm_shuffle_ps(v12, v12, 85).m128_u32[0];
  a4->m128_i32[2] = _mm_shuffle_ps(v12, v12, 170).m128_u32[0];
  a4->m128_i32[0] = v12.m128_i32[0];
  a5->m128_i32[0] = v13.m128_i32[0];
  a5->m128_i32[3] = _mm_shuffle_ps(v13, v13, 255).m128_u32[0];
  a4->m128_i32[3] = _mm_shuffle_ps(v12, v12, 255).m128_u32[0];
  a5->m128_i32[1] = _mm_shuffle_ps(v13, v13, 85).m128_u32[0];
  a5->m128_i32[2] = _mm_shuffle_ps(v13, v13, 170).m128_u32[0];
  sub_18007C308(v10, a7);
  sub_18007C308(*a6, a8);
  return sub_18007C308(*a6, a9);
}
