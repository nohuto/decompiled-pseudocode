/*
 * XREFs of sub_18003B7CC @ 0x18003B7CC
 * Callers:
 *     sub_18003A648 @ 0x18003A648 (sub_18003A648.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180012654 @ 0x180012654 (sub_180012654.c)
 *     sub_180039388 @ 0x180039388 (sub_180039388.c)
 *     sub_18003A170 @ 0x18003A170 (sub_18003A170.c)
 *     sub_18003B430 @ 0x18003B430 (sub_18003B430.c)
 *     sub_18003BE7C @ 0x18003BE7C (sub_18003BE7C.c)
 */

// Hidden C++ exception states: #wind=2
unsigned __int64 __fastcall sub_18003B7CC(__int64 a1, __m128 *a2)
{
  char v4; // bl
  __int64 *v5; // rax
  __m128 *v6; // rax
  __m128 v7; // xmm6
  __m128 v8; // xmm2
  __m128 v9; // xmm0
  __m128 v10; // xmm2
  __m128 v11; // xmm2
  __m128 v12; // xmm1
  __int128 v14; // [rsp+20h] [rbp-50h] BYREF
  __int64 v15; // [rsp+30h] [rbp-40h] BYREF
  __int64 v16; // [rsp+38h] [rbp-38h]
  __m128 v17; // [rsp+40h] [rbp-30h] BYREF
  __m128 v18; // [rsp+50h] [rbp-20h] BYREF

  v4 = 0;
  sub_18003BE7C();
  if ( *sub_180012654(a1, &v17) )
  {
    v5 = sub_180012654(a1, &v15);
    v4 = 1;
    v6 = sub_18003A170(*v5, &v18);
  }
  else
  {
    v14 = xmmword_1800F8610;
    v6 = (__m128 *)&v14;
  }
  v7 = (__m128)_mm_loadu_si128((const __m128i *)v6);
  if ( (v4 & 1) != 0 && v16 )
    sub_18001060C(v16);
  if ( v17.m128_u64[1] )
    sub_18001060C(v17.m128_i64[1]);
  v8 = _mm_mul_ps(v7, v7);
  v9 = _mm_add_ps(_mm_shuffle_ps(v7, v8, 64), v8);
  v10 = _mm_add_ps(_mm_shuffle_ps(v8, v9, 48), v9);
  v11 = _mm_shuffle_ps(v10, v10, 170);
  v12 = _mm_cmple_ps(v11, (__m128)xmmword_1800F8080);
  v17 = _mm_or_ps(
          _mm_andnot_ps(v12, _mm_div_ps(_mm_mul_ps(v7, (__m128)xmmword_1800FA100), v11)),
          _mm_and_ps(v12, (__m128)xmmword_1800F8190));
  v17 = *sub_180039388(&v18, a2, &v17);
  return sub_18003B430(a1, &v17);
}
