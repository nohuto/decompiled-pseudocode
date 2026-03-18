/*
 * XREFs of ?GenerateDrawList@CVisualBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180292780
 * Callers:
 *     <none>
 * Callees:
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z @ 0x180019E24 (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z @ 0x18004BC04 (--0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x18004D620 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x1800638E0 (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x1800A0660 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ??1?$unique_ptr@VCSurfaceDrawListBrush@@U?$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x1800B9E10 (--1-$unique_ptr@VCSurfaceDrawListBrush@@U-$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QE.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCSurfaceDrawListBrush@@U?$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x1800B9E3C (--1-$out_param_t@V-$unique_ptr@VCSurfaceDrawListBrush@@U-$default_delete@VCSurfaceDrawListBrush@.c)
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x1800BA160 (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 *     ?FromD2D1InterpolationMode@InterpolationMode@@YA?AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x1800BA8D0 (-FromD2D1InterpolationMode@InterpolationMode@@YA-AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z.c)
 *     ?D2DInterpolationModeFromMilInterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800D70A0 (-D2DInterpolationModeFromMilInterpolationMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapIn.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x18013B2B8 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x18013B6E0 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x18013DC50 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18016AC8C (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??1?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x18016BE30 (--1-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18016C070 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1802DF530 (_alloca_probe.c)
 */

__int64 __fastcall CVisualBitmap::GenerateDrawList(
        CVisualBitmap *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  int v7; // edi
  int v8; // eax
  int v9; // ebx
  CMultiPrimitiveDrawListBrush *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  int DrawList; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  char v17; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v18; // [rsp+31h] [rbp-CFh]
  CMultiPrimitiveDrawListBrush *v19; // [rsp+40h] [rbp-C0h] BYREF
  CSurfaceDrawListBrush *v20; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+50h] [rbp-B0h] BYREF
  float v22; // [rsp+58h] [rbp-A8h]
  float v23; // [rsp+5Ch] [rbp-A4h]
  CSurfaceDrawListBrush **v24; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+68h] [rbp-98h] BYREF
  char v26; // [rsp+70h] [rbp-90h]
  _BYTE v27[24]; // [rsp+78h] [rbp-88h] BYREF
  __int128 v28; // [rsp+90h] [rbp-70h] BYREF
  int v29; // [rsp+A0h] [rbp-60h]
  int v30; // [rsp+ECh] [rbp-14h]
  char v31; // [rsp+F0h] [rbp-10h]
  CDrawingContext *v32[6]; // [rsp+100h] [rbp+0h] BYREF
  int v33; // [rsp+134h] [rbp+34h]
  _BYTE v34[4496]; // [rsp+150h] [rbp+50h] BYREF

  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v34);
  v20 = 0LL;
  v21 = 0LL;
  v7 = *((_DWORD *)a2 + 60);
  CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v32, a2);
  v29 = 0;
  v30 = 257;
  v28 = 0LL;
  v31 = 0;
  CDrawListBitmap::CDrawListBitmap(
    (CDrawListBitmap *)v27,
    (struct IBitmapResource *)(((unsigned __int64)this + 80) & -(__int64)(this != 0LL)));
  CDrawListBitmap::GetSize((CDrawListBitmap *)v27, &v19);
  v22 = (float)(int)v19;
  CDrawListBitmap::GetSize((CDrawListBitmap *)v27, &v19);
  v25 = 0LL;
  v26 = 1;
  v24 = &v20;
  v23 = (float)SHIDWORD(v19);
  v8 = D2DInterpolationModeFromMilInterpolationMode(v7);
  v17 = InterpolationMode::FromD2D1InterpolationMode(v8);
  v18 = 257;
  v9 = CSurfaceDrawListBrush::CreateWithContentRect((__int64)v27, (__int16 *)&v17, (float *)&v21, (__int64)&v25);
  wil::details::out_param_t<std::unique_ptr<CSurfaceDrawListBrush>>::~out_param_t<std::unique_ptr<CSurfaceDrawListBrush>>((__int64)&v24);
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0xB5u, 0LL);
  }
  else
  {
    v10 = v20;
    v20 = 0LL;
    v19 = v10;
    CBrushDrawListGenerator::AttachInput((__int64)v32, 0, (__int64 *)&v19);
    std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(&v19, v11, v12);
    v33 = 128;
    DrawList = CBrushDrawListGenerator::GenerateDrawList(
                 v32,
                 (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)&v28,
                 (struct CDrawListEntryBuilder *)v34);
    v9 = DrawList;
    if ( DrawList < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, DrawList, 0xB9u, 0LL);
    }
    else
    {
      CDrawListCache::Update(a4, a2, (struct CDrawListEntryBuilder *)v34);
      v9 = 0;
    }
  }
  CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)v27);
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v32, v14, v15);
  std::unique_ptr<CSurfaceDrawListBrush>::~unique_ptr<CSurfaceDrawListBrush>(&v20);
  CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v34);
  return (unsigned int)v9;
}
