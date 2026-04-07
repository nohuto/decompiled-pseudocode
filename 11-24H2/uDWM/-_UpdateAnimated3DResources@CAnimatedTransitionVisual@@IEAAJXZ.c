/*
 * XREFs of ?_UpdateAnimated3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A5BFC
 * Callers:
 *     ?Validate3DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180098B44 (-Validate3DVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?D2DMatrixRotationYawPitchRoll@@YAPEAUD2DMatrix@@PEAU1@MMM@Z @ 0x180018B94 (-D2DMatrixRotationYawPitchRoll@@YAPEAUD2DMatrix@@PEAU1@MMM@Z.c)
 *     ?D2DMatrixTranslation@@YAPEAUD2DMatrix@@PEAU1@MMM@Z @ 0x1800193CC (-D2DMatrixTranslation@@YAPEAUD2DMatrix@@PEAU1@MMM@Z.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x180019410 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?D2DMatrixScaling@@YAPEAUD2DMatrix@@PEAU1@MMM@Z @ 0x180019848 (-D2DMatrixScaling@@YAPEAUD2DMatrix@@PEAU1@MMM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Update@CEffectGroupProxy@@QEAAJNIPEBVCTransform3dGroupProxy@@@Z @ 0x18004916C (-Update@CEffectGroupProxy@@QEAAJNIPEBVCTransform3dGroupProxy@@@Z.c)
 *     ?Update@CMatrixTransform3dProxy@@QEAAJAEBU_D3DMATRIX@@@Z @ 0x1800C9E50 (-Update@CMatrixTransform3dProxy@@QEAAJAEBU_D3DMATRIX@@@Z.c)
 *     ?D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x1800F5250 (-D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::_UpdateAnimated3DResources(CAnimatedTransitionVisual *this)
{
  unsigned int v1; // r8d
  struct D2DMatrix *v3; // rdi
  float v4; // xmm9_4
  float v5; // xmm1_4
  unsigned int v6; // eax
  __m128i v7; // xmm0
  int v8; // edx
  float v9; // xmm10_4
  float v10; // xmm2_4
  int v11; // ecx
  __m128i v12; // xmm8
  int v13; // eax
  float v14; // xmm8_4
  float v15; // xmm9_4
  float v16; // xmm8_4
  float v17; // xmm9_4
  float v18; // xmm10_4
  float v19; // xmm5_4
  float v20; // xmm5_4
  int v21; // ecx
  float v22; // xmm6_4
  float v23; // xmm7_4
  int v24; // ecx
  int v25; // r9d
  int v26; // r8d
  int v27; // edx
  int v28; // ecx
  int v29; // ecx
  int v30; // eax
  float v31; // xmm6_4
  int v32; // eax
  int v33; // r8d
  float v34; // xmm3_4
  const struct D2DMatrix *v35; // rdx
  float v36; // xmm0_4
  const struct _D3DMATRIX *v37; // rdx
  int v38; // eax
  __int64 v39; // r8
  unsigned int v40; // edi
  float v41; // xmm0_4
  int v42; // eax
  __int64 v44; // [rsp+38h] [rbp-D0h] BYREF
  float v45; // [rsp+40h] [rbp-C8h]
  _DWORD v46[4]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v47[64]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v48[144]; // [rsp+98h] [rbp-70h] BYREF

  v1 = *((_DWORD *)this + 202);
  v3 = (CAnimatedTransitionVisual *)((char *)this + 468);
  v4 = *((float *)this + 182);
  LODWORD(v5) = LODWORD(v4) ^ _xmm;
  v6 = 0;
  if ( (int)(*((_DWORD *)this + 204) - v1) >= 0 )
    v6 = *((_DWORD *)this + 204) - v1;
  v7 = _mm_cvtsi32_si128(v1);
  v8 = *((_DWORD *)this + 203);
  v9 = *((float *)this + 183);
  LODWORD(v10) = LODWORD(v9) ^ _xmm;
  v11 = *((_DWORD *)this + 205) - v8;
  v12 = _mm_cvtsi32_si128(v6);
  v13 = 0;
  if ( v11 >= 0 )
    v13 = v11;
  v14 = _mm_cvtepi32_ps(v12).m128_f32[0];
  v45 = 0.0;
  v15 = v4 * v14;
  v16 = v14 * *((float *)this + 179);
  v17 = (float)(v15 + _mm_cvtepi32_ps(v7).m128_f32[0]) + *((float *)this + 176);
  v18 = (float)((float)(v9 * (float)v13) + (float)v8) + *((float *)this + 177);
  D2DMatrixTranslation(v3, v5, v10, 0.0);
  D2DMatrixScaling((struct D2DMatrix *)v47, v16, v19, *((float *)this + 181));
  D2DMatrixMultiply(v3, v3, (const struct D2DMatrix *)v47);
  v21 = *((_DWORD *)this + 243);
  v22 = 0.0;
  v23 = 0.0;
  if ( v21 )
  {
    v24 = v21 - 1;
    if ( v24 )
    {
      if ( v24 == 1 )
      {
        v22 = (float)((float)(1.0 - v20) * *((float *)this + 183)) + (float)(v20 * *((float *)this + 189));
        v23 = (float)(v16 * *((float *)this + 188)) + (float)((float)(1.0 - v16) * *((float *)this + 182));
      }
      goto LABEL_16;
    }
    v25 = *((_DWORD *)this + 206);
    v26 = *((_DWORD *)this + 208);
    v27 = *((_DWORD *)this + 207);
    v28 = *((_DWORD *)this + 209);
  }
  else
  {
    v25 = *((_DWORD *)this + 202);
    v26 = *((_DWORD *)this + 204);
    v27 = *((_DWORD *)this + 203);
    v28 = *((_DWORD *)this + 205);
  }
  v29 = v28 - v27;
  v30 = 0;
  if ( v29 >= 0 )
    v30 = v29;
  v31 = (float)v30;
  v32 = 0;
  v33 = v26 - v25;
  if ( v33 >= 0 )
    v32 = v33;
  v22 = (float)((float)(v31 * *((float *)this + 189)) + (float)v27)
      - (float)(v18 - (float)((float)((float)(0.5 - *((float *)this + 183)) * v20) + *((float *)this + 183)));
  v23 = (float)((float)((float)v32 * *((float *)this + 188)) + (float)v25)
      - (float)(v17 - (float)((float)((float)(0.5 - *((float *)this + 182)) * v16) + *((float *)this + 182)));
LABEL_16:
  D2DMatrixTranslation((struct D2DMatrix *)v47, *((float *)this + 182) - v23, *((float *)this + 183) - v22, 0.0);
  D2DMatrixMultiply(v3, v3, (const struct D2DMatrix *)v47);
  v34 = *((float *)this + 223);
  if ( v34 != 0.0 )
  {
    D2DMatrixRotationYawPitchRoll((struct D2DMatrix *)v47, 0.0, 0.0, v34 * 0.017453292);
    D2DMatrixMultiply(v3, v3, (const struct D2DMatrix *)v47);
  }
  D2DMatrixRotationYawPitchRoll(
    (struct D2DMatrix *)v48,
    *((float *)this + 186) * 0.017453292,
    *((float *)this + 185) * 0.017453292,
    *((float *)this + 187) * 0.017453292);
  D2DMatrixMultiply(v3, v3, (const struct D2DMatrix *)v48);
  D2DMatrixTranslation((struct D2DMatrix *)v47, v23 + v17, v22 + v18, 0.0);
  D2DMatrixMultiply(v3, v35, (const struct D2DMatrix *)v47);
  v46[0] = 1056964608;
  v46[2] = 0;
  v44 = 0LL;
  v45 = 0.0;
  v46[1] = 1056964608;
  D3DXVec3TransformCoord((struct D2DVector3 *)&v44, (const struct D2DVector3 *)v46, v3);
  if ( *((_BYTE *)this + 988) )
    v36 = v45;
  else
    v36 = 0.0;
  D2DMatrixTranslation(
    (struct D2DMatrix *)v47,
    0.0,
    0.0,
    COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(*((float *)this + 218) + *((float *)this + 178)) + v36) ^ _xmm));
  D2DMatrixMultiply(v3, v3, (const struct D2DMatrix *)v47);
  v38 = CMatrixTransform3dProxy::Update(*((CMatrixTransform3dProxy **)this + 31), v37);
  v40 = v38;
  if ( v38 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v38, 0x6C2u, 0LL);
  }
  else
  {
    v41 = *((float *)this + 174);
    if ( v41 != *((float *)this + 175) )
    {
      v42 = CEffectGroupProxy::Update(
              *((CEffectGroupProxy **)this + 34),
              v41,
              v39,
              *((const struct CTransform3dGroupProxy **)this + 33));
      v40 = v42;
      if ( v42 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v42, 0x6C7u, 0LL);
      else
        *((_DWORD *)this + 175) = *((_DWORD *)this + 174);
    }
  }
  return v40;
}
