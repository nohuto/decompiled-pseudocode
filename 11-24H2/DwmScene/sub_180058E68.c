/*
 * XREFs of sub_180058E68 @ 0x180058E68
 * Callers:
 *     sub_1800583C0 @ 0x1800583C0 (sub_1800583C0.c)
 * Callees:
 *     sub_180057674 @ 0x180057674 (sub_180057674.c)
 */

_DWORD *__fastcall sub_180058E68(__int64 a1, _DWORD *a2, __int32 *a3)
{
  __int32 v4; // xmm1_4
  __m128 v5; // xmm6
  __m128 v6; // xmm1
  unsigned __int32 v7; // xmm0_4
  unsigned __int32 v8; // xmm2_4
  _DWORD *result; // rax
  __m128 v10; // [rsp+40h] [rbp-38h] BYREF
  __m128 v11; // [rsp+50h] [rbp-28h] BYREF

  v4 = a3[1];
  v10.m128_i32[0] = *a3;
  v10.m128_i32[2] = a3[2];
  v10.m128_i32[1] = v4;
  v10.m128_i32[3] = 1065353216;
  v5 = (__m128)0x3F800000u;
  v11 = v10;
  sub_180057674(a1, (__int64)&v10, (__int64)&v11);
  if ( v10.m128_f32[3] <= 0.0 )
  {
    v7 = 2143289344;
    v6.m128_i32[0] = 2143289344;
    v8 = 2143289344;
  }
  else
  {
    v5.m128_f32[0] = 1.0 / v10.m128_f32[3];
    v6 = _mm_mul_ps(v10, _mm_shuffle_ps(v5, v5, 0));
    v7 = _mm_shuffle_ps(v6, v6, 170).m128_u32[0];
    v8 = _mm_shuffle_ps(v6, v6, 85).m128_u32[0];
  }
  result = a2;
  *a2 = v6.m128_i32[0];
  a2[1] = v8;
  a2[2] = v7;
  return result;
}
