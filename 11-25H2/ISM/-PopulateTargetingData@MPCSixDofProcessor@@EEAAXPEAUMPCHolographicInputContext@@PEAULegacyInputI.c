/*
 * XREFs of ?PopulateTargetingData@MPCSixDofProcessor@@EEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x18006B8E0
 * Callers:
 *     <none>
 * Callees:
 *     ?transform@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z @ 0x180013D54 (-transform@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z.c)
 *     ?transform_normal@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z @ 0x18006BD18 (-transform_normal@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z.c)
 *     ?transform@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUquaternion@123@@Z @ 0x18006BDB0 (-transform@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUquaternion@123@@Z.c)
 */

void __fastcall MPCSixDofProcessor::PopulateTargetingData(
        MPCSixDofProcessor *this,
        struct MPCHolographicInputContext *a2,
        __m128 *a3)
{
  struct MPCHolographicInputContext *v3; // r10
  float v5; // ecx
  int v6; // eax
  float v7; // r11d
  __int64 v8; // xmm0_8
  float v9; // xmm9_4
  float v10; // xmm7_4
  float v11; // xmm10_4
  __m128 v12; // xmm0
  __m128 v13; // xmm15
  __m128 v14; // xmm8
  float v15; // xmm13_4
  float v16; // xmm12_4
  float v17; // xmm3_4
  float v18; // xmm6_4
  float v19; // xmm4_4
  float v20; // xmm9_4
  float v21; // xmm10_4
  float v22; // xmm14_4
  float v23; // xmm11_4
  float v24; // xmm5_4
  float v25; // xmm7_4
  __m128 v26; // xmm3
  __m128 v27; // xmm2
  __m128 v28; // xmm1
  __m128 v29; // xmm0
  __m128 v30; // xmm0
  __int64 v31; // rax
  __int64 v32; // r10
  int v33; // r11d
  __int32 v34; // xmm1_4
  float *v35; // r9
  int v36; // xmm1_4
  float v37; // xmm1_4
  unsigned __int64 v38; // [rsp+28h] [rbp-89h] BYREF
  float v39; // [rsp+30h] [rbp-81h]
  __int64 v40; // [rsp+38h] [rbp-79h] BYREF
  int v41; // [rsp+40h] [rbp-71h]
  __m128 v42; // [rsp+48h] [rbp-69h] BYREF
  __m128 v43; // [rsp+58h] [rbp-59h] BYREF
  float v44; // [rsp+118h] [rbp+67h]
  float v45; // [rsp+120h] [rbp+6Fh]
  float v46; // [rsp+128h] [rbp+77h]

  v3 = a2;
  a3[3].m128_i8[0] = 1;
  a3[5].m128_i32[0] = a3[141].m128_i32[3];
  a3[5].m128_i32[1] = *((_DWORD *)this + 1036);
  if ( a3[155].m128_i8[12] && a3[155].m128_i8[13] )
  {
    v40 = 0LL;
    *((_BYTE *)this + 10777) = 1;
    v11 = a3[155].m128_f32[2];
    v42.m128_u64[0] = a3[155].m128_u64[0];
    v30 = a3[154];
    v41 = -1082130432;
    v10 = v42.m128_f32[0];
    v9 = v42.m128_f32[1];
    v43 = v30;
    v45 = v42.m128_f32[0];
    v38 = v42.m128_u64[0];
    v46 = v42.m128_f32[1];
    v44 = v11;
    v39 = v11;
    v31 = Windows::Foundation::Numerics::transform(&v42, &v40, &v43, a3);
    v33 = *(_DWORD *)(v31 + 8);
    v40 = *(_QWORD *)v31;
    v41 = v33;
    Windows::Foundation::Numerics::transform(v42.m128_f32, (float *)&v38, (float *)(v32 + 16));
    Windows::Foundation::Numerics::transform_normal(&v38, &v40);
    v34 = v42.m128_i32[1];
    v35[30] = v42.m128_f32[0];
    v30.m128_i32[0] = v42.m128_i32[2];
    *((_DWORD *)v35 + 31) = v34;
    v36 = v38;
    v35[32] = v30.m128_f32[0];
    v30.m128_i32[0] = HIDWORD(v38);
    *((_DWORD *)v35 + 33) = v36;
    v37 = v39;
    v35[34] = v30.m128_f32[0];
    v35[35] = v37;
  }
  else
  {
    *((_BYTE *)this + 10777) = 0;
    a3[3].m128_i8[0] = 1;
    v5 = *((float *)a2 + 38);
    v6 = *((_DWORD *)a2 + 42);
    v7 = *((float *)a2 + 41);
    v38 = *((_QWORD *)a2 + 18);
    v8 = *(_QWORD *)((char *)a2 + 156);
    v9 = *((float *)&v38 + 1);
    v10 = *(float *)&v38;
    a3[7].m128_i32[2] = v6;
    a3[7].m128_i32[3] = *((_DWORD *)a2 + 43);
    a3[8].m128_i32[0] = *((_DWORD *)a2 + 44);
    a3[8].m128_i32[1] = *((_DWORD *)a2 + 45);
    a3[8].m128_i32[2] = *((_DWORD *)a2 + 46);
    v11 = v5;
    a3[8].m128_i32[3] = *((_DWORD *)a2 + 47);
    v44 = v5;
    v46 = v9;
    v45 = v10;
    v40 = v8;
  }
  v12 = *(__m128 *)((char *)v3 + 3160);
  v13 = *(__m128 *)((char *)v3 + 3144);
  v14 = *(__m128 *)((char *)v3 + 3192);
  v42 = *(__m128 *)((char *)v3 + 3176);
  v43 = v12;
  v15 = _mm_shuffle_ps(v12, v12, 85).m128_f32[0];
  v16 = _mm_shuffle_ps(v42, v42, 85).m128_f32[0];
  v17 = v9;
  v18 = v15 * v9;
  v19 = v16 * v11;
  v20 = _mm_shuffle_ps(v42, v42, 170).m128_f32[0];
  v21 = _mm_shuffle_ps(v12, v12, 170).m128_f32[0];
  v22 = _mm_shuffle_ps(v13, v13, 85).m128_f32[0];
  v23 = _mm_shuffle_ps(v13, v13, 170).m128_f32[0];
  *((float *)this + 1056) = (float)((float)((float)(v13.m128_f32[0] * v45) + (float)(v12.m128_f32[0] * v46))
                                  + (float)(v42.m128_f32[0] * v44))
                          + v14.m128_f32[0];
  *((float *)this + 1057) = (float)((float)(v18 + (float)(v22 * v10)) + v19) + _mm_shuffle_ps(v14, v14, 85).m128_f32[0];
  *((float *)this + 1058) = (float)((float)((float)(v10 * v23) + (float)(v17 * v21)) + (float)(v44 * v20))
                          + _mm_shuffle_ps(v14, v14, 170).m128_f32[0];
  v24 = (float)(*((float *)&v40 + 1) * v21) + (float)(*(float *)&v40 * v23);
  v25 = (float)((float)(*((float *)&v40 + 1) * v15) + (float)(*(float *)&v40 * v22)) + (float)(v7 * v16);
  *((float *)this + 1059) = (float)((float)(*(float *)&v40 * v13.m128_f32[0])
                                  + (float)(*((float *)&v40 + 1) * v43.m128_f32[0]))
                          + (float)(v7 * v42.m128_f32[0]);
  *((float *)this + 1060) = v25;
  *((float *)this + 1061) = v24 + (float)(v7 * v20);
  v26 = _mm_movelh_ps((__m128)*(unsigned __int64 *)((char *)this + 4236), (__m128)*((unsigned int *)this + 1061));
  v27 = _mm_mul_ps(v26, v26);
  v28 = _mm_shuffle_ps(v27, v27, 102);
  v27.m128_f32[0] = (float)(v27.m128_f32[0] + v28.m128_f32[0]) + _mm_shuffle_ps(v28, v28, 85).m128_f32[0];
  v29 = _mm_div_ps(v26, _mm_sqrt_ps(_mm_shuffle_ps(v27, v27, 0)));
  *(_QWORD *)((char *)this + 4236) = v29.m128_u64[0];
  *((_DWORD *)this + 1061) = _mm_shuffle_ps(v29, v29, 170).m128_u32[0];
}
