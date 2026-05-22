/*
 * XREFs of ?PerformLowPassFilterStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x18006E224
 * Callers:
 *     ?StabilizeInput@RayStabilizer@@QEAAXPEAULegacyInputInfo@@@Z @ 0x18006E008 (-StabilizeInput@RayStabilizer@@QEAAXPEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall RayStabilizer::PerformLowPassFilterStabilization(
        RayStabilizer *this,
        struct RayStabilizationResult *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // r11
  __int64 v9; // r9
  __int64 v10; // xmm0_8
  __m128 v11; // xmm3
  unsigned __int64 v12; // rdx
  int v13; // ecx
  float v14; // xmm2_4
  __int64 v15; // r10
  float v16; // xmm9_4
  __int64 *v17; // rdi
  unsigned int v18; // ebx
  float v19; // xmm6_4
  __int64 v20; // r14
  float v21; // xmm7_4
  __m128 v22; // xmm3
  float v23; // xmm9_4
  float v24; // xmm6_4
  float v25; // xmm7_4
  __m128 v26; // xmm10
  float v27; // xmm8_4
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // xmm0_8
  __m128 v31; // xmm5
  int v32; // ecx
  float v33; // xmm4_4
  float v34; // xmm0_4
  __m128 v35; // xmm5
  __m128 v36; // xmm0
  __int64 v37; // rax
  float v38; // xmm7_4
  __m128 v39; // xmm0
  __m128 v40; // xmm3
  __m128 v41; // xmm3
  __m128 v42; // xmm2
  __m128 v43; // xmm1
  __m128 v44; // xmm3
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rax
  __int128 v47; // [rsp+38h] [rbp-19h]
  float v48[24]; // [rsp+48h] [rbp-9h]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v4 = *(unsigned int *)a2;
  v7 = v4 - 1;
  if ( (unsigned __int64)(v4 - 1) >= 4 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x29,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\raystabilizationresult.cpp",
      a4);
  v8 = *((_QWORD *)this + 4);
  v9 = 3 * v7;
  v10 = *(_QWORD *)((char *)a2 + 24 * v7 + 20);
  v11 = *(__m128 *)((char *)a2 + 24 * v7 + 4);
  v12 = v8;
  if ( v8 > 3 )
    v12 = 3LL;
  v13 = v12 + 1;
  if ( (__int64)(v12 + 1) < 0 )
  {
    v45 = v13 & 1 | ((v12 + 1) >> 1);
    v14 = (float)(int)v45 + (float)(int)v45;
  }
  else
  {
    v14 = (float)v13;
  }
  v15 = *((_QWORD *)this + 3);
  v26 = (__m128)(unsigned int)v10;
  v16 = v11.m128_f32[0];
  v17 = *(__int64 **)this;
  v18 = 0;
  v19 = _mm_shuffle_ps(v11, v11, 85).m128_f32[0];
  v20 = v8 + v15;
  v21 = _mm_shuffle_ps(v11, v11, 170).m128_f32[0];
  v22 = _mm_shuffle_ps(v11, v11, 255);
  v22.m128_f32[0] = v22.m128_f32[0] * v14;
  v23 = v16 * v14;
  v24 = v19 * v14;
  v25 = v21 * v14;
  v26.m128_f32[0] = *(float *)&v10 * v14;
  v27 = *((float *)&v10 + 1) * v14;
  while ( v15 != v20 && v18 < v12 )
  {
    if ( v17 )
      v28 = *v17;
    else
      v28 = 0LL;
    v29 = *(_QWORD *)(*(_QWORD *)(v28 + 8) + 8 * (v15 & (*(_QWORD *)(v28 + 16) - 1LL)));
    v30 = *(_QWORD *)(v29 + 8 * v9 + 20);
    v31 = *(__m128 *)(v29 + 8 * v9 + 4);
    v32 = v12 - v18;
    *(_QWORD *)v48 = v30;
    if ( (__int64)(v12 - v18) < 0 )
    {
      v46 = v32 & 1 | ((v12 - v18) >> 1);
      v33 = (float)(int)v46 + (float)(int)v46;
    }
    else
    {
      v33 = (float)v32;
    }
    v14 = v14 + v33;
    ++v15;
    ++v18;
    v23 = (float)(v31.m128_f32[0] * v33) + v23;
    v34 = _mm_shuffle_ps(v31, v31, 170).m128_f32[0];
    v24 = (float)(_mm_shuffle_ps(v31, v31, 85).m128_f32[0] * v33) + v24;
    v35 = _mm_shuffle_ps(v31, v31, 255);
    v35.m128_f32[0] = (float)(v35.m128_f32[0] * v33) + v22.m128_f32[0];
    v25 = (float)(v34 * v33) + v25;
    v36 = (__m128)LODWORD(v48[0]);
    v22 = v35;
    v36.m128_f32[0] = (float)(v48[0] * v33) + v26.m128_f32[0];
    v27 = (float)(v48[1] * v33) + v27;
    v26 = v36;
  }
  v37 = 3 * v4;
  v22.m128_f32[0] = v22.m128_f32[0] * (float)(1.0 / v14);
  v38 = v25 * (float)(1.0 / v14);
  v26.m128_f32[0] = v26.m128_f32[0] * (float)(1.0 / v14);
  v39 = v22;
  v40 = 0LL;
  *(float *)&v47 = v23 * (float)(1.0 / v14);
  v40.m128_u64[0] = _mm_unpacklo_ps(v39, v26).m128_u64[0];
  v41 = _mm_movelh_ps(v40, (__m128)COERCE_UNSIGNED_INT(v27 * (float)(1.0 / v14)));
  *((float *)&v47 + 1) = v24 * (float)(1.0 / v14);
  v42 = _mm_mul_ps(v41, v41);
  *((float *)&v47 + 2) = v38;
  v43 = _mm_shuffle_ps(v42, v42, 102);
  v42.m128_f32[0] = (float)(v42.m128_f32[0] + v43.m128_f32[0]) + _mm_shuffle_ps(v43, v43, 85).m128_f32[0];
  v44 = _mm_div_ps(v41, _mm_sqrt_ps(_mm_shuffle_ps(v42, v42, 0)));
  HIDWORD(v47) = v44.m128_i32[0];
  *(_OWORD *)((char *)a2 + 8 * v37 + 4) = v47;
  *(_QWORD *)((char *)a2 + 8 * v37 + 20) = _mm_unpacklo_ps((__m128)v44.m128_u32[1], _mm_shuffle_ps(v44, v44, 170)).m128_u64[0];
  ++*(_DWORD *)a2;
}
