/*
 * XREFs of ?GetSizePreference@CCompositionSurfaceBitmap@@QEBA?AW4SizePreference@@XZ @ 0x1800D27D0
 * Callers:
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18004AFF0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?RenderRevealBorder@CWindowNode@@AEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEBVCShape@@@Z @ 0x1800693EC (-RenderRevealBorder@CWindowNode@@AEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@HUtagRECT@@UD2D_POINT.c)
 *     ?HasRevealBorder@CSwapchainRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@PEAU_D3DCOLORVALUE@@@Z @ 0x18006A890 (-HasRevealBorder@CSwapchainRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@PEAU_D3DCOLORVALUE@@@Z.c)
 *     ?ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIBitmapResource@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180100D00 (-ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIBitmapResource@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180236DE0 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@.c)
 * Callees:
 *     ?GetSwapChainRealization@CGlobalCompositionSurfaceInfo@@IEBAPEAVISwapChainRealization@@XZ @ 0x1800D2830 (-GetSwapChainRealization@CGlobalCompositionSurfaceInfo@@IEBAPEAVISwapChainRealization@@XZ.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::GetSizePreference(__int64 a1)
{
  CGlobalCompositionSurfaceInfo *v1; // rcx
  __int64 (__fastcall *v2)(CGlobalCompositionSurfaceInfo *); // rax
  struct ISwapChainRealization *SwapChainRealization; // rax
  CGlobalCompositionSurfaceInfo *v4; // rdx

  v1 = *(CGlobalCompositionSurfaceInfo **)(a1 + 96);
  if ( v1 )
  {
    v2 = *(__int64 (__fastcall **)(CGlobalCompositionSurfaceInfo *))(*(_QWORD *)v1 + 456LL);
    if ( (char *)v2 != (char *)&CGlobalCompositionSurfaceInfo::GetSizePreference )
      return v2(v1);
    SwapChainRealization = CGlobalCompositionSurfaceInfo::GetSwapChainRealization(v1);
    v4 = SwapChainRealization;
    if ( SwapChainRealization )
    {
      v2 = *(__int64 (__fastcall **)(CGlobalCompositionSurfaceInfo *))(*(_QWORD *)SwapChainRealization + 104LL);
      v1 = v4;
      return v2(v1);
    }
  }
  return 1LL;
}
