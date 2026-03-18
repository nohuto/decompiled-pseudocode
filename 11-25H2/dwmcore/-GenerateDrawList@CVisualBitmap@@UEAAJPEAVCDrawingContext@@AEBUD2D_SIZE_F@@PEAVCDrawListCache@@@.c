/*
 * XREFs of ?GenerateDrawList@CVisualBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18029DDE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x18000F0B8 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x18000F4E0 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180011A50 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x180048730 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x1800CE690 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x1800D0080 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z @ 0x1800DEA78 (--0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x1800DEC4C (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x1800DF4AC (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 *     ??1?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x1800E0800 (--1-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ.c)
 *     ?FromD2D1InterpolationMode@InterpolationMode@@YA?AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x1800E0B30 (-FromD2D1InterpolationMode@InterpolationMode@@YA-AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?D2DInterpolationModeFromMilInterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapInterpolationMode@@@Z @ 0x18010C960 (-D2DInterpolationModeFromMilInterpolationMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapIn.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z @ 0x1801295D4 (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z.c)
 *     ??1?$unique_ptr@VCSurfaceDrawListBrush@@U?$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x18019D07C (--1-$unique_ptr@VCSurfaceDrawListBrush@@U-$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QE.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCSurfaceDrawListBrush@@U?$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x18019D0A8 (--1-$out_param_t@V-$unique_ptr@VCSurfaceDrawListBrush@@U-$default_delete@VCSurfaceDrawListBrush@.c)
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x18019E740 (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1802E87D0 (_alloca_probe.c)
 */

__int64 __fastcall CVisualBitmap::GenerateDrawList(
        CVisualBitmap *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  int v7; // edi
  __int64 v8; // r8
  __int64 v9; // r8
  int v10; // eax
  int v11; // ebx
  CMultiPrimitiveDrawListBrush *v12; // rax
  int DrawList; // eax
  char v15; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v16; // [rsp+31h] [rbp-CFh]
  CMultiPrimitiveDrawListBrush *v17; // [rsp+40h] [rbp-C0h] BYREF
  CSurfaceDrawListBrush *v18; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v19; // [rsp+50h] [rbp-B0h] BYREF
  float v20; // [rsp+58h] [rbp-A8h]
  float v21; // [rsp+5Ch] [rbp-A4h]
  CSurfaceDrawListBrush **v22; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v23; // [rsp+68h] [rbp-98h] BYREF
  char v24; // [rsp+70h] [rbp-90h]
  _BYTE v25[24]; // [rsp+78h] [rbp-88h] BYREF
  __int128 v26; // [rsp+90h] [rbp-70h] BYREF
  int v27; // [rsp+A0h] [rbp-60h]
  int v28; // [rsp+ECh] [rbp-14h]
  char v29; // [rsp+F0h] [rbp-10h]
  CDrawingContext *v30[6]; // [rsp+100h] [rbp+0h] BYREF
  int v31; // [rsp+134h] [rbp+34h]
  _BYTE v32[4496]; // [rsp+150h] [rbp+50h] BYREF

  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v32);
  v18 = 0LL;
  v19 = 0LL;
  v7 = *((_DWORD *)a2 + 60);
  CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v30, a2);
  v27 = 0;
  v28 = 257;
  v26 = 0LL;
  v29 = 0;
  CDrawListBitmap::CDrawListBitmap(
    (CDrawListBitmap *)v25,
    (struct IBitmapResource *)(((unsigned __int64)this + 80) & -(__int64)(this != 0LL)));
  CDrawListBitmap::GetSize((CDrawListBitmap *)v25, &v17, v8);
  v20 = (float)(int)v17;
  CDrawListBitmap::GetSize((CDrawListBitmap *)v25, &v17, v9);
  v23 = 0LL;
  v24 = 1;
  v22 = &v18;
  v21 = (float)SHIDWORD(v17);
  v10 = D2DInterpolationModeFromMilInterpolationMode(v7);
  v15 = InterpolationMode::FromD2D1InterpolationMode(v10);
  v16 = 257;
  v11 = CSurfaceDrawListBrush::CreateWithContentRect((__int64)v25, (__int16 *)&v15, (float *)&v19, (__int64)&v23);
  wil::details::out_param_t<std::unique_ptr<CSurfaceDrawListBrush>>::~out_param_t<std::unique_ptr<CSurfaceDrawListBrush>>((__int64)&v22);
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0xB5u, 0LL);
  }
  else
  {
    v12 = v18;
    v18 = 0LL;
    v17 = v12;
    CBrushDrawListGenerator::AttachInput((__int64)v30, 0, (__int64 *)&v17);
    std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(&v17);
    v31 = 128;
    DrawList = CBrushDrawListGenerator::GenerateDrawList(
                 v30,
                 (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)&v26,
                 (struct CDrawListEntryBuilder *)v32);
    v11 = DrawList;
    if ( DrawList < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, DrawList, 0xB9u, 0LL);
    }
    else
    {
      CDrawListCache::Update(a4, a2, (struct CDrawListEntryBuilder *)v32);
      v11 = 0;
    }
  }
  CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)v25);
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v30);
  std::unique_ptr<CSurfaceDrawListBrush>::~unique_ptr<CSurfaceDrawListBrush>(&v18);
  CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v32);
  return (unsigned int)v11;
}
