/*
 * XREFs of ?DrawLetterboxingMarginsInternal@CCompositionSurfaceBitmap@@AEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x18005DF6C
 * Callers:
 *     ?DrawLetterboxingMargins@CCompositionSurfaceBitmap@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18021333C (-DrawLetterboxingMargins@CCompositionSurfaceBitmap@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180236DE0 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@.c)
 * Callees:
 *     ?DrawContentBorders@CCompositionSurfaceBitmap@@SAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@1AEBU_D3DCOLORVALUE@@@Z @ 0x18005DD70 (-DrawContentBorders@CCompositionSurfaceBitmap@@SAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUD2D_REC.c)
 *     ?GetScaledLetterboxingMargins@CGlobalCompositionSurfaceInfo@@UEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18005E0C0 (-GetScaledLetterboxingMargins@CGlobalCompositionSurfaceInfo@@UEBA_NPEAV-$TMilRect_@MUD2D_RECT_F@.c)
 *     ?GetScaledLetterboxingMargins@CDxHandleYUVBitmapRealization@@UEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18005E140 (-GetScaledLetterboxingMargins@CDxHandleYUVBitmapRealization@@UEBA_NPEAV-$TMilRect_@MUD2D_RECT_F@.c)
 *     ?GetScaledLetterboxingMargins@CDxHandleBitmapRealization@@UEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18005E290 (-GetScaledLetterboxingMargins@CDxHandleBitmapRealization@@UEBA_NPEAV-$TMilRect_@MUD2D_RECT_F@@UD.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800F5C80 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1801379A0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::DrawLetterboxingMarginsInternal(
        __int64 a1,
        CDrawingContext *a2,
        float *a3,
        const struct CMILMatrix *a4)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 (__fastcall *v9)(__int64, __int128 *); // rax
  char ScaledLetterboxingMargins; // al
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm1_4
  int v15; // eax
  float v16[4]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v17; // [rsp+40h] [rbp-20h] BYREF

  v4 = *(_QWORD *)(a1 + 96);
  v5 = 0;
  v17 = 0LL;
  if ( v4 )
  {
    v9 = *(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v4 + 480LL);
    if ( (char *)v9 == (char *)CGlobalCompositionSurfaceInfo::GetScaledLetterboxingMargins )
    {
      ScaledLetterboxingMargins = CGlobalCompositionSurfaceInfo::GetScaledLetterboxingMargins(v4, &v17);
    }
    else if ( (char *)v9 == (char *)CDxHandleBitmapRealization::GetScaledLetterboxingMargins )
    {
      ScaledLetterboxingMargins = CDxHandleBitmapRealization::GetScaledLetterboxingMargins(v4, &v17);
    }
    else
    {
      ScaledLetterboxingMargins = (char *)v9 == (char *)CDxHandleYUVBitmapRealization::GetScaledLetterboxingMargins
                                ? CDxHandleYUVBitmapRealization::GetScaledLetterboxingMargins(v4, &v17)
                                : v9(v4, &v17);
    }
    if ( ScaledLetterboxingMargins )
    {
      CDrawingContext::PushTransformInternal(a2, 0LL, a4, 1, 1);
      v12 = a3[1] - *((float *)&v17 + 1);
      v16[0] = *a3 - *(float *)&v17;
      v13 = *((float *)&v17 + 2) + a3[2];
      v16[1] = v12;
      v14 = *((float *)&v17 + 3) + a3[3];
      v16[2] = v13;
      v16[3] = v14;
      v15 = CCompositionSurfaceBitmap::DrawContentBorders((__int64)a2, v16, a3, (__int64)&_xmm);
      v5 = v15;
      if ( v15 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x2E4u, 0LL);
      CDrawingContext::PopTransformInternal(a2, 1);
    }
  }
  return v5;
}
