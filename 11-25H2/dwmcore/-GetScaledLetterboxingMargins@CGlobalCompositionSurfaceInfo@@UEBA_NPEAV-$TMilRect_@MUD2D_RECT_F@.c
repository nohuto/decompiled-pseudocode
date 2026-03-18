/*
 * XREFs of ?GetScaledLetterboxingMargins@CGlobalCompositionSurfaceInfo@@UEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002B570
 * Callers:
 *     ?DrawLetterboxingMarginsInternal@CCompositionSurfaceBitmap@@AEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x18002B41C (-DrawLetterboxingMarginsInternal@CCompositionSurfaceBitmap@@AEAAJPEAVCDrawingContext@@AEBV-$TMil.c)
 * Callees:
 *     <none>
 */

char __fastcall CGlobalCompositionSurfaceInfo::GetScaledLetterboxingMargins(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 (*v4)(void); // rax

  v3 = *(_QWORD *)(a1 + 208);
  if ( !v3
    || (unsigned int)((__int64)(*(_QWORD *)(a1 + 192) - *(_QWORD *)(a1 + 184)) >> 3) <= 1 && *(_DWORD *)(a1 + 144) != 3 )
  {
    return 0;
  }
  v4 = *(__int64 (**)(void))(*(_QWORD *)v3 + 256LL);
  if ( (char *)v4 == (char *)CDxHandleBitmapRealization::GetScaledLetterboxingMargins )
    return CBitmapRealization::GetScaledLetterboxingMargins(v3 - 328);
  if ( (char *)v4 == (char *)CDxHandleYUVBitmapRealization::GetScaledLetterboxingMargins )
    return CDxHandleYUVBitmapRealization::GetScaledLetterboxingMargins(v3, a2);
  return v4();
}
