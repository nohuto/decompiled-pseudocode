/*
 * XREFs of ?GetBVIBrushParameters@CCompositionMagnifierBrush@@AEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180295B10
 * Callers:
 *     ?GetBrushParameters@CCompositionMagnifierBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180295D90 (-GetBrushParameters@CCompositionMagnifierBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetLayeredBrushParameters@CCompositionMagnifierBrush@@AEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180295EC0 (-GetLayeredBrushParameters@CCompositionMagnifierBrush@@AEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ?GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ @ 0x18001BF90 (-GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z @ 0x18004BC04 (--0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x18004D620 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x1800A0750 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ??1?$unique_ptr@VCSurfaceDrawListBrush@@U?$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x1800B9E10 (--1-$unique_ptr@VCSurfaceDrawListBrush@@U-$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QE.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCSurfaceDrawListBrush@@U?$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x1800B9E3C (--1-$out_param_t@V-$unique_ptr@VCSurfaceDrawListBrush@@U-$default_delete@VCSurfaceDrawListBrush@.c)
 *     ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z @ 0x1800BA640 (-CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMat.c)
 *     ?FromD2D1InterpolationMode@InterpolationMode@@YA?AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x1800BA8D0 (-FromD2D1InterpolationMode@InterpolationMode@@YA-AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z.c)
 *     ?PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z @ 0x1800FE9E0 (-PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z.c)
 *     ?GetBackdropVisualImage@CVisual@@QEBAPEAVCBackdropVisualImage@@AEBVCVisualTreePath@@@Z @ 0x180136B10 (-GetBackdropVisualImage@CVisual@@QEBAPEAVCBackdropVisualImage@@AEBVCVisualTreePath@@@Z.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18016AC8C (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??1?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x18016BE30 (--1-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ.c)
 */

__int64 __fastcall CCompositionMagnifierBrush::GetBVIBrushParameters(
        CCompositionMagnifierBrush *this,
        CDrawingContext **a2,
        double a3)
{
  CVisual *CurrentVisual; // rax
  __int64 v6; // rcx
  struct CBackdropVisualImage *BackdropVisualImage; // rbx
  __m128 v8; // xmm7
  double v9; // xmm6_8
  float v10; // xmm8_4
  double v11; // xmm0_8
  float v12; // xmm9_4
  float v13; // xmm10_4
  int v14; // esi
  float v15; // xmm3_4
  float v16; // xmm6_4
  float v17; // xmm0_4
  float v18; // xmm4_4
  float v19; // xmm2_4
  float v20; // xmm1_4
  float v21; // xmm0_4
  float v22; // xmm1_4
  float v23; // xmm3_4
  float v24; // xmm0_4
  float v25; // xmm4_4
  float v26; // xmm0_4
  int v27; // ebx
  __int64 v28; // rdx
  __int64 v29; // r8
  CMultiPrimitiveDrawListBrush *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int128 v34; // [rsp+28h] [rbp-69h] BYREF
  char v35; // [rsp+38h] [rbp-59h]
  _BYTE v36[24]; // [rsp+40h] [rbp-51h] BYREF
  _DWORD v37[32]; // [rsp+58h] [rbp-39h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]
  CMultiPrimitiveDrawListBrush *v39; // [rsp+F8h] [rbp+67h] BYREF
  CSurfaceDrawListBrush *v40; // [rsp+100h] [rbp+6Fh] BYREF

  CurrentVisual = CDrawingContext::GetCurrentVisual(*a2);
  BackdropVisualImage = CVisual::GetBackdropVisualImage(CurrentVisual, *(const struct CVisualTreePath **)(v6 + 7968));
  v8 = (__m128)_mm_loadu_si128((const __m128i *)BackdropVisualImage + 133);
  *(_QWORD *)&v9 = _mm_shuffle_ps(v8, v8, 85).m128_u64[0];
  v10 = (float)(int)PixelAlign(*(double *)v8.m128_u64, 0, a3);
  *(_QWORD *)&v11 = _mm_shuffle_ps(v8, v8, 170).m128_u64[0];
  v12 = (float)(int)PixelAlign(v9, 0, a3);
  *(float *)&v11 = (float)(*(float *)&v11 - v8.m128_f32[0]) + v8.m128_f32[0];
  v8.m128_u64[0] = _mm_shuffle_ps(v8, v8, 255).m128_u64[0];
  v13 = (float)(int)PixelAlign(v11, 1, a3);
  v8.m128_f32[0] = (float)(v8.m128_f32[0] - *(float *)&v9) + *(float *)&v9;
  v14 = 0;
  v15 = v13 - v10;
  v16 = (float)(int)PixelAlign(*(double *)v8.m128_u64, 1, a3);
  v17 = v13 - v10;
  v18 = v16 - v12;
  v19 = v16 - v12;
  if ( !*((_BYTE *)this + 108) )
  {
    v20 = *((float *)this + 26);
    if ( v20 > 1.0 )
    {
      v17 = v15 * v20;
      v14 = 1;
      v19 = v18 * v20;
    }
  }
  v21 = v17 * *((float *)BackdropVisualImage + 30);
  v37[1] = 0;
  v37[2] = 0;
  v22 = v12 / *((float *)BackdropVisualImage + 31);
  v37[3] = 0;
  v37[5] = 0;
  v37[8] = 1065353216;
  v23 = v15 / v21;
  v24 = *((float *)BackdropVisualImage + 31) * v19;
  *(float *)v37 = v23;
  *(float *)&v37[7] = v22;
  v25 = v18 / v24;
  v26 = v10 / *((float *)BackdropVisualImage + 30);
  v40 = 0LL;
  *(float *)&v37[4] = v25;
  *(float *)&v37[6] = v26;
  CDrawListBitmap::CDrawListBitmap(
    (CDrawListBitmap *)v36,
    (struct IBitmapResource *)(((unsigned __int64)BackdropVisualImage + 72) & -(__int64)(BackdropVisualImage != 0LL)));
  v34 = (unsigned __int64)&v40;
  v36[16] = 1;
  v35 = 1;
  LOBYTE(v39) = InterpolationMode::FromD2D1InterpolationMode(v14);
  *(_WORD *)((char *)&v39 + 1) = 257;
  v27 = CSurfaceDrawListBrush::CreateWithTextureTransform(
          (__int64)v36,
          (__int16 *)&v39,
          (__int64)v37,
          (__int64 *)&v34 + 1);
  wil::details::out_param_t<std::unique_ptr<CSurfaceDrawListBrush>>::~out_param_t<std::unique_ptr<CSurfaceDrawListBrush>>((__int64)&v34);
  if ( v27 >= 0 )
  {
    *(_QWORD *)&v34 = __PAIR64__(LODWORD(v12), LODWORD(v10));
    *((_QWORD *)&v34 + 1) = __PAIR64__(LODWORD(v16), LODWORD(v13));
    *(_OWORD *)((char *)v40 + 120) = v34;
    CBrushDrawListGenerator::Reset((CBrushDrawListGenerator *)a2, v28, v29);
    v30 = v40;
    v40 = 0LL;
    v39 = v30;
    CBrushDrawListGenerator::AttachInput((__int64)a2, 0, (__int64 *)&v39);
    std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(&v39, v31, v32);
    v27 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x226,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionmagnifierbrush.cpp",
      (const char *)(unsigned int)v27);
  }
  CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)v36);
  std::unique_ptr<CSurfaceDrawListBrush>::~unique_ptr<CSurfaceDrawListBrush>(&v40);
  return (unsigned int)v27;
}
