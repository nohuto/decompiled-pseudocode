/*
 * XREFs of sub_18003A648 @ 0x18003A648
 * Callers:
 *     sub_180012F00 @ 0x180012F00 (sub_180012F00.c)
 *     sub_180060630 @ 0x180060630 (sub_180060630.c)
 *     sub_180088C60 @ 0x180088C60 (sub_180088C60.c)
 *     sub_18008BFB0 @ 0x18008BFB0 (sub_18008BFB0.c)
 *     sub_18008C130 @ 0x18008C130 (sub_18008C130.c)
 * Callees:
 *     _o_acosf @ 0x18000C404 (_o_acosf.c)
 *     sub_18001120C @ 0x18001120C (sub_18001120C.c)
 *     sub_1800183EC @ 0x1800183EC (sub_1800183EC.c)
 *     sub_180039AC0 @ 0x180039AC0 (sub_180039AC0.c)
 *     sub_18003A064 @ 0x18003A064 (sub_18003A064.c)
 *     sub_18003AC48 @ 0x18003AC48 (sub_18003AC48.c)
 *     sub_18003B7CC @ 0x18003B7CC (sub_18003B7CC.c)
 *     sub_18003BE7C @ 0x18003BE7C (sub_18003BE7C.c)
 *     sub_18003C398 @ 0x18003C398 (sub_18003C398.c)
 *     sub_18003C64C @ 0x18003C64C (sub_18003C64C.c)
 */

__int64 __fastcall sub_18003A648(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  __m128 v6; // xmm7
  __m128 v7; // xmm2
  __m128 v8; // xmm0
  __m128 v9; // xmm8
  __m128 v10; // xmm8
  __m128 v11; // xmm7
  __m128 v12; // xmm4
  unsigned __int32 v13; // xmm3_4
  __m128 v14; // xmm2
  __m128 v15; // xmm2
  __m128 v16; // xmm1
  int v17; // eax
  __m128 v18; // xmm4
  __m128 v19; // xmm6
  __m128 v20; // xmm2
  __m128 v21; // xmm4
  __m128 v22; // xmm0
  __m128 v23; // xmm3
  __m128 v24; // xmm1
  __m128 v25; // xmm3
  __m128 v26; // xmm2
  __m128 v27; // xmm3
  __m128 v28; // xmm2
  __m128 v29; // xmm2
  __m128 v30; // xmm1
  __m128 v31; // xmm2
  __int128 v32; // xmm0
  __m128 v33; // xmm3
  __m128 v34; // xmm5
  __m128 v35; // xmm2
  __m128 v36; // xmm3
  __m128 v37; // xmm5
  __m128 v38; // xmm6
  __m128 v39; // xmm2
  __int128 v40; // xmm0
  __int128 v42; // [rsp+28h] [rbp-89h] BYREF
  unsigned __int64 v43; // [rsp+38h] [rbp-79h] BYREF
  unsigned __int32 v44; // [rsp+40h] [rbp-71h]
  _BYTE v45[64]; // [rsp+48h] [rbp-69h] BYREF
  __int128 v46; // [rsp+88h] [rbp-29h] BYREF

  sub_18003BE7C();
  sub_18003A064(a1, (__int64)&v42);
  v6 = (__m128)(unsigned __int64)v42;
  v7 = 0LL;
  v8 = (__m128)*((unsigned int *)a2 + 2);
  v9 = (__m128)*a2;
  *(_QWORD *)&v42 = 0LL;
  v10 = _mm_movelh_ps(v9, v8);
  v11 = _mm_movelh_ps(v6, (__m128)DWORD2(v42));
  v12 = _mm_sub_ps(v10, v11);
  v13 = _mm_shuffle_ps(v12, v12, 170).m128_u32[0];
  v7.m128_u64[0] = v12.m128_u64[0];
  DWORD2(v42) = v13;
  v14 = _mm_movelh_ps(v7, (__m128)v13);
  v15 = _mm_mul_ps(v14, v14);
  v16 = _mm_shuffle_ps(v15, v15, 102);
  v15.m128_f32[0] = (float)(v15.m128_f32[0] + v16.m128_f32[0]) + _mm_shuffle_ps(v16, v16, 85).m128_f32[0];
  if ( _mm_sqrt_ps(_mm_shuffle_ps(v15, v15, 0)).m128_f32[0] <= 0.00000059604645 )
  {
    v40 = xmmword_1800F8610;
    goto LABEL_6;
  }
  v44 = v13;
  v43 = v12.m128_u64[0];
  sub_18003AC48(&v43);
  v17 = *(_DWORD *)(a3 + 8);
  *(_QWORD *)&v42 = *(_QWORD *)a3;
  DWORD2(v42) = v17;
  sub_18003AC48(&v42);
  v18 = (__m128)(unsigned __int64)v42;
  *(_QWORD *)&v42 = 0LL;
  v19 = _mm_movelh_ps((__m128)v43, (__m128)v44);
  v20 = _mm_shuffle_ps(v19, v19, 201);
  v21 = _mm_movelh_ps(v18, (__m128)DWORD2(v42));
  v22 = _mm_shuffle_ps(v20, v20, 201);
  v23 = _mm_shuffle_ps(v21, v21, 210);
  v24 = _mm_shuffle_ps(v23, v23, 210);
  v25 = _mm_mul_ps(v23, v20);
  v26 = 0LL;
  v27 = _mm_and_ps(_mm_sub_ps(v25, _mm_mul_ps(v24, v22)), (__m128)xmmword_1800F8040);
  v26.m128_u64[0] = v27.m128_u64[0];
  DWORD2(v42) = _mm_shuffle_ps(v27, v27, 170).m128_u32[0];
  v28 = _mm_movelh_ps(v26, (__m128)DWORD2(v42));
  v29 = _mm_mul_ps(v28, v28);
  v30 = _mm_shuffle_ps(v29, v29, 102);
  v29.m128_f32[0] = (float)(v29.m128_f32[0] + v30.m128_f32[0]) + _mm_shuffle_ps(v30, v30, 85).m128_f32[0];
  if ( _mm_sqrt_ps(_mm_shuffle_ps(v29, v29, 0)).m128_f32[0] <= 0.00000059604645 )
  {
    v33 = _mm_shuffle_ps(v19, v19, 210);
    DWORD2(v42) = -1082130432;
    v34 = _mm_movelh_ps((__m128)0LL, (__m128)0xBF800000);
    v35 = _mm_shuffle_ps(v34, v34, 201);
    v36 = _mm_and_ps(
            _mm_sub_ps(_mm_mul_ps(v33, v35), _mm_mul_ps(_mm_shuffle_ps(v33, v33, 210), _mm_shuffle_ps(v35, v35, 201))),
            (__m128)xmmword_1800F8040);
    v43 = v36.m128_u64[0];
    v44 = _mm_shuffle_ps(v36, v36, 170).m128_u32[0];
    sub_18003AC48(&v43);
    v38 = _mm_mul_ps(v19, v37);
    v39 = _mm_shuffle_ps(v38, v38, 153);
    sub_18001120C((float)(v38.m128_f32[0] + v39.m128_f32[0]) + _mm_shuffle_ps(v39, v39, 85).m128_f32[0], -1.0, 1.0);
    o_acosf();
    sub_180039AC0((__int64)&v42, &v43);
    v40 = v42;
LABEL_6:
    v42 = v40;
    return sub_18003B7CC(a1, &v42);
  }
  *(_OWORD *)&v45[4] = 0LL;
  *(_OWORD *)&v45[44] = 0LL;
  v31 = v21;
  *((_QWORD *)&v32 + 1) = v11.m128_u64[1];
  *(_OWORD *)&v45[24] = 0LL;
  *(double *)&v32 = sub_18003C398();
  *(_OWORD *)v45 = v32;
  *(__m128 *)&v45[16] = _mm_sub_ps(v11, v10);
  *(__m128 *)&v45[32] = v31;
  *(_OWORD *)&v45[48] = 0LL;
  sub_1800183EC((__int128 *)v45, (__int64)&v46);
  *((_QWORD *)&v32 + 1) = *((_QWORD *)&v46 + 1);
  *(double *)&v32 = sub_18003C64C();
  v42 = v32;
  return sub_18003B7CC(a1, &v42);
}
