/*
 * XREFs of ?_Update3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A5868
 * Callers:
 *     ?Validate3DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180098B44 (-Validate3DVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Width@?$TMilRect@MUD2D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBAMXZ @ 0x18003B8D4 (-Width@-$TMilRect@MUD2D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBAMXZ.c)
 *     ?Height@?$TMilRect@MUD2D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBAMXZ @ 0x18003B8E0 (-Height@-$TMilRect@MUD2D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBAMXZ.c)
 *     ?Update@CEffectGroupProxy@@QEAAJNIPEBVCTransform3dGroupProxy@@@Z @ 0x18004916C (-Update@CEffectGroupProxy@@QEAAJNIPEBVCTransform3dGroupProxy@@@Z.c)
 *     ?SetEffect@CVisualProxy@@QEAAJPEAVCResourceProxy@@@Z @ 0x1800491B4 (-SetEffect@CVisualProxy@@QEAAJPEAVCResourceProxy@@@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     ??DMatrix4x4F@D2D1@@QEBA?AV01@AEBV01@@Z @ 0x1800A4618 (--DMatrix4x4F@D2D1@@QEBA-AV01@AEBV01@@Z.c)
 *     ?GetMonitorRectFromRect@CTransitionVisualController@@SAXPEBUtagRECT@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800A4A98 (-GetMonitorRectFromRect@CTransitionVisualController@@SAXPEBUtagRECT@@PEAV-$TMilRect_@MUD2D_RECT_.c)
 *     ?PerspectiveProjection@Matrix4x4F@D2D1@@SA?AV12@M@Z @ 0x1800A4AF8 (-PerspectiveProjection@Matrix4x4F@D2D1@@SA-AV12@M@Z.c)
 *     ?Update@CMatrixTransform3dProxy@@QEAAJAEBU_D3DMATRIX@@@Z @ 0x1800C9E50 (-Update@CMatrixTransform3dProxy@@QEAAJAEBU_D3DMATRIX@@@Z.c)
 *     ?Update@CTransform3dGroupProxy@@QEAAJPEAPEAVCMatrixTransform3dProxy@@I@Z @ 0x1800DC7B8 (-Update@CTransform3dGroupProxy@@QEAAJPEAPEAVCMatrixTransform3dProxy@@I@Z.c)
 *     ??0D2DMatrix@@QEAA@AEBU_D3DMATRIX@@@Z @ 0x1800F5134 (--0D2DMatrix@@QEAA@AEBU_D3DMATRIX@@@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::_Update3DResources(CAnimatedTransitionVisual *this)
{
  float v2; // xmm0_4
  float v3; // xmm7_4
  float v4; // xmm0_4
  float v5; // xmm6_4
  __int128 *v6; // rax
  __int128 v7; // xmm4
  __int128 v8; // xmm2
  __int128 v9; // xmm0
  float v10; // xmm5_4
  const struct D2D1::Matrix4x4F *v11; // rax
  __int128 *v12; // rax
  __int128 v13; // xmm1
  __int128 v14; // xmm4
  __int128 v15; // xmm0
  __m128 *v16; // rax
  __m128 v17; // xmm4
  __m128 v18; // xmm2
  __m128 v19; // xmm3
  __m128 v20; // xmm5
  int v21; // eax
  unsigned int v22; // r8d
  unsigned int v23; // ebx
  CTransform3dGroupProxy *v24; // rcx
  int v25; // eax
  __int64 v26; // r8
  int v27; // eax
  int v28; // eax
  struct CMatrixTransform3dProxy *v30[2]; // [rsp+38h] [rbp-D0h] BYREF
  int v31; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v32; // [rsp+4Ch] [rbp-BCh]
  int v33; // [rsp+5Ch] [rbp-ACh]
  __int128 v34; // [rsp+60h] [rbp-A8h]
  int v35; // [rsp+70h] [rbp-98h]
  int v36; // [rsp+74h] [rbp-94h]
  float v37; // [rsp+78h] [rbp-90h]
  float v38; // [rsp+7Ch] [rbp-8Ch]
  int v39; // [rsp+80h] [rbp-88h]
  int v40; // [rsp+84h] [rbp-84h]
  _D3DMATRIX v41; // [rsp+88h] [rbp-80h] BYREF
  __int128 v42; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v43; // [rsp+D8h] [rbp-30h]
  __int128 v44; // [rsp+E8h] [rbp-20h]
  __int128 v45; // [rsp+F8h] [rbp-10h]
  _BYTE v46[64]; // [rsp+108h] [rbp+0h] BYREF
  struct _D3DMATRIX v47; // [rsp+148h] [rbp+40h] BYREF

  CTransitionVisualController::GetMonitorRectFromRect((const struct tagRECT *)((char *)this + 808), (__int64)v30);
  v2 = TMilRect<float,D2D_RECT_F,RectUniqueness::NotNeeded>::Width((__int64)v30);
  v3 = (float)(v2 * 0.5) + *(float *)v30;
  v4 = TMilRect<float,D2D_RECT_F,RectUniqueness::NotNeeded>::Height((__int64)v30);
  v36 = 0;
  v39 = 0;
  v43 = _xmm;
  v31 = 1065353216;
  v33 = 1065353216;
  v5 = (float)(v4 * 0.5) + *((float *)v30 + 1);
  v42 = _xmm;
  v44 = _xmm;
  v45 = _xmm;
  v32 = 0LL;
  v35 = 1065353216;
  v34 = 0LL;
  v40 = 1065353216;
  LODWORD(v38) = LODWORD(v5) ^ _xmm;
  LODWORD(v37) = LODWORD(v3) ^ _xmm;
  D2D1::Matrix4x4F::operator*(
    (struct D2D1::Matrix4x4F *)&v42,
    (D2D1::Matrix4x4F *)v46,
    (const struct D2D1::Matrix4x4F *)&v31);
  v7 = *v6;
  v8 = v6[2];
  v43 = v6[1];
  v9 = v6[3];
  v42 = v7;
  v45 = v9;
  v44 = v8;
  v11 = (const struct D2D1::Matrix4x4F *)D2D1::Matrix4x4F::PerspectiveProjection((__int64)v46, v10);
  D2D1::Matrix4x4F::operator*((struct D2D1::Matrix4x4F *)&v42, (D2D1::Matrix4x4F *)&v31, v11);
  v13 = v12[2];
  v14 = *v12;
  v43 = v12[1];
  v15 = v12[3];
  v36 = 0;
  v39 = 0;
  v45 = v15;
  v44 = v13;
  v32 = 0LL;
  v31 = 1065353216;
  v37 = v3;
  v38 = v5;
  v42 = v14;
  v33 = 1065353216;
  v34 = 0LL;
  v35 = 1065353216;
  v40 = 1065353216;
  D2D1::Matrix4x4F::operator*(
    (struct D2D1::Matrix4x4F *)&v42,
    (D2D1::Matrix4x4F *)v46,
    (const struct D2D1::Matrix4x4F *)&v31);
  v17 = *v16;
  v18 = v16[1];
  v19 = v16[2];
  v20 = v16[3];
  LODWORD(v41._11) = *(__m128 *)v16->m128_f32;
  LODWORD(v41._12) = _mm_shuffle_ps(v17, v17, 85).m128_u32[0];
  LODWORD(v41._13) = _mm_shuffle_ps(v17, v17, 170).m128_u32[0];
  LODWORD(v41._22) = _mm_shuffle_ps(v18, v18, 85).m128_u32[0];
  LODWORD(v41._23) = _mm_shuffle_ps(v18, v18, 170).m128_u32[0];
  LODWORD(v41._32) = _mm_shuffle_ps(v19, v19, 85).m128_u32[0];
  LODWORD(v41._33) = _mm_shuffle_ps(v19, v19, 170).m128_u32[0];
  LODWORD(v41._21) = v18.m128_i32[0];
  LODWORD(v41._31) = v19.m128_i32[0];
  LODWORD(v41._41) = v20.m128_i32[0];
  LODWORD(v41._44) = _mm_shuffle_ps(v20, v20, 255).m128_u32[0];
  LODWORD(v41._14) = _mm_shuffle_ps(v17, v17, 255).m128_u32[0];
  LODWORD(v41._24) = _mm_shuffle_ps(v18, v18, 255).m128_u32[0];
  LODWORD(v41._34) = _mm_shuffle_ps(v19, v19, 255).m128_u32[0];
  LODWORD(v41._42) = _mm_shuffle_ps(v20, v20, 85).m128_u32[0];
  LODWORD(v41._43) = _mm_shuffle_ps(v20, v20, 170).m128_u32[0];
  D2DMatrix::D2DMatrix((D2DMatrix *)&v47, &v41);
  v21 = CMatrixTransform3dProxy::Update(*((CMatrixTransform3dProxy **)this + 32), &v47);
  v23 = v21;
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v21, 0x6F6u, 0LL);
  }
  else
  {
    v24 = (CTransform3dGroupProxy *)*((_QWORD *)this + 33);
    v30[0] = *((struct CMatrixTransform3dProxy **)this + 31);
    v30[1] = *((struct CMatrixTransform3dProxy **)this + 32);
    v25 = CTransform3dGroupProxy::Update(v24, v30, v22);
    v23 = v25;
    if ( v25 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v25, 0x6FFu, 0LL);
    }
    else
    {
      v27 = CEffectGroupProxy::Update(
              *((CEffectGroupProxy **)this + 34),
              *((float *)this + 174),
              v26,
              *((const struct CTransform3dGroupProxy **)this + 33));
      v23 = v27;
      if ( v27 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v27, 0x703u, 0LL);
      }
      else
      {
        v28 = CVisualProxy::SetEffect(*((CVisualProxy **)this + 3), *((struct CResourceProxy **)this + 34));
        v23 = v28;
        if ( v28 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v28, 0x705u, 0LL);
      }
    }
  }
  return v23;
}
