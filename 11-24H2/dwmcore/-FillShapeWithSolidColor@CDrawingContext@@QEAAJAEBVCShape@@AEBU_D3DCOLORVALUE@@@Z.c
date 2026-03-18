/*
 * XREFs of ?FillShapeWithSolidColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@@Z @ 0x18006A30C
 * Callers:
 *     ?RenderRevealBorder@CWindowNode@@AEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEBVCShape@@@Z @ 0x1800693EC (-RenderRevealBorder@CWindowNode@@AEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@HUtagRECT@@UD2D_POINT.c)
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1802375F0 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ??1?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180009360 (--1-$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V-$buffer_impl@UVisualTreePathUnit@CVisu.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180043280 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?resize@?$vector_facade@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@V?$buffer_impl@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_K@Z @ 0x18006A450 (-resize@-$vector_facade@V-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@.c)
 *     ?FillRectanglesWithSolidColor@CDrawingContext@@QEAAJAEBV?$span@$$CBUD2D_RECT_F@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x18006B728 (-FillRectanglesWithSolidColor@CDrawingContext@@QEAAJAEBV-$span@$$CBUD2D_RECT_F@@$0-0@gsl@@AEBU_D.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::FillShapeWithSolidColor(
        CDrawingContext *this,
        const struct CShape *a2,
        const struct _D3DCOLORVALUE *a3)
{
  __int64 v3; // rax
  unsigned int v6; // ebx
  __int64 v8; // rbx
  int v9; // eax
  unsigned int v10; // [rsp+30h] [rbp-49h] BYREF
  _QWORD v11[3]; // [rsp+38h] [rbp-41h] BYREF
  _QWORD v12[3]; // [rsp+50h] [rbp-29h] BYREF
  _BYTE v13[64]; // [rsp+68h] [rbp-11h] BYREF
  char v14; // [rsp+A8h] [rbp+2Fh] BYREF

  v3 = *(_QWORD *)a2;
  v10 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(const struct CShape *, unsigned int *))(v3 + 64))(a2, &v10) )
  {
    v12[0] = v13;
    v12[1] = v13;
    v12[2] = &v14;
    detail::vector_facade<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,4,1,detail::liberal_expansion_policy>>::resize(
      v12,
      v10);
    (*(void (__fastcall **)(const struct CShape *, _QWORD, _QWORD))(*(_QWORD *)a2 + 80LL))(a2, v12[0], v10);
    v8 = v12[0];
    gsl::details::extent_type<-1>::extent_type<-1>(v11, v10);
    v11[1] = v8;
    if ( v11[0] == -1LL || !v8 && v11[0] )
    {
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
    v9 = CDrawingContext::FillRectanglesWithSolidColor(this);
    v6 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x8F6u, 0LL);
    detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::~vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>((__int64)v12);
  }
  else
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x8FAu, 0LL);
  }
  return v6;
}
