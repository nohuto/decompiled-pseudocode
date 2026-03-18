/*
 * XREFs of ?GetScaledLetterboxingMargins@CCompositionSurfaceBitmap@@QEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800A2470
 * Callers:
 *     ?GetLayoutParameters@CSwapchainRenderStrategy@@UEBAJPEBVCSurfaceBrush@@AEBUD2D_SIZE_F@@PEAU3@PEAUD2D_RECT_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1801B3DE0 (-GetLayoutParameters@CSwapchainRenderStrategy@@UEBAJPEBVCSurfaceBrush@@AEBUD2D_SIZE_F@@PEAU3@PEA.c)
 * Callees:
 *     ?GetSwapChainRealization@CGlobalCompositionSurfaceInfo@@IEBAPEAVISwapChainRealization@@XZ @ 0x1800A25A0 (-GetSwapChainRealization@CGlobalCompositionSurfaceInfo@@IEBAPEAVISwapChainRealization@@XZ.c)
 */

char __fastcall CCompositionSurfaceBitmap::GetScaledLetterboxingMargins(__int64 a1, __int64 a2)
{
  CGlobalCompositionSurfaceInfo *v2; // rcx
  __int64 v3; // rbx
  char (__fastcall *v4)(__int64, __int64); // rax
  struct ISwapChainRealization *SwapChainRealization; // rax
  char (__fastcall *v6)(__int64, __int64); // r8

  v2 = *(CGlobalCompositionSurfaceInfo **)(a1 + 96);
  v3 = a2;
  if ( !v2 )
    return 0;
  v4 = *(char (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 480LL);
  if ( v4 == CGlobalCompositionSurfaceInfo::GetScaledLetterboxingMargins )
  {
    SwapChainRealization = CGlobalCompositionSurfaceInfo::GetSwapChainRealization(v2);
    if ( SwapChainRealization )
    {
      v6 = *(char (__fastcall **)(__int64, __int64))(*(_QWORD *)SwapChainRealization + 256LL);
      if ( v6 == CDxHandleBitmapRealization::GetScaledLetterboxingMargins )
        return CBitmapRealization::GetScaledLetterboxingMargins((char *)SwapChainRealization - 328);
      v2 = SwapChainRealization;
      a2 = v3;
      if ( v6 == CDxHandleYUVBitmapRealization::GetScaledLetterboxingMargins )
        return CDxHandleYUVBitmapRealization::GetScaledLetterboxingMargins((__int64)v2, a2);
      v4 = *(char (__fastcall **)(__int64, __int64))(*(_QWORD *)SwapChainRealization + 256LL);
      return v4((__int64)v2, a2);
    }
    return 0;
  }
  if ( v4 == CDxHandleBitmapRealization::GetScaledLetterboxingMargins )
    return CDxHandleBitmapRealization::GetScaledLetterboxingMargins((__int64)v2, a2);
  if ( v4 == CDxHandleYUVBitmapRealization::GetScaledLetterboxingMargins )
    return CDxHandleYUVBitmapRealization::GetScaledLetterboxingMargins((__int64)v2, a2);
  return v4((__int64)v2, a2);
}
