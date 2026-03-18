/*
 * XREFs of ?CreateShadowOpacityBrush@ShadowIntermediates@CDropShadow@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@MPEAPEAVCDrawListBrush@@@Z @ 0x180119988
 * Callers:
 *     ?GenerateDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180119350 (-GenerateDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?reset@?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAAXPEAVCDrawListBrush@@@Z @ 0x1800CE56C (-reset@-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAAXPEAVCDr.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x1800D0080 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800DE8E0 (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z @ 0x1800DEA78 (--0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z.c)
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x1800DF4AC (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 *     ??1?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x1800E0800 (--1-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??R?$default_delete@VCNineGridDrawListBrush@@@std@@QEBAXPEAVCNineGridDrawListBrush@@@Z @ 0x18011A3A0 (--R-$default_delete@VCNineGridDrawListBrush@@@std@@QEBAXPEAVCNineGridDrawListBrush@@@Z.c)
 *     ?Create@CNineGridDrawListBrush@@SAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBVInsets@@1_NPEAPEAV1@@Z @ 0x180126C54 (-Create@CNineGridDrawListBrush@@SAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawL.c)
 *     ??R?$default_delete@VCSurfaceDrawListBrush@@@std@@QEBAXPEAVCSurfaceDrawListBrush@@@Z @ 0x18019D050 (--R-$default_delete@VCSurfaceDrawListBrush@@@std@@QEBAXPEAVCSurfaceDrawListBrush@@@Z.c)
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
  struct CDrawingContext *v10; // rdx
  struct CDrawingContext *v11; // rdx
  __int64 v12; // xmm1_8
  CMultiPrimitiveDrawListBrush *v13; // rdx
  char v14; // al
  float v15; // xmm0_4
  float v16; // xmm0_4
  struct CDrawingContext *v17; // rdx
  CMultiPrimitiveDrawListBrush *v18; // rdx
  struct CDrawListBrush *v19; // rcx
  __int128 v21; // [rsp+38h] [rbp-41h] BYREF
  struct D2D_RECT_F v22; // [rsp+48h] [rbp-31h] BYREF
  struct CDrawingContext **v23; // [rsp+58h] [rbp-21h]
  struct CDrawingContext *v24; // [rsp+60h] [rbp-19h] BYREF
  char v25; // [rsp+68h] [rbp-11h]
  struct D2D_RECT_F v26; // [rsp+70h] [rbp-9h] BYREF
  __int64 v27; // [rsp+80h] [rbp+7h]
  _BYTE v28[48]; // [rsp+88h] [rbp+Fh] BYREF
  __int16 v29; // [rsp+D8h] [rbp+5Fh] BYREF
  char v30; // [rsp+DAh] [rbp+61h]
  struct CDrawingContext *v31; // [rsp+E0h] [rbp+67h] BYREF
  CMultiPrimitiveDrawListBrush *v32; // [rsp+E8h] [rbp+6Fh] BYREF

  v31 = a2;
  v5 = (struct IBitmapResource *)*((_QWORD *)this + 7);
  v6 = a4 + a3->height;
  v32 = 0LL;
  v31 = 0LL;
  v22.bottom = v6;
  v22.left = 0.0 - a4;
  v22.top = 0.0 - a4;
  v22.right = a4 + a3->width;
  v21 = *(_OWORD *)((char *)this + 24);
  CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)v28, v5);
  v24 = 0LL;
  v23 = &v31;
  v29 = SamplerMode::k_ClampClampLinear;
  v30 = 1;
  v25 = 1;
  v8 = CSurfaceDrawListBrush::CreateWithContentRect((__int64)v28, &v29, (float *)&v21, (__int64)&v24);
  if ( v25 )
  {
    v10 = *v23;
    *v23 = v24;
    if ( v10 )
      std::default_delete<CSurfaceDrawListBrush>::operator()();
  }
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x353u, 0LL);
    CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)v28);
    if ( v31 )
      std::default_delete<CSurfaceDrawListBrush>::operator()();
  }
  else
  {
    v27 = 0LL;
    v26 = 0LL;
    D2DMatrixHelper::ComputeRectangleTransform((D2DMatrixHelper *)&v21, &v22, &v26, v9);
    v11 = v31;
    v12 = v27;
    *(struct D2D_RECT_F *)((char *)v31 + 8) = v26;
    *((_QWORD *)v11 + 3) = v12;
    v13 = v31;
    v31 = 0LL;
    std::unique_ptr<CDrawListBrush>::reset(&v32, v13);
    CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)v28);
    if ( v31 )
      std::default_delete<CSurfaceDrawListBrush>::operator()();
    v14 = *((_BYTE *)this + 68);
    if ( !v14 && !*((_BYTE *)this + 69) )
      goto LABEL_18;
    v21 = 0LL;
    v22 = 0LL;
    if ( v14 )
    {
      v15 = *((float *)this + 8) - *((float *)this + 6);
      *(float *)&v21 = a4 + a4;
      *((float *)&v21 + 2) = a4 + a4;
      v22.left = v15 * 0.5;
      v22.right = v15 * 0.5;
    }
    if ( *((_BYTE *)this + 69) )
    {
      v16 = *((float *)this + 9) - *((float *)this + 7);
      *((float *)&v21 + 1) = a4 + a4;
      *((float *)&v21 + 3) = a4 + a4;
      v22.top = v16 * 0.5;
      v22.bottom = v16 * 0.5;
    }
    v31 = 0LL;
    v23 = &v31;
    v24 = 0LL;
    v25 = 1;
    v8 = CNineGridDrawListBrush::Create((unsigned int)&v32, (unsigned int)&v22, (unsigned int)&v21, 0, (__int64)&v24);
    if ( v25 )
    {
      v17 = *v23;
      *v23 = v24;
      if ( v17 )
        std::default_delete<CNineGridDrawListBrush>::operator()();
    }
    if ( v8 >= 0 )
    {
      v18 = v31;
      v31 = 0LL;
      std::unique_ptr<CDrawListBrush>::reset(&v32, v18);
      if ( v31 )
        std::default_delete<CNineGridDrawListBrush>::operator()();
LABEL_18:
      v19 = v32;
      v8 = 0;
      v32 = 0LL;
      *a5 = v19;
      goto LABEL_19;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x37Eu, 0LL);
    if ( v31 )
      std::default_delete<CNineGridDrawListBrush>::operator()();
  }
LABEL_19:
  std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(&v32);
  return (unsigned int)v8;
}
