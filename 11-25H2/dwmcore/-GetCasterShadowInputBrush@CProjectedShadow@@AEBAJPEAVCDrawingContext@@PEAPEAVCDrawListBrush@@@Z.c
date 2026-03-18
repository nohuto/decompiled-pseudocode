/*
 * XREFs of ?GetCasterShadowInputBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z @ 0x18011A8EC
 * Callers:
 *     ?GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18011A3E0 (-GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache.c)
 * Callees:
 *     ?reset@?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAAXPEAVCDrawListBrush@@@Z @ 0x1800CE56C (-reset@-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAAXPEAVCDr.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x1800D0080 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800DE8E0 (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z @ 0x1800DEA78 (--0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z.c)
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x1800DF4AC (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 *     ??1?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x1800E0800 (--1-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Inflate@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x180119D40 (-Inflate@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     ??R?$default_delete@VCNineGridDrawListBrush@@@std@@QEBAXPEAVCNineGridDrawListBrush@@@Z @ 0x18011A3A0 (--R-$default_delete@VCNineGridDrawListBrush@@@std@@QEBAXPEAVCNineGridDrawListBrush@@@Z.c)
 *     ?GetCasterBounds@CProjectedShadowCaster@@QEBAAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@@Z @ 0x18011C35C (-GetCasterBounds@CProjectedShadowCaster@@QEBAAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     ?Create@CNineGridDrawListBrush@@SAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBVInsets@@1_NPEAPEAV1@@Z @ 0x180126C54 (-Create@CNineGridDrawListBrush@@SAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawL.c)
 *     ??R?$default_delete@VCSurfaceDrawListBrush@@@std@@QEBAXPEAVCSurfaceDrawListBrush@@@Z @ 0x18019D050 (--R-$default_delete@VCSurfaceDrawListBrush@@@std@@QEBAXPEAVCSurfaceDrawListBrush@@@Z.c)
 */

__int64 __fastcall CProjectedShadow::GetCasterShadowInputBrush(
        CProjectedShadow *this,
        struct CDrawingContext *a2,
        struct D2D_MATRIX_3X2_F **a3)
{
  int v4; // ecx
  int v7; // ecx
  struct IBitmapResource *v8; // rdx
  float *v9; // rsi
  int v10; // edi
  __int64 v11; // rdx
  CMultiPrimitiveDrawListBrush *v12; // rdx
  struct D2D_MATRIX_3X2_F *v13; // r9
  __int64 v14; // xmm1_8
  __m128 v15; // xmm1
  float v16; // xmm3_4
  float v17; // xmm2_4
  __int64 v18; // rcx
  CNineGridDrawListBrush *v19; // rdx
  CMultiPrimitiveDrawListBrush *v20; // rdx
  __int64 v21; // rcx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  FLOAT v26; // xmm1_4
  struct D2D_RECT_F v27; // [rsp+30h] [rbp-40h] BYREF
  struct D2D_RECT_F *v28; // [rsp+40h] [rbp-30h] BYREF
  __int64 v29; // [rsp+48h] [rbp-28h] BYREF
  char v30; // [rsp+50h] [rbp-20h]
  struct D2D_RECT_F v31; // [rsp+58h] [rbp-18h] BYREF
  __int64 v32; // [rsp+68h] [rbp-8h]
  CNineGridDrawListBrush *v33; // [rsp+A0h] [rbp+30h] BYREF
  struct D2D_MATRIX_3X2_F *v34; // [rsp+B8h] [rbp+48h] BYREF

  v4 = *((_DWORD *)this + 63);
  v34 = 0LL;
  if ( v4 )
  {
    v7 = v4 - 1;
    if ( v7 )
    {
      if ( v7 != 4 )
      {
        v10 = -2147418113;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147418113, 0x1EFu, 0LL);
        goto LABEL_23;
      }
      v8 = (struct IBitmapResource *)CProjectedShadow::s_cp2xBlurAsset;
      v9 = (float *)&CProjectedShadow::s_rc2xBlur;
    }
    else
    {
      v8 = ShadowHelpers::s_cpFastShadowBlur;
      v9 = (float *)&ShadowHelpers::s_rcFastShadowBlur;
    }
  }
  else
  {
    v8 = (struct IBitmapResource *)*((_QWORD *)this + 43);
    v9 = (float *)((char *)this + 352);
  }
  CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)&v31, v8);
  *(_QWORD *)&v27.left = 0LL;
  v28 = &v27;
  LOWORD(v33) = SamplerMode::k_ClampClampLinear;
  BYTE2(v33) = 1;
  v29 = 0LL;
  v30 = 1;
  v10 = CSurfaceDrawListBrush::CreateWithContentRect((__int64)&v31, (__int16 *)&v33, v9, (__int64)&v29);
  if ( v30 )
  {
    v11 = *(_QWORD *)&v28->left;
    *(_QWORD *)&v28->left = v29;
    if ( v11 )
      std::default_delete<CSurfaceDrawListBrush>::operator()();
  }
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x1FAu, 0LL);
    if ( *(_QWORD *)&v27.left )
      std::default_delete<CSurfaceDrawListBrush>::operator()();
    CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v31);
  }
  else
  {
    v12 = *(CMultiPrimitiveDrawListBrush **)&v27.left;
    *(_QWORD *)&v27.left = 0LL;
    std::unique_ptr<CDrawListBrush>::reset((CMultiPrimitiveDrawListBrush **)&v34, v12);
    if ( *(_QWORD *)&v27.left )
      std::default_delete<CSurfaceDrawListBrush>::operator()();
    CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v31);
    if ( *((_DWORD *)this + 63) )
    {
      v27 = *(struct D2D_RECT_F *)CProjectedShadowCaster::GetCasterBounds(*((_QWORD *)this + 10), *((_QWORD *)a2 + 993));
    }
    else
    {
      v24 = *((_QWORD *)this + 10);
      v27.left = 0.0;
      v27.top = 0.0;
      v25 = *(_QWORD *)(v24 + 72);
      v26 = *(float *)(v25 + 148);
      v27.right = *(FLOAT *)(v25 + 144);
      v27.bottom = v26;
    }
    TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::Inflate(
      &v27.left,
      *((float *)this + 24),
      *((float *)this + 24));
    v31 = 0LL;
    v32 = 0LL;
    D2DMatrixHelper::ComputeRectangleTransform((D2DMatrixHelper *)v34[1].m[1], &v27, &v31, v34);
    v14 = v32;
    *(struct D2D_RECT_F *)&v13->m[1][0] = v31;
    *(_QWORD *)&v13[1].m11 = v14;
    if ( *((_DWORD *)this + 63) != 1 )
      goto LABEL_20;
    v15 = (__m128)*((unsigned int *)this + 24);
    v15.m128_f32[0] = v15.m128_f32[0] + v15.m128_f32[0];
    v16 = v9[2] - *v9;
    v17 = v9[3] - v9[1];
    *(_QWORD *)&v31.left = &v33;
    v33 = 0LL;
    *(_QWORD *)&v31.right = 0LL;
    LOBYTE(v32) = 1;
    *(float *)&v28 = v16 * 0.5;
    *(float *)&v29 = v16 * 0.5;
    *((float *)&v28 + 1) = v17 * 0.5;
    *((float *)&v29 + 1) = v17 * 0.5;
    v27 = (struct D2D_RECT_F)_mm_shuffle_ps(v15, v15, 0);
    v10 = CNineGridDrawListBrush::Create(
            (unsigned int)&v34,
            (unsigned int)&v28,
            (unsigned int)&v27,
            0,
            (__int64)&v31.right);
    if ( (_BYTE)v32 )
    {
      v18 = *(_QWORD *)&v31.left;
      v19 = **(CNineGridDrawListBrush ***)&v31.left;
      **(_QWORD **)&v31.left = *(_QWORD *)&v31.right;
      if ( v19 )
        std::default_delete<CNineGridDrawListBrush>::operator()(v18, v19);
    }
    if ( v10 >= 0 )
    {
      v20 = v33;
      v33 = 0LL;
      std::unique_ptr<CDrawListBrush>::reset((CMultiPrimitiveDrawListBrush **)&v34, v20);
      if ( v33 )
        std::default_delete<CNineGridDrawListBrush>::operator()(v21, v33);
      v13 = v34;
LABEL_20:
      if ( *((float *)this + 24) > 0.0 )
      {
        LOBYTE(v13[2].m[0][1]) = 1;
        v13[2].m11 = 0.0;
      }
      v34 = 0LL;
      *a3 = v13;
      goto LABEL_23;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x22Bu, 0LL);
    if ( v33 )
      std::default_delete<CNineGridDrawListBrush>::operator()(v23, v33);
  }
LABEL_23:
  std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>((CMultiPrimitiveDrawListBrush **)&v34);
  return (unsigned int)v10;
}
