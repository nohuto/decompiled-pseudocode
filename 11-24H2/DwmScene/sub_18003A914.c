/*
 * XREFs of sub_18003A914 @ 0x18003A914
 * Callers:
 *     sub_18003B5AC @ 0x18003B5AC (sub_18003B5AC.c)
 * Callees:
 *     sub_180038C4C @ 0x180038C4C (sub_180038C4C.c)
 *     sub_180039BF4 @ 0x180039BF4 (sub_180039BF4.c)
 */

char __fastcall sub_18003A914(__int32 *a1, unsigned __int64 *a2, _OWORD *a3)
{
  unsigned __int32 v3; // xmm5_4
  unsigned __int32 v4; // xmm4_4
  unsigned __int32 v6; // xmm3_4
  __m128 v8; // xmm6
  __m128 v9; // xmm7
  __m128 v10; // xmm8
  __m128 v11; // xmm9
  __m128 v12; // xmm10
  __m128 v13; // xmm11
  __int32 v14; // xmm12_4
  __m128 v15; // xmm13
  __m128 v16; // xmm15
  __m128 v17; // xmm15
  __m128 v18; // xmm2
  __m128 v19; // xmm1
  __m128 v20; // xmm14
  __m128 v21; // xmm2
  __m128 v22; // xmm1
  __m128 v23; // xmm6
  __m128 v24; // xmm2
  __m128 v25; // xmm1
  float v26; // xmm0_4
  __m128 v27; // xmm1
  float v28; // xmm7_4
  __m128 v29; // xmm5
  __m128 v30; // xmm5
  __m128 v31; // xmm4
  __m128 v32; // xmm4
  __m128 v33; // xmm3
  unsigned int v34; // xmm2_4
  __int64 v35; // r10
  __m128 v36; // xmm3
  char result; // al
  __m128 v38; // xmm3
  __int128 v39; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v40; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v41; // [rsp+58h] [rbp-B0h] BYREF
  __m128 v42; // [rsp+68h] [rbp-A0h] BYREF
  float v43; // [rsp+80h] [rbp-88h]
  __m128 v44; // [rsp+88h] [rbp-80h]
  _BYTE v45[224]; // [rsp+98h] [rbp-70h] BYREF

  v3 = a1[2];
  v4 = a1[6];
  v6 = a1[10];
  v8 = 0LL;
  v9 = 0LL;
  v10 = (__m128)(unsigned int)a1[8];
  v11 = (__m128)(unsigned int)a1[9];
  v12 = (__m128)(unsigned int)a1[4];
  v13 = (__m128)(unsigned int)a1[5];
  v14 = *a1;
  v15 = (__m128)(unsigned int)a1[1];
  v16 = 0LL;
  v16.m128_u64[0] = _mm_unpacklo_ps((__m128)(unsigned int)*a1, v15).m128_u64[0];
  DWORD2(v39) = v3;
  v17 = _mm_movelh_ps(v16, (__m128)v3);
  DWORD2(v40) = v4;
  v18 = _mm_mul_ps(v17, v17);
  DWORD2(v41) = v6;
  v19 = _mm_shuffle_ps(v18, v18, 102);
  v18.m128_f32[0] = (float)(v18.m128_f32[0] + v19.m128_f32[0]) + _mm_shuffle_ps(v19, v19, 85).m128_f32[0];
  v8.m128_u64[0] = _mm_unpacklo_ps(v12, v13).m128_u64[0];
  v42 = _mm_movelh_ps(v8, (__m128)v4);
  v20 = _mm_sqrt_ps(_mm_shuffle_ps(v18, v18, 0));
  v21 = _mm_mul_ps(v42, v42);
  v22 = _mm_shuffle_ps(v21, v21, 102);
  v21.m128_f32[0] = (float)(v21.m128_f32[0] + v22.m128_f32[0]) + _mm_shuffle_ps(v22, v22, 85).m128_f32[0];
  v9.m128_u64[0] = _mm_unpacklo_ps(v10, v11).m128_u64[0];
  v44 = _mm_movelh_ps(v9, (__m128)v6);
  v23 = _mm_sqrt_ps(_mm_shuffle_ps(v21, v21, 0));
  v24 = _mm_mul_ps(v44, v44);
  v25 = _mm_shuffle_ps(v24, v24, 102);
  v24.m128_f32[0] = v24.m128_f32[0] + v25.m128_f32[0];
  v26 = _mm_shuffle_ps(v25, v25, 85).m128_f32[0];
  v27 = (__m128)0x3F800000u;
  v24.m128_f32[0] = v24.m128_f32[0] + v26;
  LODWORD(v28) = _mm_sqrt_ps(_mm_shuffle_ps(v24, v24, 0)).m128_u32[0];
  v43 = v28;
  if ( v20.m128_f32[0] != 0.0 )
  {
    v29 = (__m128)0x3F800000u;
    v29.m128_f32[0] = 1.0 / v20.m128_f32[0];
    v30 = _mm_mul_ps(_mm_shuffle_ps(v29, v29, 0), v17);
    *(_QWORD *)&v39 = v30.m128_u64[0];
    v15.m128_i32[0] = v30.m128_i32[1];
    v14 = v30.m128_i32[0];
    v3 = _mm_shuffle_ps(v30, v30, 170).m128_u32[0];
  }
  if ( v23.m128_f32[0] != 0.0 )
  {
    v31 = (__m128)0x3F800000u;
    v31.m128_f32[0] = 1.0 / v23.m128_f32[0];
    v32 = _mm_mul_ps(_mm_shuffle_ps(v31, v31, 0), v42);
    *(_QWORD *)&v40 = v32.m128_u64[0];
    v13.m128_i32[0] = v32.m128_i32[1];
    v12.m128_i32[0] = v32.m128_i32[0];
    v4 = _mm_shuffle_ps(v32, v32, 170).m128_u32[0];
  }
  if ( v28 != 0.0 )
  {
    v27.m128_f32[0] = 1.0 / v28;
    v33 = _mm_mul_ps(_mm_shuffle_ps(v27, v27, 0), v44);
    *(_QWORD *)&v41 = v33.m128_u64[0];
    v11.m128_i32[0] = v33.m128_i32[1];
    v10.m128_i32[0] = v33.m128_i32[0];
    v6 = _mm_shuffle_ps(v33, v33, 170).m128_u32[0];
  }
  v34 = a1[14];
  *(_QWORD *)&v41 = *((_QWORD *)a1 + 6);
  *((_QWORD *)&v41 + 1) = v34 | 0x3F80000000000000LL;
  v42.m128_u64[0] = __PAIR64__(v15.m128_u32[0], v14);
  v42.m128_u64[1] = v3;
  *(_QWORD *)&v39 = __PAIR64__(v13.m128_u32[0], v12.m128_u32[0]);
  *((_QWORD *)&v39 + 1) = v4;
  *(_QWORD *)&v40 = __PAIR64__(v11.m128_u32[0], v10.m128_u32[0]);
  *((_QWORD *)&v40 + 1) = v6;
  sub_180038C4C((__int64)v45, (int *)&v42, &v39, &v40, &v41);
  if ( !sub_180039BF4((__int64)v45, (__int64)a2, a3, v35) )
    return 0;
  v36 = 0LL;
  result = 1;
  v36.m128_u64[0] = _mm_unpacklo_ps(v20, v23).m128_u64[0];
  v38 = _mm_mul_ps(
          _mm_movelh_ps(v36, (__m128)LODWORD(v43)),
          _mm_movelh_ps((__m128)*a2, (__m128)*((unsigned int *)a2 + 2)));
  *a2 = v38.m128_u64[0];
  *((_DWORD *)a2 + 2) = _mm_shuffle_ps(v38, v38, 170).m128_u32[0];
  return result;
}
