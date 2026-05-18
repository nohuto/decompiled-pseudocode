/*
 * XREFs of sub_18004E270 @ 0x18004E270
 * Callers:
 *     sub_18004E4D4 @ 0x18004E4D4 (sub_18004E4D4.c)
 *     sub_18004E580 @ 0x18004E580 (sub_18004E580.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_1800246B0 @ 0x1800246B0 (sub_1800246B0.c)
 *     sub_180051B88 @ 0x180051B88 (sub_180051B88.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_18004E270(__m128 *a1, __m128 *a2)
{
  __m128 v4; // xmm0
  __m128i v5; // xmm0
  __m128i v6; // xmm0
  __m128 v7; // xmm0
  void *v8; // rax
  unsigned int v9; // r9d
  __m128 *v10; // r11
  unsigned int v11; // r8d
  __int32 v12; // esi
  void *v13; // [rsp+50h] [rbp-38h] BYREF
  __m128 v14; // [rsp+58h] [rbp-30h] BYREF
  __int32 v15; // [rsp+68h] [rbp-20h]
  __int32 v16; // [rsp+6Ch] [rbp-1Ch]

  if ( !*(_QWORD *)(a1[28].m128_u64[0] + 128) || _mm_movemask_ps(_mm_cmpneq_ps(a1[31], *a2)) )
  {
    v4 = _mm_mul_ps(
           _mm_min_ps(_mm_max_ps(*a2, (__m128)xmmword_1800F8190), (__m128)xmmword_1800F8180),
           (__m128)xmmword_1800F7FA0);
    v5 = _mm_cvtps_epi32(_mm_shuffle_ps(v4, v4, 198));
    v6 = _mm_packs_epi32(v5, v5);
    v7 = (__m128)_mm_packus_epi16(v6, v6);
    v14 = _mm_shuffle_ps(v7, v7, 0);
    v15 = v14.m128_i32[0];
    v16 = v14.m128_i32[0];
    v8 = (void *)sub_18001B1F8(24576LL);
    v13 = v8;
    v9 = 0;
    v10 = &v14;
    do
    {
      v11 = 0;
      v12 = v10->m128_i32[0];
      do
        *((_DWORD *)v8 + 1024 * v9 + v11++) = v12;
      while ( v11 < 0x400 );
      ++v9;
      v10 = (__m128 *)((char *)v10 + 4);
    }
    while ( v9 < 6 );
    sub_180051B88(a1[28].m128_u64[0], 32, 32, 0, 16, 0, 17, (__int64)v8, 24576, 0LL);
    a1[31].m128_i32[0] = a2->m128_i32[0];
    a1[31].m128_i32[1] = a2->m128_i32[1];
    a1[31].m128_i32[2] = a2->m128_i32[2];
    a1[31].m128_i32[3] = a2->m128_i32[3];
    sub_1800246B0(&v13);
  }
  a1[33].m128_i32[0] = 1065353216;
}
