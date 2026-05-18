/*
 * XREFs of sub_18001AB3C @ 0x18001AB3C
 * Callers:
 *     sub_180012940 @ 0x180012940 (sub_180012940.c)
 * Callees:
 *     sub_1800985C8 @ 0x1800985C8 (sub_1800985C8.c)
 *     sub_180098804 @ 0x180098804 (sub_180098804.c)
 */

__int64 __fastcall sub_18001AB3C(__int64 a1, __int64 a2, float a3)
{
  float *v3; // r8
  __int64 result; // rax
  __m128 *v5; // r9
  __m128 v6; // xmm1
  __m128 v7; // [rsp+20h] [rbp-E0h]
  __m128 v8[10]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v9[48]; // [rsp+D0h] [rbp-30h] BYREF
  __m128 v10; // [rsp+100h] [rbp+0h]
  __m128 v11; // [rsp+110h] [rbp+10h]
  __m128 v12; // [rsp+120h] [rbp+20h]

  sub_180098804(v9, a2, a2, a1);
  v7.m128_i32[3] = 1065353216;
  v7.m128_f32[0] = a3 * *v3;
  v7.m128_f32[1] = a3 * v3[1];
  v7.m128_f32[2] = a3 * v3[2];
  v10 = _mm_add_ps(v10, v7);
  v11 = _mm_add_ps(v11, v7);
  v12 = _mm_add_ps(v12, v7);
  result = sub_1800985C8(v8, v9);
  v5[3] = _mm_add_ps(v5[3], v8[0]);
  v5[4] = _mm_add_ps(v5[4], v8[1]);
  v5[5] = _mm_add_ps(v8[2], v5[5]);
  v5[6] = _mm_add_ps(v5[6], v8[3]);
  v5[7] = _mm_add_ps(v5[7], v8[4]);
  v6 = v8[6];
  v5[8] = _mm_add_ps(v5[8], v8[5]);
  v5[9] = _mm_add_ps(v6, v5[9]);
  v5[10] = _mm_add_ps(v5[10], v8[7]);
  v5[11] = _mm_add_ps(v5[11], v8[8]);
  return result;
}
