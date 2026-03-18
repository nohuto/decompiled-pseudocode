/*
 * XREFs of ?GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801E3100
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x18000F0B8 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x18000F4E0 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180011A50 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x180048730 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?CalcImageTransform@CCompositionSurfaceBitmap@@QEBA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800A1E00 (-CalcImageTransform@CCompositionSurfaceBitmap@@QEBA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x1800CE690 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x1800D0080 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z @ 0x1800DEA78 (--0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z.c)
 *     ??$?4U?$default_delete@VCDrawListBrush@@@std@@$0A@@?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800DEBCC (--$-4U-$default_delete@VCDrawListBrush@@@std@@$0A@@-$unique_ptr@VCDrawListBrush@@U-$default_dele.c)
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x1800DF4AC (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 *     ??1?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x1800E0800 (--1-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ.c)
 *     ?FromD2D1InterpolationMode@InterpolationMode@@YA?AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x1800E0B30 (-FromD2D1InterpolationMode@InterpolationMode@@YA-AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?D2DInterpolationModeFromMilInterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapInterpolationMode@@@Z @ 0x18010C960 (-D2DInterpolationModeFromMilInterpolationMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapIn.c)
 *     ??1?$unique_ptr@VCGeometryOnlyDrawListBrush@@U?$default_delete@VCGeometryOnlyDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x180126AE0 (--1-$unique_ptr@VCGeometryOnlyDrawListBrush@@U-$default_delete@VCGeometryOnlyDrawListBrush@@@std.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCGeometryOnlyDrawListBrush@@U?$default_delete@VCGeometryOnlyDrawListBrush@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x180126B00 (--1-$out_param_t@V-$unique_ptr@VCGeometryOnlyDrawListBrush@@U-$default_delete@VCGeometryOnlyDraw.c)
 *     ?Free@?$CThreadLocalObjectCache@VCGeometryOnlyDrawListBrush@@V1@@@SAXPEAX@Z @ 0x180126B64 (-Free@-$CThreadLocalObjectCache@VCGeometryOnlyDrawListBrush@@V1@@@SAXPEAX@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x180126F18 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z @ 0x1801295D4 (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z.c)
 *     ??R?$default_delete@VCSurfaceDrawListBrush@@@std@@QEBAXPEAVCSurfaceDrawListBrush@@@Z @ 0x18019D050 (--R-$default_delete@VCSurfaceDrawListBrush@@@std@@QEBAXPEAVCSurfaceDrawListBrush@@@Z.c)
 *     ?UseLayoutSizeForBounds@CCompositionSurfaceBitmap@@AEBA_NAEBUD2D_SIZE_F@@@Z @ 0x1801E3418 (-UseLayoutSizeForBounds@CCompositionSurfaceBitmap@@AEBA_NAEBUD2D_SIZE_F@@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1802E87D0 (_alloca_probe.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::GenerateDrawList(
        CCompositionSurfaceBitmap *this,
        struct CDrawingContext *a2,
        struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  char v8; // r15
  char v9; // cl
  __int64 v10; // rdx
  int v11; // ecx
  int v12; // eax
  int v13; // ebx
  struct CGeometryOnlyDrawListBrush *v14; // rcx
  CSurfaceDrawListBrush *v15; // rdx
  int v16; // eax
  int v17; // eax
  __int64 v18; // rcx
  __int64 v20; // rcx
  CSurfaceDrawListBrush *v21; // rax
  unsigned __int64 v22; // xmm2_8
  FLOAT width; // xmm1_4
  FLOAT height; // xmm0_4
  _DWORD *v25; // rax
  __int128 v26; // xmm1
  char v27; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v28; // [rsp+31h] [rbp-CFh]
  CSurfaceDrawListBrush *v29; // [rsp+40h] [rbp-C0h] BYREF
  LPVOID lpMem; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v31[32]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v32[6]; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v33; // [rsp+A0h] [rbp-60h]
  unsigned int v34; // [rsp+A4h] [rbp-5Ch]
  int v35; // [rsp+B0h] [rbp-50h]
  _QWORD v36[2]; // [rsp+C0h] [rbp-40h] BYREF
  int v37; // [rsp+D0h] [rbp-30h]
  int v38; // [rsp+11Ch] [rbp+1Ch]
  char v39; // [rsp+120h] [rbp+20h]
  struct CGeometryOnlyDrawListBrush *v40[2]; // [rsp+130h] [rbp+30h] BYREF
  char v41; // [rsp+140h] [rbp+40h]
  float v42[6]; // [rsp+148h] [rbp+48h] BYREF
  CDrawingContext *v43; // [rsp+160h] [rbp+60h] BYREF
  CMultiPrimitiveDrawListBrush *v44; // [rsp+168h] [rbp+68h] BYREF
  unsigned int v45; // [rsp+188h] [rbp+88h]
  int v46; // [rsp+194h] [rbp+94h]
  _BYTE v47[4496]; // [rsp+1B0h] [rbp+B0h] BYREF

  v35 = 0;
  *(_OWORD *)v42 = 0LL;
  v8 = CCompositionSurfaceBitmap::CalcImageTransform(this, (float *)a3, (__int64)v32, v42);
  if ( v42[2] <= v42[0] || (v9 = 0, v42[3] <= v42[1]) )
    v9 = 1;
  if ( v9 )
    return 0;
  CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)&v43, a2);
  lpMem = 0LL;
  if ( CCompositionSurfaceBitmap::UseLayoutSizeForBounds(this, a3) )
  {
    v40[1] = 0LL;
    v40[0] = (struct CGeometryOnlyDrawListBrush *)&lpMem;
    v41 = 1;
    v13 = CGeometryOnlyDrawListBrush::Create(&v40[1], v10);
    wil::details::out_param_t<std::unique_ptr<CGeometryOnlyDrawListBrush>>::~out_param_t<std::unique_ptr<CGeometryOnlyDrawListBrush>>((__int64)v40);
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x1B6u, 0LL);
      std::unique_ptr<CGeometryOnlyDrawListBrush>::~unique_ptr<CGeometryOnlyDrawListBrush>(&lpMem);
LABEL_26:
      CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v43);
      return (unsigned int)v13;
    }
    width = a3->width;
    height = a3->height;
    v25 = lpMem;
    v40[0] = 0LL;
    v40[1] = (struct CGeometryOnlyDrawListBrush *)__PAIR64__(LODWORD(height), LODWORD(width));
    v26 = *(_OWORD *)v40;
    *((_BYTE *)lpMem + 52) = 1;
    v25[12] = 50529027;
    *((_OWORD *)v25 + 2) = v26;
  }
  CDrawListBitmap::CDrawListBitmap(
    (CDrawListBitmap *)v31,
    (struct IBitmapResource *)(((unsigned __int64)this + 72) & -(__int64)(this != 0LL)));
  v11 = *((_DWORD *)a2 + 60);
  v40[0] = (struct CGeometryOnlyDrawListBrush *)&v29;
  v29 = 0LL;
  v40[1] = 0LL;
  v41 = 1;
  v12 = D2DInterpolationModeFromMilInterpolationMode(v11);
  v27 = InterpolationMode::FromD2D1InterpolationMode(v12);
  v28 = 257;
  v13 = CSurfaceDrawListBrush::CreateWithContentRect((__int64)v31, (__int16 *)&v27, v42, (__int64)&v40[1]);
  if ( v41 )
  {
    v14 = v40[0];
    v15 = *(CSurfaceDrawListBrush **)v40[0];
    *(_QWORD *)v40[0] = v40[1];
    if ( v15 )
      std::default_delete<CSurfaceDrawListBrush>::operator()((__int64)v14, v15);
  }
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x1CAu, 0LL);
    goto LABEL_22;
  }
  if ( v8 )
  {
    v21 = v29;
    v40[0] = (struct CGeometryOnlyDrawListBrush *)v32[0];
    v40[1] = (struct CGeometryOnlyDrawListBrush *)v32[2];
    v22 = _mm_unpacklo_ps((__m128)v33, (__m128)v34).m128_u64[0];
    *(_OWORD *)((char *)v29 + 8) = *(_OWORD *)v40;
    *((_QWORD *)v21 + 3) = v22;
  }
  v40[0] = v29;
  v29 = 0LL;
  std::unique_ptr<CDrawListBrush>::operator=<std::default_delete<CDrawListBrush>,0>(&v44, v40);
  v16 = v45;
  if ( v45 <= 1 )
    v16 = 1;
  v45 = v16;
  std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(v40);
  v36[0] = lpMem;
  v46 = 128;
  v36[1] = 0LL;
  v37 = 0;
  v38 = 257;
  v39 = 0;
  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v47);
  v17 = CBrushDrawListGenerator::GenerateDrawList(
          &v43,
          (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)v36,
          (struct CDrawListEntryBuilder *)v47);
  v13 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0x1E2u, 0LL);
    CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v47);
LABEL_22:
    if ( v29 )
      std::default_delete<CSurfaceDrawListBrush>::operator()(v20, v29);
    CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)v31);
    if ( lpMem )
      CThreadLocalObjectCache<CGeometryOnlyDrawListBrush,CGeometryOnlyDrawListBrush>::Free(lpMem);
    goto LABEL_26;
  }
  CDrawListCache::Update(a4, a2, (struct CDrawListEntryBuilder *)v47);
  CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v47);
  if ( v29 )
    std::default_delete<CSurfaceDrawListBrush>::operator()(v18, v29);
  CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)v31);
  if ( lpMem )
    CThreadLocalObjectCache<CGeometryOnlyDrawListBrush,CGeometryOnlyDrawListBrush>::Free(lpMem);
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v43);
  return 0;
}
