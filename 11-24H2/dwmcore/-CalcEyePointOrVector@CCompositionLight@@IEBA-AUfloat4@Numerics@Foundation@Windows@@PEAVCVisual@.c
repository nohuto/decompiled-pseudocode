/*
 * XREFs of ?CalcEyePointOrVector@CCompositionLight@@IEBA?AUfloat4@Numerics@Foundation@Windows@@PEAVCVisual@@@Z @ 0x180165AE4
 * Callers:
 *     ?GetLightInfo@CCompositionSpotLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z @ 0x180165840 (-GetLightInfo@CCompositionSpotLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z.c)
 *     ?GetLightInfo@CCompositionDistantLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z @ 0x1802950D0 (-GetLightInfo@CCompositionDistantLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@.c)
 *     ?GetLightInfo@CCompositionPointLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z @ 0x1802980A0 (-GetLightInfo@CCompositionPointLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@.c)
 * Callees:
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x1800ABD60 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z @ 0x1800FB0F0 (-invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z.c)
 *     ?CalcFrustumOutline@@YAXVCMILMatrix@@PEAULine3D@@111@Z @ 0x180165F78 (-CalcFrustumOutline@@YAXVCMILMatrix@@PEAULine3D@@111@Z.c)
 *     ?NormalizeVec3@CCompositionLight@@IEBAXAEBUfloat3@Numerics@Foundation@Windows@@PEAU2345@@Z @ 0x180166364 (-NormalizeVec3@CCompositionLight@@IEBAXAEBUfloat3@Numerics@Foundation@Windows@@PEAU2345@@Z.c)
 *     ?IntersectTwoLines@@YA_NULine3D@@0MPEAUfloat3@Numerics@Foundation@Windows@@@Z @ 0x180166408 (-IntersectTwoLines@@YA_NULine3D@@0MPEAUfloat3@Numerics@Foundation@Windows@@@Z.c)
 *     sqrtf_0 @ 0x1802DF698 (sqrtf_0.c)
 */

__int64 __fastcall CCompositionLight::CalcEyePointOrVector(__int64 a1, __int64 a2, __int64 a3)
{
  CTransform3D *v3; // rcx
  const struct CMILMatrix *Matrix; // rax
  __m128 v6; // xmm1
  __m128 v7; // xmm0
  __int128 v8; // xmm1
  struct Windows::Foundation::Numerics::float4x4 *v9; // r8
  bool v10; // al
  __m128 v11; // xmm15
  float v12; // xmm7_4
  float v13; // xmm8_4
  float v14; // xmm13_4
  float v15; // xmm14_4
  float v16; // xmm12_4
  float v17; // xmm10_4
  float v18; // xmm11_4
  float v19; // xmm6_4
  float v20; // xmm9_4
  float v21; // xmm8_4
  float v22; // xmm6_4
  float v23; // xmm0_4
  float v24; // xmm8_4
  __int64 v25; // r8
  char v26; // bl
  __int64 v27; // r8
  char v28; // al
  CCompositionLight *v29; // rcx
  float v30; // xmm6_4
  float v31; // xmm9_4
  float v32; // xmm10_4
  unsigned int v34; // xmm1_4
  __int128 v36; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v37; // [rsp+48h] [rbp-C0h]
  __int128 v38; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v39; // [rsp+60h] [rbp-A8h]
  __int128 v40; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v41; // [rsp+78h] [rbp-90h]
  __int128 v42; // [rsp+88h] [rbp-80h] BYREF
  __int64 v43; // [rsp+98h] [rbp-70h]
  __m128 v44; // [rsp+A8h] [rbp-60h] BYREF
  __m128 v45; // [rsp+B8h] [rbp-50h]
  __m128 v46; // [rsp+C8h] [rbp-40h]
  __int128 v47; // [rsp+D8h] [rbp-30h]
  int v48; // [rsp+E8h] [rbp-20h]
  __int128 v49; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v50; // [rsp+108h] [rbp+0h]
  __int128 v51; // [rsp+118h] [rbp+10h] BYREF
  __int64 v52; // [rsp+128h] [rbp+20h]
  _OWORD v53[4]; // [rsp+138h] [rbp+30h] BYREF
  int v54; // [rsp+178h] [rbp+70h]
  float v55; // [rsp+238h] [rbp+130h]

  v3 = *(CTransform3D **)(a3 + 240);
  if ( !v3 )
    goto LABEL_9;
  Matrix = CTransform3D::GetMatrix(v3, (const struct D2D_SIZE_F *)(a3 + 144));
  v6 = *((__m128 *)Matrix + 1);
  v44 = *(__m128 *)Matrix;
  v7 = *((__m128 *)Matrix + 2);
  v45 = v6;
  v8 = *((_OWORD *)Matrix + 3);
  LODWORD(Matrix) = *((_DWORD *)Matrix + 16);
  v46 = v7;
  v47 = v8;
  v48 = (int)Matrix;
  v10 = Windows::Foundation::Numerics::invert((Windows::Foundation::Numerics *)&v44, &v44, v9);
  LOWORD(v48) = v48 & 0xC003;
  if ( v10 )
  {
    v11 = v44;
    v53[1] = v45;
    v54 = v48;
    v53[3] = v47;
    v53[0] = v44;
    v53[2] = v46;
    CalcFrustumOutline(v53, &v40, &v38, &v36, &v42);
    v12 = *(float *)&v40 - *(float *)&v42;
    v13 = *((float *)&v40 + 1) - *((float *)&v42 + 1);
    v14 = *(float *)&v40 - *(float *)&v38;
    v15 = *((float *)&v40 + 1) - *((float *)&v38 + 1);
    v16 = *((float *)&v40 + 2) - *((float *)&v38 + 2);
    v17 = *(float *)&v42 - *(float *)&v36;
    v18 = *((float *)&v42 + 1) - *((float *)&v36 + 1);
    v19 = *((float *)&v40 + 2) - *((float *)&v42 + 2);
    v20 = *((float *)&v42 + 2) - *((float *)&v36 + 2);
    v55 = sqrtf_0(
            (float)((float)((float)(*((float *)&v38 + 1) - *((float *)&v36 + 1))
                          * (float)(*((float *)&v38 + 1) - *((float *)&v36 + 1)))
                  + (float)((float)(*(float *)&v38 - *(float *)&v36) * (float)(*(float *)&v38 - *(float *)&v36)))
          + (float)((float)(*((float *)&v38 + 2) - *((float *)&v36 + 2))
                  * (float)(*((float *)&v38 + 2) - *((float *)&v36 + 2))));
    v21 = (float)(v55 + sqrtf_0((float)((float)(v13 * v13) + (float)(v12 * v12)) + (float)(v19 * v19))) * 0.5;
    v22 = sqrtf_0((float)((float)(v18 * v18) + (float)(v17 * v17)) + (float)(v20 * v20));
    v23 = sqrtf_0((float)((float)(v15 * v15) + (float)(v14 * v14)) + (float)(v16 * v16));
    v49 = v38;
    v24 = (float)(v21 + (float)((float)(v22 + v23) * 0.5)) / 20.0;
    v50 = v39;
    v52 = v41;
    v51 = v40;
    v26 = IntersectTwoLines(&v51, &v49, v25, &v38);
    v40 = v42;
    v41 = v43;
    v42 = v36;
    v43 = v37;
    v28 = IntersectTwoLines(&v42, &v40, v27, &v36);
    v30 = (float)(*(float *)&v38 + *(float *)&v36) * 0.5;
    v31 = (float)(*((float *)&v38 + 1) + *((float *)&v36 + 1)) * 0.5;
    v32 = (float)(*((float *)&v38 + 2) + *((float *)&v36 + 2)) * 0.5;
    if ( v26
      && v28
      && v24 > sqrtf_0(
                 (float)((float)((float)(*((float *)&v38 + 1) - *((float *)&v36 + 1))
                               * (float)(*((float *)&v38 + 1) - *((float *)&v36 + 1)))
                       + (float)((float)(*(float *)&v38 - *(float *)&v36) * (float)(*(float *)&v38 - *(float *)&v36)))
               + (float)((float)(*((float *)&v38 + 2) - *((float *)&v36 + 2))
                       * (float)(*((float *)&v38 + 2) - *((float *)&v36 + 2)))) )
    {
      *(float *)a2 = v30;
      *(float *)(a2 + 4) = v31;
      *(float *)(a2 + 8) = v32;
      *(_DWORD *)(a2 + 12) = 1065353216;
      return a2;
    }
    *(float *)&v38 = (float)((float)(v11.m128_f32[0] * 0.0) + (float)(v45.m128_f32[0] * 0.0)) + v46.m128_f32[0];
    *((float *)&v38 + 1) = (float)((float)(_mm_shuffle_ps(v11, v11, 85).m128_f32[0] * 0.0)
                                 + (float)(_mm_shuffle_ps(v45, v45, 85).m128_f32[0] * 0.0))
                         + _mm_shuffle_ps(v46, v46, 85).m128_f32[0];
    *((float *)&v38 + 2) = (float)((float)(_mm_shuffle_ps(v11, v11, 170).m128_f32[0] * 0.0)
                                 + (float)(_mm_shuffle_ps(v45, v45, 170).m128_f32[0] * 0.0))
                         + _mm_shuffle_ps(v46, v46, 170).m128_f32[0];
    CCompositionLight::NormalizeVec3(
      v29,
      (const struct Windows::Foundation::Numerics::float3 *)&v38,
      (struct Windows::Foundation::Numerics::float3 *)&v36);
    v34 = DWORD1(v36);
    *(_DWORD *)a2 = v36;
    *(_QWORD *)(a2 + 4) = __PAIR64__(DWORD2(v36), v34);
  }
  else
  {
LABEL_9:
    *(_DWORD *)a2 = 0;
    *(_DWORD *)(a2 + 4) = 0;
    *(_DWORD *)(a2 + 8) = 1065353216;
  }
  *(_DWORD *)(a2 + 12) = 0;
  return a2;
}
