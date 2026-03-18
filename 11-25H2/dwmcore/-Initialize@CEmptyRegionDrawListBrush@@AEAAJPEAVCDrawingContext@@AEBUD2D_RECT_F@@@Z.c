/*
 * XREFs of ?Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z @ 0x1800441B8
 * Callers:
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x18012A1A4 (-GetInputBrushParameters@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 * Callees:
 *     ?CMilRectLFromD2D_RECT_F@@YA?AV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x180043CD4 (-CMilRectLFromD2D_RECT_F@@YA-AV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRe.c)
 *     ?AddRectangle@CRegion@@QEAAXAEBUtagRECT@@@Z @ 0x180043E30 (-AddRectangle@CRegion@@QEAAXAEBUtagRECT@@@Z.c)
 *     ?TransformRectConservative@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z @ 0x18004454C (-TransformRectConservative@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z.c)
 *     ?Subtract@CRegion@@QEAAXAEBV1@@Z @ 0x1800668C0 (-Subtract@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180099AE0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?reset@?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAAXPEAVCDrawListBrush@@@Z @ 0x1800CE56C (-reset@-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAAXPEAVCDr.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x1800D0080 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z @ 0x1800DEA78 (--0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetStockTransparentBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ @ 0x180115438 (-GetStockTransparentBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ.c)
 *     ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z @ 0x18019C4F0 (-CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMat.c)
 *     ??R?$default_delete@VCSurfaceDrawListBrush@@@std@@QEBAXPEAVCSurfaceDrawListBrush@@@Z @ 0x18019D050 (--R-$default_delete@VCSurfaceDrawListBrush@@@std@@QEBAXPEAVCSurfaceDrawListBrush@@@Z.c)
 *     ?GetContentRegion@CPrimitiveGroupDrawListGenerator@@QEAAPEBVCRegion@@XZ @ 0x18022AED8 (-GetContentRegion@CPrimitiveGroupDrawListGenerator@@QEAAPEBVCRegion@@XZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CEmptyRegionDrawListBrush::Initialize(
        CEmptyRegionDrawListBrush *this,
        struct CDrawingContext *a2,
        struct D2D_RECT_F *a3)
{
  __int64 v3; // rax
  CRegion *v4; // rdi
  int v7; // r14d
  __int64 v8; // xmm1_8
  struct D2D_RECT_F *v9; // r9
  float v10; // xmm0_4
  int v11; // r10d
  float v12; // xmm0_4
  int v13; // eax
  float v14; // xmm0_4
  int v15; // r11d
  int v16; // r9d
  _DWORD *v17; // rdx
  char v18; // al
  __int64 v19; // rdx
  int *v20; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rdx
  const struct CRegion *ContentRegion; // rax
  struct IBitmapResource *StockTransparentBitmap; // rax
  __int64 v28; // rdx
  __int64 v29; // rdx
  float v30; // [rsp+30h] [rbp-69h] BYREF
  _BYTE v31[24]; // [rsp+40h] [rbp-59h] BYREF
  _BYTE v32[40]; // [rsp+58h] [rbp-41h] BYREF
  _DWORD *v33; // [rsp+80h] [rbp-19h] BYREF
  _DWORD v34[3]; // [rsp+88h] [rbp-11h] BYREF
  int v35; // [rsp+94h] [rbp-5h] BYREF
  unsigned int v36; // [rsp+98h] [rbp-1h] BYREF
  _DWORD v37[13]; // [rsp+9Ch] [rbp+3h] BYREF

  v3 = *((_QWORD *)this + 9);
  v4 = (CEmptyRegionDrawListBrush *)((char *)this + 88);
  v7 = 0;
  *(_OWORD *)((char *)this + 8) = *(_OWORD *)(v3 + 8);
  *((_QWORD *)this + 3) = *(_QWORD *)(v3 + 24);
  v8 = *(_QWORD *)(v3 + 24);
  *(_OWORD *)&v32[16] = *(_OWORD *)(v3 + 8);
  *(_QWORD *)&v32[32] = v8;
  D2D1InvertMatrix((D2D1_MATRIX_3X2_F *)&v32[16]);
  *(_OWORD *)v32 = 0LL;
  D2DMatrixHelper::TransformRectConservative(
    (D2DMatrixHelper *)a3,
    (const struct D2D_RECT_F *)&v32[16],
    (const struct D2D_MATRIX_3X2_F *)v32,
    v9);
  v10 = *(float *)v32 + 6291456.25;
  v11 = (int)(LODWORD(v10) << 10) >> 11;
  v12 = *(float *)&v32[4] + 6291456.25;
  v13 = (int)(LODWORD(v12) << 10) >> 11;
  v14 = *(float *)&v32[8] + 6291456.25;
  v15 = (int)(LODWORD(v14) << 10) >> 11;
  v30 = *(float *)&v32[12] + 6291456.25;
  v16 = (int)(LODWORD(v30) << 10) >> 11;
  if ( v11 >= v15 || v13 >= v16 )
  {
    **(_DWORD **)v4 = 0;
  }
  else
  {
    v17 = *(_DWORD **)v4;
    *v17 = 2;
    v17[1] = v11;
    v17[3] = v13;
    v17[2] = v15;
    v17[4] = 16;
    v17[7] = v11;
    v17[8] = v15;
    v17[5] = v16;
    v17[6] = 16;
  }
  v18 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 9) + 8LL))(*((_QWORD *)this + 9), 4LL);
  v19 = *((_QWORD *)this + 9);
  if ( v18 )
  {
    ContentRegion = CPrimitiveGroupDrawListGenerator::GetContentRegion(*(CPrimitiveGroupDrawListGenerator **)(v19 + 72));
    if ( ContentRegion )
      CRegion::Subtract(v4, ContentRegion);
  }
  else
  {
    if ( *(_BYTE *)(v19 + 52) )
    {
      v34[0] = 0;
      v33 = v34;
      v20 = CMilRectLFromD2D_RECT_F((int *)v32, v19 + 32);
      v21 = *((_QWORD *)v20 + 1);
      v22 = *(_QWORD *)v20;
      v23 = HIDWORD(*(_QWORD *)v20);
      if ( (int)v22 < (int)v21 && (int)v23 < SHIDWORD(v21) )
      {
        v35 = v23;
        v34[0] = 2;
        v34[1] = v22;
        v34[2] = v21;
        v36 = (unsigned int)&v36 + 1 + 11 - (unsigned int)&v35;
        v37[2] = v22;
        v37[3] = v21;
        v37[1] = (unsigned int)&v36 + 1 + 11 - (unsigned int)v37 + 8;
        v37[0] = HIDWORD(v21);
      }
      CRegion::Subtract(v4, (const struct CRegion *)&v33);
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v33);
    }
    else
    {
      **(_DWORD **)v4 = 0;
    }
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 9) + 8LL))(
           *((_QWORD *)this + 9),
           5LL) )
    {
      v24 = (*((_QWORD *)this + 9) + 552LL) & -(__int64)(*(_BYTE *)(*((_QWORD *)this + 9) + 569LL) != 0);
      if ( v24 )
      {
        *(_OWORD *)v32 = *(_OWORD *)CMilRectLFromD2D_RECT_F((int *)v32, v24);
        CRegion::AddRectangle((const struct FastRegion::Internal::CRgnData **)v4, (const struct tagRECT *)v32);
      }
    }
  }
  if ( **(_DWORD **)v4 )
  {
    *(_QWORD *)v32 = 0LL;
    *(_QWORD *)&v32[24] = 0LL;
    *(_QWORD *)&v32[16] = v32;
    v32[32] = 1;
    StockTransparentBitmap = CComposition::GetStockTransparentBitmap(g_pComposition);
    CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)v31, StockTransparentBitmap);
    LOWORD(v30) = SamplerMode::k_ClampClampLinear;
    BYTE2(v30) = 1;
    v7 = CSurfaceDrawListBrush::CreateWithTextureTransform(v31, &v30, &Matrix3x3::Zero, &v32[24]);
    CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)v31);
    if ( v32[32] )
    {
      v28 = **(_QWORD **)&v32[16];
      **(_QWORD **)&v32[16] = *(_QWORD *)&v32[24];
      if ( v28 )
        std::default_delete<CSurfaceDrawListBrush>::operator()();
    }
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x6Du, 0LL);
    }
    else
    {
      v29 = *(_QWORD *)v32;
      *(_QWORD *)v32 = 0LL;
      std::unique_ptr<CDrawListBrush>::reset((char *)this + 80, v29);
    }
    if ( *(_QWORD *)v32 )
      std::default_delete<CSurfaceDrawListBrush>::operator()();
  }
  return (unsigned int)v7;
}
