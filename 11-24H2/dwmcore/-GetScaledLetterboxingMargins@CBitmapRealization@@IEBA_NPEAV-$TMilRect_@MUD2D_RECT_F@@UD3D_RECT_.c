/*
 * XREFs of ?GetScaledLetterboxingMargins@CBitmapRealization@@IEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800D2870
 * Callers:
 *     ?GetScaledLetterboxingMargins@CGlobalCompositionSurfaceInfo@@UEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18005E0C0 (-GetScaledLetterboxingMargins@CGlobalCompositionSurfaceInfo@@UEBA_NPEAV-$TMilRect_@MUD2D_RECT_F@.c)
 *     ?GetMPORects@CDxHandleBitmapRealization@@UEBAXAEBVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@11@Z @ 0x18005EEC0 (-GetMPORects@CDxHandleBitmapRealization@@UEBAXAEBVCMILMatrix@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D.c)
 *     ?GetBounds@CCompositionSurfaceBitmap@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800D1DF0 (-GetBounds@CCompositionSurfaceBitmap@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RE.c)
 *     ?CalcImageTransform@CCompositionSurfaceBitmap@@QEBA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800D2090 (-CalcImageTransform@CCompositionSurfaceBitmap@@QEBA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?GetScaledLetterboxingMargins@CCompositionSurfaceBitmap@@QEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800D2700 (-GetScaledLetterboxingMargins@CCompositionSurfaceBitmap@@QEBA_NPEAV-$TMilRect_@MUD2D_RECT_F@@UD3.c)
 *     ?GetDirtyRegion@CCompositionSurfaceBitmap@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z @ 0x1800D29C0 (-GetDirtyRegion@CCompositionSurfaceBitmap@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z.c)
 * Callees:
 *     sqrtf_0 @ 0x1802DF698 (sqrtf_0.c)
 */

char __fastcall CBitmapRealization::GetScaledLetterboxingMargins(__int64 a1, __int64 a2)
{
  float v4; // xmm1_4
  float v5; // xmm0_4
  float v6; // xmm6_4
  float v7; // xmm7_4
  float v8; // xmm9_4
  float v9; // xmm10_4
  float v10; // xmm8_4
  float v11; // xmm0_4
  float v12; // xmm1_4

  if ( (*(_DWORD *)(a1 + 240) & 0x8000) == 0 )
    return 0;
  v4 = *(float *)(a1 + 176);
  v5 = *(float *)(a1 + 180);
  v6 = *(float *)(a1 + 184);
  v7 = *(float *)(a1 + 188);
  v8 = *(float *)(a1 + 200);
  *(float *)a2 = v8;
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(a1 + 204);
  v9 = *(float *)(a1 + 208);
  *(float *)(a2 + 8) = v9;
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(a1 + 212);
  v10 = sqrtf_0((float)(v5 * v5) + (float)(v4 * v4));
  v11 = sqrtf_0((float)(v7 * v7) + (float)(v6 * v6));
  if ( COERCE_FLOAT(LODWORD(v10) & _xmm) >= 0.0000011920929 )
  {
    *(float *)a2 = v8 / v10;
    *(float *)(a2 + 8) = v9 / v10;
  }
  if ( COERCE_FLOAT(LODWORD(v11) & _xmm) >= 0.0000011920929 )
  {
    v12 = *(float *)(a2 + 12) / v11;
    *(float *)(a2 + 4) = *(float *)(a2 + 4) / v11;
    *(float *)(a2 + 12) = v12;
  }
  return 1;
}
