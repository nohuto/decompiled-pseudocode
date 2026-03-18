/*
 * XREFs of ?GetScaledLetterboxingMargins@CDxHandleYUVBitmapRealization@@UEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18005E140
 * Callers:
 *     ?GetMPORects@CDxHandleYUVBitmapRealization@@UEBAXAEBVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@11@Z @ 0x18005DB50 (-GetMPORects@CDxHandleYUVBitmapRealization@@UEBAXAEBVCMILMatrix@@PEAV-$TMilRect_@MUD2D_RECT_F@@U.c)
 *     ?DrawLetterboxingMarginsInternal@CCompositionSurfaceBitmap@@AEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x18005DF6C (-DrawLetterboxingMarginsInternal@CCompositionSurfaceBitmap@@AEAAJPEAVCDrawingContext@@AEBV-$TMil.c)
 *     ?GetScaledLetterboxingMargins@CGlobalCompositionSurfaceInfo@@UEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18005E0C0 (-GetScaledLetterboxingMargins@CGlobalCompositionSurfaceInfo@@UEBA_NPEAV-$TMilRect_@MUD2D_RECT_F@.c)
 *     ?GetBounds@CCompositionSurfaceBitmap@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800D1DF0 (-GetBounds@CCompositionSurfaceBitmap@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RE.c)
 *     ?CalcImageTransform@CCompositionSurfaceBitmap@@QEBA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800D2090 (-CalcImageTransform@CCompositionSurfaceBitmap@@QEBA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?GetScaledLetterboxingMargins@CCompositionSurfaceBitmap@@QEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800D2700 (-GetScaledLetterboxingMargins@CCompositionSurfaceBitmap@@QEBA_NPEAV-$TMilRect_@MUD2D_RECT_F@@UD3.c)
 *     ?GetDirtyRegion@CCompositionSurfaceBitmap@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z @ 0x1800D29C0 (-GetDirtyRegion@CCompositionSurfaceBitmap@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z.c)
 * Callees:
 *     ?CalcDecodedSourceRectAndTransform@CDxHandleYUVBitmapRealization@@IEBAXPEAVCMILMatrix@@PEAV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x18005E5AC (-CalcDecodedSourceRectAndTransform@CDxHandleYUVBitmapRealization@@IEBAXPEAVCMILMatrix@@PEAV-$TMi.c)
 *     sqrtf_0 @ 0x1802DF698 (sqrtf_0.c)
 */

char __fastcall CDxHandleYUVBitmapRealization::GetScaledLetterboxingMargins(__int64 a1, __int64 a2)
{
  char result; // al
  float v5; // xmm7_4
  float v6; // xmm0_4
  float v7; // xmm1_4
  float v8; // xmm8_4
  float v9; // xmm6_4
  float v10; // xmm0_4
  float v11; // xmm1_4
  _DWORD v12[4]; // [rsp+30h] [rbp-88h] BYREF
  float v13; // [rsp+40h] [rbp-78h]
  float v14; // [rsp+44h] [rbp-74h]
  int v15; // [rsp+70h] [rbp-48h]

  result = 0;
  if ( (*(_DWORD *)(a1 - 88) & 0x8000) != 0 )
  {
    v15 = 0;
    CDxHandleYUVBitmapRealization::CalcDecodedSourceRectAndTransform(
      (CBitmapRealization *)(a1 - 328),
      (struct CMILMatrix *)v12);
    v5 = *(float *)(a1 - 128);
    v6 = *(float *)v12;
    v7 = *(float *)&v12[1];
    *(float *)a2 = v5;
    *(_DWORD *)(a2 + 4) = *(_DWORD *)(a1 - 124);
    v8 = *(float *)(a1 - 120);
    *(float *)(a2 + 8) = v8;
    *(_DWORD *)(a2 + 12) = *(_DWORD *)(a1 - 116);
    v9 = sqrtf_0((float)(v6 * v6) + (float)(v7 * v7));
    v10 = sqrtf_0((float)(v13 * v13) + (float)(v14 * v14));
    if ( COERCE_FLOAT(LODWORD(v9) & _xmm) >= 0.0000011920929 )
    {
      *(float *)a2 = v5 / v9;
      *(float *)(a2 + 8) = v8 / v9;
    }
    if ( COERCE_FLOAT(LODWORD(v10) & _xmm) >= 0.0000011920929 )
    {
      v11 = *(float *)(a2 + 12) / v10;
      *(float *)(a2 + 4) = *(float *)(a2 + 4) / v10;
      *(float *)(a2 + 12) = v11;
    }
    return 1;
  }
  return result;
}
