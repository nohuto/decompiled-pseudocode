/*
 * XREFs of ?_UpdateAnimated3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A8558
 * Callers:
 *     ?Validate3DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A7BE4 (-Validate3DVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x180040E00 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Update@CEffectGroupProxy@@QEAAJNIPEBVCTransform3dGroupProxy@@@Z @ 0x1800BF968 (-Update@CEffectGroupProxy@@QEAAJNIPEBVCTransform3dGroupProxy@@@Z.c)
 *     ?Update@CMatrixTransform3dProxy@@QEAAJAEBU_D3DMATRIX@@@Z @ 0x1800CCA48 (-Update@CMatrixTransform3dProxy@@QEAAJAEBU_D3DMATRIX@@@Z.c)
 *     ?D2DMatrixRotationQuaternion@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DQuaternion@@@Z @ 0x18010E874 (-D2DMatrixRotationQuaternion@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DQuaternion@@@Z.c)
 *     ?D3DXQuaternionRotationYawPitchRoll@@YAPEAUD2DQuaternion@@PEAU1@MMM@Z @ 0x18010EAD4 (-D3DXQuaternionRotationYawPitchRoll@@YAPEAUD2DQuaternion@@PEAU1@MMM@Z.c)
 *     ?D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x18010EC18 (-D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::_UpdateAnimated3DResources(CAnimatedTransitionVisual *this)
{
  unsigned int v1; // r8d
  char *v3; // rdi
  float v4; // xmm8_4
  float v5; // xmm10_4
  int v6; // xmm2_4
  unsigned int v7; // eax
  __m128i v8; // xmm0
  int v9; // edx
  float v10; // xmm11_4
  int v11; // ecx
  __m128i v12; // xmm9
  int v13; // eax
  float v14; // xmm9_4
  float v15; // xmm10_4
  float v16; // xmm9_4
  float v17; // xmm5_4
  float v18; // xmm10_4
  int v19; // xmm0_4
  float v20; // xmm11_4
  float v21; // xmm5_4
  int v22; // ecx
  float v23; // xmm7_4
  float v24; // xmm6_4
  int v25; // ecx
  unsigned int v26; // eax
  int v27; // r9d
  __m128i v28; // xmm7
  int v29; // eax
  float v30; // xmm7_4
  float v31; // xmm6_4
  float v32; // xmm0_4
  int v33; // edx
  int v34; // r9d
  int v35; // eax
  float v36; // xmm7_4
  int v37; // eax
  float v38; // xmm0_4
  float v39; // xmm1_4
  float v40; // xmm3_4
  const struct D2DMatrix *v41; // rdx
  float v42; // xmm0_4
  const struct _D3DMATRIX *v43; // rdx
  int v44; // eax
  unsigned int v45; // r8d
  unsigned int v46; // edi
  float v47; // xmm0_4
  int v48; // eax
  int v50; // [rsp+38h] [rbp-D0h] BYREF
  int v51; // [rsp+3Ch] [rbp-CCh]
  int v52; // [rsp+40h] [rbp-C8h]
  int v53; // [rsp+44h] [rbp-C4h]
  int v54; // [rsp+48h] [rbp-C0h]
  float v55; // [rsp+4Ch] [rbp-BCh]
  int v56; // [rsp+50h] [rbp-B8h]
  int v57; // [rsp+54h] [rbp-B4h]
  int v58; // [rsp+58h] [rbp-B0h]
  int v59; // [rsp+5Ch] [rbp-ACh]
  int v60; // [rsp+60h] [rbp-A8h]
  int v61; // [rsp+64h] [rbp-A4h]
  float v62; // [rsp+68h] [rbp-A0h]
  float v63; // [rsp+6Ch] [rbp-9Ch]
  int v64; // [rsp+70h] [rbp-98h]
  int v65; // [rsp+74h] [rbp-94h]
  int v66; // [rsp+78h] [rbp-90h] BYREF
  float v67; // [rsp+80h] [rbp-88h]
  _DWORD v68[4]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v69[160]; // [rsp+98h] [rbp-70h] BYREF

  v1 = *((_DWORD *)this + 214);
  v3 = (char *)this + 516;
  v4 = 0.0;
  v5 = *((float *)this + 194);
  v6 = LODWORD(v5) ^ _xmm;
  v7 = 0;
  if ( (int)(*((_DWORD *)this + 216) - v1) >= 0 )
    v7 = *((_DWORD *)this + 216) - v1;
  v8 = _mm_cvtsi32_si128(v1);
  v9 = *((_DWORD *)this + 215);
  v10 = *((float *)this + 195);
  v11 = *((_DWORD *)this + 217) - v9;
  v12 = _mm_cvtsi32_si128(v7);
  v13 = 0;
  if ( v11 >= 0 )
    v13 = v11;
  v64 = 0;
  v63 = 0.0;
  v62 = 0.0;
  v61 = 0;
  v59 = 0;
  v58 = 0;
  v57 = 0;
  v56 = 0;
  v54 = 0;
  v53 = 0;
  v52 = 0;
  v51 = 0;
  v14 = _mm_cvtepi32_ps(v12).m128_f32[0];
  v67 = 0.0;
  v15 = v5 * v14;
  v16 = v14 * *((float *)this + 191);
  *((_QWORD *)v3 + 4) = 0LL;
  *((_QWORD *)v3 + 3) = 0LL;
  v17 = (float)v13 * *((float *)this + 192);
  *(_QWORD *)(v3 + 12) = 0LL;
  v18 = (float)(v15 + _mm_cvtepi32_ps(v8).m128_f32[0]) + *((float *)this + 188);
  *(_QWORD *)(v3 + 4) = 0LL;
  *((_QWORD *)v3 + 5) = 1065353216LL;
  *((_DWORD *)v3 + 15) = 1065353216;
  *((_DWORD *)v3 + 5) = 1065353216;
  *((_DWORD *)v3 + 12) = v6;
  *((_DWORD *)v3 + 13) = LODWORD(v10) ^ _xmm;
  v19 = *((_DWORD *)this + 193);
  v50 = LODWORD(v16);
  v55 = v17;
  v60 = v19;
  v20 = (float)((float)(v10 * (float)v13) + (float)v9) + *((float *)this + 189);
  *(_DWORD *)v3 = 1065353216;
  *((_DWORD *)v3 + 14) = 0;
  v65 = 1065353216;
  D2DMatrixMultiply((struct D2DMatrix *)v3, (const struct D2DMatrix *)v3, (const struct D2DMatrix *)&v50);
  v22 = *((_DWORD *)this + 255);
  v23 = 0.0;
  v24 = 0.0;
  if ( !v22 )
  {
    v33 = *((_DWORD *)this + 214);
    v34 = *((_DWORD *)this + 215);
    v35 = 0;
    if ( *((_DWORD *)this + 216) - v33 >= 0 )
      v35 = *((_DWORD *)this + 216) - v33;
    v36 = (float)v35;
    v37 = 0;
    if ( *((_DWORD *)this + 217) - v34 >= 0 )
      v37 = *((_DWORD *)this + 217) - v34;
    v31 = (float)v37;
    v23 = (float)((float)(v36 * *((float *)this + 200)) + (float)v33)
        - (float)(v18 - (float)((float)((float)(0.5 - *((float *)this + 194)) * v16) + *((float *)this + 194)));
    v32 = (float)v34;
    goto LABEL_19;
  }
  v25 = v22 - 1;
  if ( !v25 )
  {
    v26 = 0;
    v27 = *((_DWORD *)this + 219);
    if ( *((_DWORD *)this + 220) - *((_DWORD *)this + 218) >= 0 )
      v26 = *((_DWORD *)this + 220) - *((_DWORD *)this + 218);
    v28 = _mm_cvtsi32_si128(v26);
    v29 = 0;
    LODWORD(v30) = _mm_cvtepi32_ps(v28).m128_u32[0];
    if ( *((_DWORD *)this + 221) - v27 >= 0 )
      v29 = *((_DWORD *)this + 221) - v27;
    v31 = (float)v29;
    v23 = (float)((float)(v30 * *((float *)this + 200)) + (float)*((int *)this + 218))
        - (float)(v18 - (float)((float)((float)(0.5 - *((float *)this + 194)) * v16) + *((float *)this + 194)));
    v32 = (float)v27;
LABEL_19:
    v24 = (float)((float)(v31 * *((float *)this + 201)) + v32)
        - (float)(v20 - (float)((float)((float)(0.5 - *((float *)this + 195)) * v21) + *((float *)this + 195)));
    goto LABEL_20;
  }
  if ( v25 == 1 )
  {
    v23 = (float)(v16 * *((float *)this + 200)) + (float)((float)(1.0 - v16) * *((float *)this + 194));
    v24 = (float)((float)(1.0 - v21) * *((float *)this + 195)) + (float)(v21 * *((float *)this + 201));
  }
LABEL_20:
  v38 = *((float *)this + 194) - v23;
  v39 = *((float *)this + 195) - v24;
  v60 = 1065353216;
  v55 = 1.0;
  v50 = 1065353216;
  v62 = v38;
  v63 = v39;
  D2DMatrixMultiply((struct D2DMatrix *)v3, (const struct D2DMatrix *)v3, (const struct D2DMatrix *)&v50);
  v40 = *((float *)this + 235);
  if ( v40 != 0.0 )
  {
    D3DXQuaternionRotationYawPitchRoll((struct D2DQuaternion *)&v66, 0.0, 0.0, v40 * 0.017453292);
    D2DMatrixRotationQuaternion((struct D2DMatrix *)&v50, (const struct D2DQuaternion *)&v66);
    D2DMatrixMultiply((struct D2DMatrix *)v3, (const struct D2DMatrix *)v3, (const struct D2DMatrix *)&v50);
  }
  D3DXQuaternionRotationYawPitchRoll(
    (struct D2DQuaternion *)&v66,
    *((float *)this + 198) * 0.017453292,
    *((float *)this + 197) * 0.017453292,
    *((float *)this + 199) * 0.017453292);
  D2DMatrixRotationQuaternion((struct D2DMatrix *)v69, (const struct D2DQuaternion *)&v66);
  D2DMatrixMultiply((struct D2DMatrix *)v3, (const struct D2DMatrix *)v3, (const struct D2DMatrix *)v69);
  v61 = 0;
  v59 = 0;
  v58 = 0;
  v57 = 0;
  v56 = 0;
  v54 = 0;
  v53 = 0;
  v52 = 0;
  v51 = 0;
  v64 = 0;
  v62 = v23 + v18;
  v63 = v24 + v20;
  v65 = 1065353216;
  v60 = 1065353216;
  v55 = 1.0;
  v50 = 1065353216;
  D2DMatrixMultiply((struct D2DMatrix *)v3, v41, (const struct D2DMatrix *)&v50);
  v68[2] = 0;
  v68[0] = 1056964608;
  v68[1] = 1056964608;
  D3DXVec3TransformCoord((struct D2DVector3 *)&v66, (const struct D2DVector3 *)v68, (const struct D2DMatrix *)v3);
  if ( *((_BYTE *)this + 1036) )
    v4 = v67;
  v42 = *((float *)this + 230) + *((float *)this + 190);
  v62 = 0.0;
  v63 = 0.0;
  v64 = COERCE_UNSIGNED_INT(v42 + v4) ^ _xmm;
  D2DMatrixMultiply((struct D2DMatrix *)v3, (const struct D2DMatrix *)v3, (const struct D2DMatrix *)&v50);
  v44 = CMatrixTransform3dProxy::Update(*((CMatrixTransform3dProxy **)this + 37), v43);
  v46 = v44;
  if ( v44 >= 0 )
  {
    v47 = *((float *)this + 186);
    if ( v47 != *((float *)this + 187) )
    {
      v48 = CEffectGroupProxy::Update(
              *((CEffectGroupProxy **)this + 40),
              v47,
              v45,
              *((const struct CTransform3dGroupProxy **)this + 39));
      v46 = v48;
      if ( v48 >= 0 )
        *((_DWORD *)this + 187) = *((_DWORD *)this + 186);
      else
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v48, 0x6CDu);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v44, 0x6C8u);
  }
  return v46;
}
