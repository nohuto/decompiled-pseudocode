/*
 * XREFs of ?Draw@CSwapchainRenderStrategy@@UEBAJPEAVCSurfaceBrush@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801E2D20
 * Callers:
 *     <none>
 * Callees:
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x180015130 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z.c)
 *     ?DrawContentBorders@CCompositionSurfaceBitmap@@SAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@1AEBU_D3DCOLORVALUE@@@Z @ 0x1800296B0 (-DrawContentBorders@CCompositionSurfaceBitmap@@SAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUD2D_REC.c)
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x180061220 (-IsEmpty@-$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??1?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAA@XZ @ 0x180073CD0 (--1-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAA@XZ.c)
 *     ?GetBorderColor@CCompositionSurfaceBitmap@@QEBA?AU_D3DCOLORVALUE@@XZ @ 0x180074330 (-GetBorderColor@CCompositionSurfaceBitmap@@QEBA-AU_D3DCOLORVALUE@@XZ.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x18007BD70 (--1-$out_param_t@V-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@@details@wil@@QEA.c)
 *     ?GetLetterboxingMargins@CGlobalCompositionSurfaceInfo@@UEBA_NPEAUD2D_RECT_F@@@Z @ 0x1800A1870 (-GetLetterboxingMargins@CGlobalCompositionSurfaceInfo@@UEBA_NPEAUD2D_RECT_F@@@Z.c)
 *     ?GetSizePreference@CCompositionSurfaceBitmap@@QEBA?AW4SizePreference@@XZ @ 0x1800A2540 (-GetSizePreference@CCompositionSurfaceBitmap@@QEBA-AW4SizePreference@@XZ.c)
 *     ?Draw@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800D3ED0 (-Draw@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HasSwapChainAttributes@CCompositionSurfaceBitmap@@QEBA_NXZ @ 0x1801E3454 (-HasSwapChainAttributes@CCompositionSurfaceBitmap@@QEBA_NXZ.c)
 *     ?DrawLetterboxingMargins@CCompositionSurfaceBitmap@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18021E6CC (-DrawLetterboxingMargins@CCompositionSurfaceBitmap@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SoftwareXORCursor@@@details@wil@@QEAA_NXZ @ 0x180247DA4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SoftwareXORCursor@@@details@wil@@.c)
 *     ?DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@PEAV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18024BB4C (-DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@PEAV-$TMilRect_@HUtagRECT@@UD2D_POINT.c)
 *     ?PushOverlayClip@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18024FD30 (-PushOverlayClip@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBV-$TMilRect_@HUtagRECT@@UD2D_POIN.c)
 *     ?PopOverlayClip@CDrawingContext@@QEAAXXZ @ 0x180251B84 (-PopOverlayClip@CDrawingContext@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSwapchainRenderStrategy::Draw(
        CSwapchainRenderStrategy *this,
        struct CSurfaceBrush *a2,
        struct CDrawingContext *a3,
        const struct D2D_SIZE_F *a4,
        struct CDrawListCache *a5)
{
  unsigned int v5; // edi
  _QWORD *v6; // r14
  char v7; // r12
  bool v8; // zf
  CGlobalCompositionSurfaceInfo *v11; // rcx
  char (__fastcall *v12)(CGlobalCompositionSurfaceInfo *, struct D2D_RECT_F *); // rax
  char LetterboxingMargins; // al
  char v14; // r13
  char v15; // bl
  int v16; // eax
  CSurfaceBrush *v17; // rbx
  int v18; // eax
  int v19; // eax
  int v20; // ebx
  int v21; // eax
  float width; // xmm0_4
  float height; // xmm1_4
  int v24; // eax
  int v25; // eax
  char v27; // [rsp+30h] [rbp-71h]
  CSurfaceBrush *v28; // [rsp+38h] [rbp-69h] BYREF
  struct CDrawListCache *v29; // [rsp+40h] [rbp-61h] BYREF
  float v30; // [rsp+48h] [rbp-59h]
  float v31; // [rsp+4Ch] [rbp-55h]
  _OWORD v32[2]; // [rsp+50h] [rbp-51h] BYREF
  __int64 v33; // [rsp+70h] [rbp-31h]
  struct _D3DCOLORVALUE v34; // [rsp+78h] [rbp-29h] BYREF
  char v35; // [rsp+88h] [rbp-19h]
  struct D2D_RECT_F v36; // [rsp+90h] [rbp-11h] BYREF
  __int128 v37; // [rsp+A0h] [rbp-1h] BYREF

  v5 = 0;
  v6 = (_QWORD *)*((_QWORD *)a2 + 16);
  v7 = 0;
  v8 = *((_DWORD *)a2 + 30) == 1;
  v28 = a2;
  v29 = a5;
  v37 = 0LL;
  if ( !v8
    && CCompositionSurfaceBitmap::HasSwapChainAttributes((CCompositionSurfaceBitmap *)v6)
    && (unsigned int)CCompositionSurfaceBitmap::GetSizePreference((__int64)v6)
    && (CCompositionSurfaceBitmap::GetBorderColor((CCompositionSurfaceBitmap *)v6, &v34),
        COERCE_FLOAT(LODWORD(v34.a) & _xmm) >= 0.0000011920929) )
  {
    v27 = 1;
    v37 = *(__int128 *)&v34.r;
  }
  else
  {
    v27 = 0;
  }
  v36 = 0LL;
  v11 = (CGlobalCompositionSurfaceInfo *)v6[12];
  if ( v11 )
  {
    v12 = *(char (__fastcall **)(CGlobalCompositionSurfaceInfo *, struct D2D_RECT_F *))(*(_QWORD *)v11 + 472LL);
    if ( v12 == CGlobalCompositionSurfaceInfo::GetLetterboxingMargins )
      LetterboxingMargins = CGlobalCompositionSurfaceInfo::GetLetterboxingMargins(v11, &v36);
    else
      LetterboxingMargins = v12(v11, &v36);
    v14 = LetterboxingMargins;
  }
  else
  {
    v14 = 0;
  }
  *(struct _D3DCOLORVALUE *)&v34.r = 0LL;
  v15 = CDrawingContext::DrawAsOverlay(a3, (CCompositionSurfaceBitmap *)(v6 + 9));
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_SoftwareXORCursor>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_SoftwareXORCursor>::GetImpl'::`2'::impl) )
  {
    if ( v15 )
    {
      if ( TMilRect<int,tagRECT,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>::IsEmpty(&v34) )
      {
        v17 = v28;
        goto LABEL_28;
      }
      v16 = CDrawingContext::PushOverlayClip(a3);
      v5 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x51Au, 0LL);
        return v5;
      }
      v7 = 1;
    }
    v17 = v28;
    v18 = CBrush::Draw((CEffectBrush **)v28, a3, a4, v29);
    v5 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x520u, 0LL);
      goto LABEL_39;
    }
    if ( v7 )
    {
      CDrawingContext::PopOverlayClip(a3);
      v7 = 0;
    }
  }
  else
  {
    v8 = v15 == 0;
    v17 = v28;
    if ( v8 )
    {
      v19 = CBrush::Draw((CEffectBrush **)v28, a3, a4, v29);
      v5 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0x52Du, 0LL);
        return v5;
      }
    }
  }
LABEL_28:
  if ( !v27 )
  {
LABEL_36:
    if ( v14 )
    {
      v25 = CCompositionSurfaceBitmap::DrawLetterboxingMargins((CCompositionSurfaceBitmap *)v6, a3, a4);
      v5 = v25;
      if ( v25 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v25, 0x552u, 0LL);
    }
    goto LABEL_39;
  }
  *(_QWORD *)&v34.b = 0LL;
  v35 = 1;
  v28 = 0LL;
  v33 = 0LL;
  *(_QWORD *)&v34.r = &v28;
  memset(v32, 0, sizeof(v32));
  v20 = CSurfaceBrush::ComputeLayout(v17, a4, (struct CContent::LayoutData *)v32, (struct CShape **)&v34.b);
  wil::details::out_param_t<std::unique_ptr<CShape>>::~out_param_t<std::unique_ptr<CShape>>((__int64)&v34);
  if ( v20 < 0 )
    goto LABEL_35;
  *(struct _D3DCOLORVALUE *)&v34.r = 0LL;
  v21 = (*(__int64 (__fastcall **)(CSurfaceBrush *, struct _D3DCOLORVALUE *, _QWORD))(*(_QWORD *)v28 + 48LL))(
          v28,
          &v34,
          0LL);
  v5 = v21;
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, 0x540u, 0LL);
    goto LABEL_34;
  }
  width = a4->width;
  height = a4->height;
  v29 = 0LL;
  v30 = width + 0.0;
  v31 = height + 0.0;
  v24 = CCompositionSurfaceBitmap::DrawContentBorders((__int64)a3, (float *)&v29, &v34.r, (__int64)&v37);
  v5 = v24;
  if ( v24 >= 0 )
  {
LABEL_35:
    std::unique_ptr<CShape>::~unique_ptr<CShape>(&v28);
    goto LABEL_36;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v24, 0x54Cu, 0LL);
LABEL_34:
  std::unique_ptr<CShape>::~unique_ptr<CShape>(&v28);
LABEL_39:
  if ( v7 )
    CDrawingContext::PopOverlayClip(a3);
  return v5;
}
