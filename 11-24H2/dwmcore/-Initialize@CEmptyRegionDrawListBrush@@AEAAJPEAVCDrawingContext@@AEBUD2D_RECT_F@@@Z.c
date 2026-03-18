/*
 * XREFs of ?Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z @ 0x180171F24
 * Callers:
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x18001A9F4 (-GetInputBrushParameters@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 * Callees:
 *     ?Subtract@CRegion@@QEAAXAEBV1@@Z @ 0x18002D580 (-Subtract@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18003DFB0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z @ 0x18004BC04 (--0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x18004D620 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAAXPEAVCDrawListBrush@@@Z @ 0x1800A053C (-reset@-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAAXPEAVCDr.c)
 *     ??R?$default_delete@VCSurfaceDrawListBrush@@@std@@QEBAXPEAVCSurfaceDrawListBrush@@@Z @ 0x1800B9DE4 (--R-$default_delete@VCSurfaceDrawListBrush@@@std@@QEBAXPEAVCSurfaceDrawListBrush@@@Z.c)
 *     ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z @ 0x1800BA640 (-CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMat.c)
 *     ?TransformRectConservative@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z @ 0x1801722B8 (-TransformRectConservative@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z.c)
 *     ?AddRectangle@CRegion@@QEAAXAEBUtagRECT@@@Z @ 0x1801724A0 (-AddRectangle@CRegion@@QEAAXAEBUtagRECT@@@Z.c)
 *     ?CMilRectLFromD2D_RECT_F@@YA?AV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x180172828 (-CMilRectLFromD2D_RECT_F@@YA-AV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRe.c)
 *     ?GetContentRegion@CPrimitiveGroupDrawListGenerator@@QEAAPEBVCRegion@@XZ @ 0x180172CD0 (-GetContentRegion@CPrimitiveGroupDrawListGenerator@@QEAAPEBVCRegion@@XZ.c)
 *     ?GetStockTransparentBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ @ 0x180172F58 (-GetStockTransparentBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CEmptyRegionDrawListBrush::Initialize(
        CEmptyRegionDrawListBrush *this,
        struct CDrawingContext *a2,
        struct D2D_RECT_F *a3)
{
  __int64 v3; // rax
  const struct FastRegion::Internal::CRgnData **v4; // rdi
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
  const struct FastRegion::Internal::CRgnData *v17; // rdx
  char v18; // al
  __int64 v19; // rdx
  __int64 *v20; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  const struct FastRegion::Internal::CRgnData **ContentRegion; // rax
  struct IBitmapResource *StockTransparentBitmap; // rax
  __int64 v28; // rcx
  CSurfaceDrawListBrush *v29; // rdx
  CMultiPrimitiveDrawListBrush *v30; // rdx
  __int64 v31; // rcx
  float v32; // [rsp+30h] [rbp-69h] BYREF
  _BYTE v33[24]; // [rsp+40h] [rbp-59h] BYREF
  _BYTE v34[40]; // [rsp+58h] [rbp-41h] BYREF
  FastRegion::CRegion *v35; // [rsp+80h] [rbp-19h] BYREF
  _DWORD v36[3]; // [rsp+88h] [rbp-11h] BYREF
  int v37; // [rsp+94h] [rbp-5h] BYREF
  unsigned int v38; // [rsp+98h] [rbp-1h] BYREF
  _DWORD v39[13]; // [rsp+9Ch] [rbp+3h] BYREF

  v3 = *((_QWORD *)this + 9);
  v4 = (const struct FastRegion::Internal::CRgnData **)((char *)this + 88);
  v7 = 0;
  *(_OWORD *)((char *)this + 8) = *(_OWORD *)(v3 + 8);
  *((_QWORD *)this + 3) = *(_QWORD *)(v3 + 24);
  v8 = *(_QWORD *)(v3 + 24);
  *(_OWORD *)&v34[16] = *(_OWORD *)(v3 + 8);
  *(_QWORD *)&v34[32] = v8;
  D2D1InvertMatrix((D2D1_MATRIX_3X2_F *)&v34[16]);
  *(_OWORD *)v34 = 0LL;
  D2DMatrixHelper::TransformRectConservative(
    (D2DMatrixHelper *)a3,
    (const struct D2D_RECT_F *)&v34[16],
    (const struct D2D_MATRIX_3X2_F *)v34,
    v9);
  v10 = *(float *)v34 + 6291456.25;
  v11 = (int)(LODWORD(v10) << 10) >> 11;
  v12 = *(float *)&v34[4] + 6291456.25;
  v13 = (int)(LODWORD(v12) << 10) >> 11;
  v14 = *(float *)&v34[8] + 6291456.25;
  v15 = (int)(LODWORD(v14) << 10) >> 11;
  v32 = *(float *)&v34[12] + 6291456.25;
  v16 = (int)(LODWORD(v32) << 10) >> 11;
  if ( v11 >= v15 || v13 >= v16 )
  {
    *(_DWORD *)*v4 = 0;
  }
  else
  {
    v17 = *v4;
    *(_DWORD *)v17 = 2;
    *((_DWORD *)v17 + 1) = v11;
    *((_DWORD *)v17 + 3) = v13;
    *((_DWORD *)v17 + 2) = v15;
    *((_DWORD *)v17 + 4) = 16;
    *((_DWORD *)v17 + 7) = v11;
    *((_DWORD *)v17 + 8) = v15;
    *((_DWORD *)v17 + 5) = v16;
    *((_DWORD *)v17 + 6) = 16;
  }
  v18 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 9) + 8LL))(*((_QWORD *)this + 9), 4LL);
  v19 = *((_QWORD *)this + 9);
  if ( v18 )
  {
    ContentRegion = (const struct FastRegion::Internal::CRgnData **)CPrimitiveGroupDrawListGenerator::GetContentRegion(*(CPrimitiveGroupDrawListGenerator **)(v19 + 72));
    if ( ContentRegion )
      CRegion::Subtract(v4, ContentRegion);
  }
  else
  {
    if ( *(_BYTE *)(v19 + 52) )
    {
      v36[0] = 0;
      v35 = (FastRegion::CRegion *)v36;
      v20 = (__int64 *)CMilRectLFromD2D_RECT_F(v34, v19 + 32);
      v21 = v20[1];
      v22 = *v20;
      v23 = HIDWORD(*v20);
      if ( (int)v22 < (int)v21 && (int)v23 < SHIDWORD(v21) )
      {
        v37 = v23;
        v36[0] = 2;
        v36[1] = v22;
        v36[2] = v21;
        v38 = (unsigned int)&v38 + 1 + 11 - (unsigned int)&v37;
        v39[2] = v22;
        v39[3] = v21;
        v39[1] = (unsigned int)&v38 + 1 + 11 - (unsigned int)v39 + 8;
        v39[0] = HIDWORD(v21);
      }
      CRegion::Subtract(v4, &v35);
      FastRegion::CRegion::FreeMemory(&v35);
    }
    else
    {
      *(_DWORD *)*v4 = 0;
    }
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 9) + 8LL))(
           *((_QWORD *)this + 9),
           5LL) )
    {
      v24 = (*((_QWORD *)this + 9) + 552LL) & -(__int64)(*(_BYTE *)(*((_QWORD *)this + 9) + 569LL) != 0);
      if ( v24 )
      {
        *(_OWORD *)v34 = *(_OWORD *)CMilRectLFromD2D_RECT_F(v34, v24);
        CRegion::AddRectangle((CRegion *)v4, (const struct tagRECT *)v34);
      }
    }
  }
  if ( *(_DWORD *)*v4 )
  {
    *(_QWORD *)v34 = 0LL;
    *(_QWORD *)&v34[24] = 0LL;
    *(_QWORD *)&v34[16] = v34;
    v34[32] = 1;
    StockTransparentBitmap = CComposition::GetStockTransparentBitmap(g_pComposition);
    CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)v33, StockTransparentBitmap);
    LOWORD(v32) = SamplerMode::k_ClampClampLinear;
    BYTE2(v32) = 1;
    v7 = CSurfaceDrawListBrush::CreateWithTextureTransform(
           (__int64)v33,
           (__int16 *)&v32,
           (__int64)&Matrix3x3::Zero,
           (__int64 *)&v34[24]);
    CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)v33);
    if ( v34[32] )
    {
      v28 = *(_QWORD *)&v34[24];
      v29 = **(CSurfaceDrawListBrush ***)&v34[16];
      **(_QWORD **)&v34[16] = *(_QWORD *)&v34[24];
      if ( v29 )
        std::default_delete<CSurfaceDrawListBrush>::operator()(v28, v29);
    }
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x6Du, 0LL);
    }
    else
    {
      v30 = *(CMultiPrimitiveDrawListBrush **)v34;
      *(_QWORD *)v34 = 0LL;
      std::unique_ptr<CDrawListBrush>::reset((CMultiPrimitiveDrawListBrush **)this + 10, v30);
    }
    if ( *(_QWORD *)v34 )
      std::default_delete<CSurfaceDrawListBrush>::operator()(v31, *(CSurfaceDrawListBrush **)v34);
  }
  return (unsigned int)v7;
}
