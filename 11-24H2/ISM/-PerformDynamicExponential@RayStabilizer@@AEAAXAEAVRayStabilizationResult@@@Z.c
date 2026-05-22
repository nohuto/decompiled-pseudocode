/*
 * XREFs of ?PerformDynamicExponential@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x1800C6D48
 * Callers:
 *     ?StabilizeInput@RayStabilizer@@QEAAXPEAULegacyInputInfo@@@Z @ 0x18006DD98 (-StabilizeInput@RayStabilizer@@QEAAXPEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     ?GetStabilizedRay@RayStabilizationResult@@QEBA?AUTargetingRay@@XZ @ 0x180077690 (-GetStabilizedRay@RayStabilizationResult@@QEBA-AUTargetingRay@@XZ.c)
 *     ?GetAtStep@RayStabilizationResult@@QEBA?AUTargetingRay@@_K@Z @ 0x1800776D0 (-GetAtStep@RayStabilizationResult@@QEBA-AUTargetingRay@@_K@Z.c)
 *     acosf @ 0x18009D490 (acosf.c)
 *     powf @ 0x18009D508 (powf.c)
 *     _o_sqrtf_0 @ 0x18009D52C (_o_sqrtf_0.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ?Slerp@MPCMath@@YA?AUfloat3@Numerics@Foundation@Windows@@U2345@0M@Z @ 0x1800C7494 (-Slerp@MPCMath@@YA-AUfloat3@Numerics@Foundation@Windows@@U2345@0M@Z.c)
 *     ?TransformRay@RayStabilizer@@CA_NUTargetingRay@@AEAUTargetingData@1@@Z @ 0x1800C75EC (-TransformRay@RayStabilizer@@CA_NUTargetingRay@@AEAUTargetingData@1@@Z.c)
 */

void __fastcall RayStabilizer::PerformDynamicExponential(
        RayStabilizer *this,
        struct RayStabilizationResult *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v6; // r8
  const char *v7; // r9
  __int64 v8; // rax
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  bool v16; // zf
  __int128 v17; // xmm6
  unsigned __int64 v18; // xmm7_8
  float v19; // xmm6_4
  float v20; // xmm7_4
  float v21; // xmm9_4
  float v22; // xmm10_4
  float v23; // xmm11_4
  float v24; // xmm0_4
  float v25; // xmm0_4
  float v26; // xmm1_4
  float v27; // xmm2_4
  float v28; // xmm11_4
  float v29; // xmm9_4
  float v30; // xmm10_4
  float v31; // xmm0_4
  float v32; // xmm11_4
  float v33; // xmm2_4
  float v34; // xmm1_4
  float v35; // xmm0_4
  int v36; // eax
  float v37; // xmm1_4
  unsigned __int64 *v38; // rax
  __m128 v39; // xmm3
  __m128 v40; // xmm2
  __m128 v41; // xmm1
  __m128 v42; // xmm3
  __int32 v43; // xmm0_4
  __m128 v44; // xmm2
  __m128 v45; // xmm3
  __int128 v46; // xmm1
  __int64 v47; // rcx
  _OWORD v48[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v49; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int64 v50; // [rsp+58h] [rbp-B0h]
  __int128 v51; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v52; // [rsp+78h] [rbp-90h]
  __int128 v53; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v54; // [rsp+98h] [rbp-70h]
  __int64 v55; // [rsp+A8h] [rbp-60h] BYREF
  int v56; // [rsp+B0h] [rbp-58h]
  __int128 v57; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v58; // [rsp+C8h] [rbp-40h]
  _OWORD v59[6]; // [rsp+D8h] [rbp-30h] BYREF
  int v60; // [rsp+138h] [rbp+30h]

  RayStabilizationResult::GetAtStep((__int64)a2, (__int64)&v49, *(unsigned int *)a2 - 1LL, a4);
  if ( !*((_BYTE *)this + 80) )
  {
    if ( *((_QWORD *)this + 4) )
    {
      v8 = *(_QWORD *)(*((_QWORD *)this + 1) + 8 * (*((_QWORD *)this + 3) & (*((_QWORD *)this + 2) - 1LL)));
      v9 = *(_OWORD *)(v8 + 16);
      v59[0] = *(_OWORD *)v8;
      v10 = *(_OWORD *)(v8 + 32);
      v59[1] = v9;
      v11 = *(_OWORD *)(v8 + 48);
      v59[2] = v10;
      v12 = *(_OWORD *)(v8 + 64);
      v59[3] = v11;
      v13 = *(_OWORD *)(v8 + 80);
      LODWORD(v8) = *(_DWORD *)(v8 + 96);
      v59[4] = v12;
      v59[5] = v13;
      v60 = v8;
      RayStabilizationResult::GetStabilizedRay(v59, (__int64)&v51, v6, v7);
      v54 = v52;
      v57 = 0LL;
      v58 = 0LL;
      v53 = v51;
      if ( (unsigned __int8)RayStabilizer::TransformRay(&v53, &v57) )
      {
        v14 = v57;
        *((_BYTE *)this + 80) = 1;
        v15 = v58;
        *((_OWORD *)this + 3) = v14;
        *((_OWORD *)this + 4) = v15;
      }
    }
  }
  v16 = *((_BYTE *)this + 80) == 0;
  v17 = v49;
  v51 = v49;
  v18 = v50;
  memset(v48, 0, sizeof(v48));
  if ( !v16 )
  {
    v53 = v49;
    v54 = v50;
    if ( (unsigned __int8)RayStabilizer::TransformRay(&v53, v48) )
    {
      v19 = *(float *)v48;
      v20 = *((float *)v48 + 1);
      v21 = *((float *)this + 12);
      v22 = *((float *)this + 13);
      v23 = *((float *)this + 14);
      v24 = o_sqrtf_0(
              (float)((float)((float)(*((float *)v48 + 1) - v22) * (float)(*((float *)v48 + 1) - v22))
                    + (float)((float)(*(float *)v48 - v21) * (float)(*(float *)v48 - v21)))
            + (float)((float)(*((float *)v48 + 2) - v23) * (float)(*((float *)v48 + 2) - v23)));
      v25 = powf(0.5, v24 / 0.02);
      v26 = *((float *)&v48[1] + 1) * *((float *)this + 17);
      v27 = *(float *)&v48[1] * *((float *)this + 16);
      v28 = (float)(v23 - *((float *)v48 + 2)) * v25;
      v29 = (float)((float)(v21 - v19) * v25) + v19;
      v30 = (float)((float)(v22 - v20) * v25) + v20;
      v31 = *((float *)v48 + 3) * *((float *)this + 15);
      v32 = v28 + *((float *)v48 + 2);
      *(_QWORD *)&v48[0] = __PAIR64__(LODWORD(v30), LODWORD(v29));
      *((float *)v48 + 2) = v32;
      v33 = (float)(v27 + v31) + v26;
      v34 = FLOAT_N1_0;
      if ( v33 >= -1.0 )
        v34 = v33;
      v35 = FLOAT_1_0;
      if ( v33 <= 1.0 )
        v35 = v34;
      v36 = *((_DWORD *)this + 17);
      v55 = *(_QWORD *)((char *)this + 60);
      v56 = v36;
      *(_QWORD *)&v49 = *(_QWORD *)((char *)v48 + 12);
      DWORD2(v49) = DWORD1(v48[1]);
      v37 = (float)(COERCE_FLOAT(COERCE_UNSIGNED_INT(acosf(v35)) & _xmm) * 0.1) / 0.02;
      powf(0.5, v37);
      v38 = (unsigned __int64 *)MPCMath::Slerp(&v53, &v49, &v55);
      *(_QWORD *)&v51 = __PAIR64__(LODWORD(v30), LODWORD(v29));
      *((float *)&v51 + 2) = v32;
      v39 = _mm_movelh_ps((__m128)*v38, (__m128)*((unsigned int *)v38 + 2));
      v40 = _mm_mul_ps(v39, v39);
      v41 = _mm_shuffle_ps(v40, v40, 102);
      v40.m128_f32[0] = (float)(v40.m128_f32[0] + v41.m128_f32[0]) + _mm_shuffle_ps(v41, v41, 85).m128_f32[0];
      v42 = _mm_div_ps(v39, _mm_sqrt_ps(_mm_shuffle_ps(v40, v40, 0)));
      *(_QWORD *)&v49 = v42.m128_u64[0];
      v43 = v42.m128_i32[0];
      v44 = (__m128)v42.m128_u32[1];
      v45 = _mm_shuffle_ps(v42, v42, 170);
      HIDWORD(v51) = v43;
      v17 = v51;
      *(_QWORD *)((char *)v48 + 12) = __PAIR64__(v44.m128_u32[0], v43);
      DWORD1(v48[1]) = v45.m128_i32[0];
      v46 = v48[1];
      *((_OWORD *)this + 3) = v48[0];
      *((_OWORD *)this + 4) = v46;
      v18 = _mm_unpacklo_ps(v44, v45).m128_u64[0];
    }
  }
  v47 = 3LL * *(unsigned int *)a2;
  *(_OWORD *)((char *)a2 + 8 * v47 + 4) = v17;
  *(_QWORD *)((char *)a2 + 8 * v47 + 20) = v18;
  ++*(_DWORD *)a2;
}
