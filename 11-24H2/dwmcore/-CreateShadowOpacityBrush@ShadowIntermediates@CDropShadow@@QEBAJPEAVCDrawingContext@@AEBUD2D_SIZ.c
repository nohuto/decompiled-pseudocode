/*
 * XREFs of ?CreateShadowOpacityBrush@ShadowIntermediates@CDropShadow@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@MPEAPEAVCDrawListBrush@@@Z @ 0x18014F5E8
 * Callers:
 *     ?GenerateDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18014EFB0 (-GenerateDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x18004AC10 (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z @ 0x18004BC04 (--0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x18004D620 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAAXPEAVCDrawListBrush@@@Z @ 0x1800A053C (-reset@-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAAXPEAVCDr.c)
 *     ??R?$default_delete@VCSurfaceDrawListBrush@@@std@@QEBAXPEAVCSurfaceDrawListBrush@@@Z @ 0x1800B9DE4 (--R-$default_delete@VCSurfaceDrawListBrush@@@std@@QEBAXPEAVCSurfaceDrawListBrush@@@Z.c)
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x1800BA160 (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 *     ??R?$default_delete@VCNineGridDrawListBrush@@@std@@QEBAXPEAVCNineGridDrawListBrush@@@Z @ 0x18014F9E0 (--R-$default_delete@VCNineGridDrawListBrush@@@std@@QEBAXPEAVCNineGridDrawListBrush@@@Z.c)
 *     ?Create@CNineGridDrawListBrush@@SAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBVInsets@@1_NPEAPEAV1@@Z @ 0x18014FE40 (-Create@CNineGridDrawListBrush@@SAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawL.c)
 *     ??1?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x18016BE30 (--1-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ.c)
 */

__int64 __fastcall CDropShadow::ShadowIntermediates::CreateShadowOpacityBrush(
        CDropShadow::ShadowIntermediates *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        float a4,
        struct CDrawListBrush **a5)
{
  struct IBitmapResource *v5; // rdx
  FLOAT v6; // xmm1_4
  int v8; // ebx
  struct D2D_MATRIX_3X2_F *v9; // r9
  __int64 v10; // rcx
  CSurfaceDrawListBrush *v11; // rdx
  CSurfaceDrawListBrush *v12; // rdx
  __int64 v13; // xmm1_8
  CMultiPrimitiveDrawListBrush *v14; // rdx
  __int64 v15; // rcx
  char v16; // al
  float v17; // xmm0_4
  float v18; // xmm0_4
  CSurfaceDrawListBrush **v19; // rcx
  CSurfaceDrawListBrush *v20; // rdx
  CMultiPrimitiveDrawListBrush *v21; // rdx
  __int64 v22; // rcx
  struct CDrawListBrush *v23; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int128 v27; // [rsp+38h] [rbp-41h] BYREF
  struct D2D_RECT_F v28; // [rsp+48h] [rbp-31h] BYREF
  CSurfaceDrawListBrush **v29; // [rsp+58h] [rbp-21h]
  CSurfaceDrawListBrush *v30; // [rsp+60h] [rbp-19h] BYREF
  char v31; // [rsp+68h] [rbp-11h]
  struct D2D_RECT_F v32; // [rsp+70h] [rbp-9h] BYREF
  __int64 v33; // [rsp+80h] [rbp+7h]
  _BYTE v34[48]; // [rsp+88h] [rbp+Fh] BYREF
  __int16 v35; // [rsp+D8h] [rbp+5Fh] BYREF
  char v36; // [rsp+DAh] [rbp+61h]
  CSurfaceDrawListBrush *v37; // [rsp+E0h] [rbp+67h] BYREF
  CMultiPrimitiveDrawListBrush *v38; // [rsp+E8h] [rbp+6Fh] BYREF

  v37 = a2;
  v5 = (struct IBitmapResource *)*((_QWORD *)this + 7);
  v6 = a4 + a3->height;
  v38 = 0LL;
  v37 = 0LL;
  v28.bottom = v6;
  v28.left = 0.0 - a4;
  v28.top = 0.0 - a4;
  v28.right = a4 + a3->width;
  v27 = *(_OWORD *)((char *)this + 24);
  CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)v34, v5);
  v30 = 0LL;
  v29 = &v37;
  v35 = SamplerMode::k_ClampClampLinear;
  v36 = 1;
  v31 = 1;
  v8 = CSurfaceDrawListBrush::CreateWithContentRect((__int64)v34, &v35, (float *)&v27, (__int64)&v30);
  if ( v31 )
  {
    v10 = (__int64)v30;
    v11 = *v29;
    *v29 = v30;
    if ( v11 )
      std::default_delete<CSurfaceDrawListBrush>::operator()(v10, v11);
  }
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x353u, 0LL);
    CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)v34);
    if ( v37 )
      std::default_delete<CSurfaceDrawListBrush>::operator()(v25, v37);
  }
  else
  {
    v33 = 0LL;
    v32 = 0LL;
    D2DMatrixHelper::ComputeRectangleTransform((D2DMatrixHelper *)&v27, &v28, &v32, v9);
    v12 = v37;
    v13 = v33;
    *(struct D2D_RECT_F *)((char *)v37 + 8) = v32;
    *((_QWORD *)v12 + 3) = v13;
    v14 = v37;
    v37 = 0LL;
    std::unique_ptr<CDrawListBrush>::reset(&v38, v14);
    CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)v34);
    if ( v37 )
      std::default_delete<CSurfaceDrawListBrush>::operator()(v15, v37);
    v16 = *((_BYTE *)this + 68);
    if ( !v16 && !*((_BYTE *)this + 69) )
      goto LABEL_18;
    v27 = 0LL;
    v28 = 0LL;
    if ( v16 )
    {
      v17 = *((float *)this + 8) - *((float *)this + 6);
      *(float *)&v27 = a4 + a4;
      *((float *)&v27 + 2) = a4 + a4;
      v28.left = v17 * 0.5;
      v28.right = v17 * 0.5;
    }
    if ( *((_BYTE *)this + 69) )
    {
      v18 = *((float *)this + 9) - *((float *)this + 7);
      *((float *)&v27 + 1) = a4 + a4;
      *((float *)&v27 + 3) = a4 + a4;
      v28.top = v18 * 0.5;
      v28.bottom = v18 * 0.5;
    }
    v37 = 0LL;
    v29 = &v37;
    v30 = 0LL;
    v31 = 1;
    v8 = CNineGridDrawListBrush::Create((unsigned int)&v38, (unsigned int)&v28, (unsigned int)&v27, 0, (__int64)&v30);
    if ( v31 )
    {
      v19 = v29;
      v20 = *v29;
      *v29 = v30;
      if ( v20 )
        std::default_delete<CNineGridDrawListBrush>::operator()(v19, v20);
    }
    if ( v8 >= 0 )
    {
      v21 = v37;
      v37 = 0LL;
      std::unique_ptr<CDrawListBrush>::reset(&v38, v21);
      if ( v37 )
        std::default_delete<CNineGridDrawListBrush>::operator()(v22, v37);
LABEL_18:
      v23 = v38;
      v8 = 0;
      v38 = 0LL;
      *a5 = v23;
      goto LABEL_19;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x37Eu, 0LL);
    if ( v37 )
      std::default_delete<CNineGridDrawListBrush>::operator()(v26, v37);
  }
LABEL_19:
  std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(&v38);
  return (unsigned int)v8;
}
