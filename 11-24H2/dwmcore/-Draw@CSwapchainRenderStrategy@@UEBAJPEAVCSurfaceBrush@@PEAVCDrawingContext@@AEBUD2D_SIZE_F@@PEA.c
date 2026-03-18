/*
 * XREFs of ?Draw@CSwapchainRenderStrategy@@UEBAJPEAVCSurfaceBrush@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18023E7F0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x180027EE0 (-IsEmpty@-$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Draw@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180051480 (-Draw@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?DrawContentBorders@CCompositionSurfaceBitmap@@SAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@1AEBU_D3DCOLORVALUE@@@Z @ 0x18005DD70 (-DrawContentBorders@CCompositionSurfaceBitmap@@SAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUD2D_REC.c)
 *     ?HasRevealBorder@CSwapchainRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@PEAU_D3DCOLORVALUE@@@Z @ 0x18006A890 (-HasRevealBorder@CSwapchainRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@PEAU_D3DCOLORVALUE@@@Z.c)
 *     ??1?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAA@XZ @ 0x18006DC10 (--1-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x180141330 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x18014CE90 (--1-$out_param_t@V-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@@details@wil@@QEA.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x1801B0C50 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?GetLetterboxingMargins@CCompositionSurfaceBitmap@@QEBA_NPEAUD2D_RECT_F@@@Z @ 0x1801E6184 (-GetLetterboxingMargins@CCompositionSurfaceBitmap@@QEBA_NPEAUD2D_RECT_F@@@Z.c)
 *     ?DrawLetterboxingMargins@CCompositionSurfaceBitmap@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18021333C (-DrawLetterboxingMargins@CCompositionSurfaceBitmap@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@PEAV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180242F58 (-DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@PEAV-$TMilRect_@HUtagRECT@@UD2D_POINT.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?PushOverlayClip@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180266F20 (-PushOverlayClip@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBV-$TMilRect_@HUtagRECT@@UD2D_POIN.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSwapchainRenderStrategy::Draw(
        CSwapchainRenderStrategy *this,
        struct CSurfaceBrush *a2,
        struct CDrawingContext *a3,
        struct D2D_SIZE_F *a4,
        struct CDrawListCache *a5)
{
  CCompositionSurfaceBitmap *v6; // r13
  unsigned int v9; // edi
  char v10; // r15
  int v11; // eax
  int v12; // eax
  int v13; // ebx
  int v14; // eax
  float width; // xmm0_4
  float height; // xmm1_4
  int v17; // eax
  int v18; // eax
  char HasRevealBorder; // [rsp+30h] [rbp-71h]
  char LetterboxingMargins; // [rsp+31h] [rbp-70h]
  struct CDrawListCache *v22; // [rsp+38h] [rbp-69h] BYREF
  __int128 v23; // [rsp+40h] [rbp-61h] BYREF
  _OWORD v24[2]; // [rsp+50h] [rbp-51h] BYREF
  __int64 v25; // [rsp+70h] [rbp-31h]
  struct CShape *v26[2]; // [rsp+78h] [rbp-29h] BYREF
  char v27; // [rsp+88h] [rbp-19h]
  struct _D3DCOLORVALUE v28; // [rsp+90h] [rbp-11h] BYREF
  struct D2D_RECT_F v29; // [rsp+A0h] [rbp-1h] BYREF

  v6 = (CCompositionSurfaceBitmap *)*((_QWORD *)a2 + 16);
  v22 = a5;
  *(struct _D3DCOLORVALUE *)&v28.r = 0LL;
  v9 = 0;
  v10 = 0;
  HasRevealBorder = CSwapchainRenderStrategy::HasRevealBorder(this, a2, &v28);
  v29 = 0LL;
  LetterboxingMargins = CCompositionSurfaceBitmap::GetLetterboxingMargins(v6, &v29);
  v23 = 0LL;
  if ( (unsigned __int8)CDrawingContext::DrawAsOverlay(
                          a3,
                          (CCompositionSurfaceBitmap *)(((unsigned __int64)v6 + 72) & ((unsigned __int128)-(__int128)(unsigned __int64)v6 >> 64))) )
  {
    if ( TMilRect<int,tagRECT,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>::IsEmpty(&v23) )
      goto LABEL_9;
    v11 = CDrawingContext::PushOverlayClip(a3);
    v9 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x518u, 0LL);
      return v9;
    }
    v10 = 1;
  }
  v12 = CBrush::Draw((CEffectBrush **)a2, a3, a4, v22);
  v9 = v12;
  if ( v12 >= 0 )
  {
    if ( v10 )
    {
      CDrawingContext::PopGpuClipRectInternal(a3, 0);
      v10 = 0;
    }
LABEL_9:
    if ( HasRevealBorder )
    {
      v22 = 0LL;
      v25 = 0LL;
      v26[1] = 0LL;
      v26[0] = (struct CShape *)&v22;
      v27 = 1;
      memset(v24, 0, sizeof(v24));
      v13 = CSurfaceBrush::ComputeLayout(a2, a4, (struct CContent::LayoutData *)v24, &v26[1]);
      wil::details::out_param_t<std::unique_ptr<CShape>>::~out_param_t<std::unique_ptr<CShape>>((__int64)v26);
      if ( v13 >= 0 )
      {
        *(_OWORD *)v26 = 0LL;
        v14 = (*(__int64 (__fastcall **)(struct CDrawListCache *, struct CShape **, _QWORD))(*(_QWORD *)v22 + 48LL))(
                v22,
                v26,
                0LL);
        v9 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x536u, 0LL);
          goto LABEL_15;
        }
        width = a4->width;
        height = a4->height;
        *(_QWORD *)&v23 = 0LL;
        *((float *)&v23 + 2) = width + 0.0;
        *((float *)&v23 + 3) = height + 0.0;
        v17 = CCompositionSurfaceBitmap::DrawContentBorders((__int64)a3, (float *)&v23, (float *)v26, (__int64)&v28);
        v9 = v17;
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0x542u, 0LL);
LABEL_15:
          std::unique_ptr<CShape>::~unique_ptr<CShape>(&v22);
          goto LABEL_21;
        }
      }
      std::unique_ptr<CShape>::~unique_ptr<CShape>(&v22);
    }
    if ( LetterboxingMargins )
    {
      v18 = CCompositionSurfaceBitmap::DrawLetterboxingMargins(v6, a3, a4);
      v9 = v18;
      if ( v18 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x548u, 0LL);
    }
    goto LABEL_21;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x51Eu, 0LL);
LABEL_21:
  if ( v10 )
    CDrawingContext::PopGpuClipRectInternal(a3, 0);
  return v9;
}
