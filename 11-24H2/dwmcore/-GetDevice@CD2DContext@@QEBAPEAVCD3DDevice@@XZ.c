/*
 * XREFs of ?GetDevice@CD2DContext@@QEBAPEAVCD3DDevice@@XZ @ 0x18010BDC0
 * Callers:
 *     ?RequiresRendering@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@@Z @ 0x18000B380 (-RequiresRendering@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@@Z.c)
 *     ?IsValid@CRenderTargetBitmap@@UEBAJXZ @ 0x18001D570 (-IsValid@CRenderTargetBitmap@@UEBAJXZ.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800500C0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?IsValid@?$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@UEBAJXZ @ 0x18010A650 (-IsValid@-$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@UEBAJXZ.c)
 *     ?GetAdapterLuid@?$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@UEBA?AU_LUID@@XZ @ 0x18010B3D0 (-GetAdapterLuid@-$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@UEBA-AU_LUID@@XZ.c)
 *     ?GetRenderTargetInfo@CDeviceTextureTarget@@UEBA?AVRenderTargetInfo@@XZ @ 0x18010B420 (-GetRenderTargetInfo@CDeviceTextureTarget@@UEBA-AVRenderTargetInfo@@XZ.c)
 *     ?EnsureRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18010B4B0 (-EnsureRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBit.c)
 *     ?IsValid@CD2DBitmap@@UEBAJXZ @ 0x18010BE30 (-IsValid@CD2DBitmap@@UEBAJXZ.c)
 *     ?IsValid@CCachedTarget@CCachedVisualImage@@QEBA_NXZ @ 0x18010C380 (-IsValid@CCachedTarget@CCachedVisualImage@@QEBA_NXZ.c)
 *     ?RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IIPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801109C0 (-RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IIPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x18013A760 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 *     ?GetCache@CDrawListCacheSet@@QEAAJIIPEBVIDeviceTarget@@PEAPEAVCDrawListCache@@@Z @ 0x18013CB60 (-GetCache@CDrawListCacheSet@@QEAAJIIPEBVIDeviceTarget@@PEAPEAVCDrawListCache@@@Z.c)
 *     ?RemoveInvalidTargets@CCachedVisualImage@@IEAA_NUD2D_SIZE_U@@@Z @ 0x1801AE350 (-RemoveInvalidTargets@CCachedVisualImage@@IEAA_NUD2D_SIZE_U@@@Z.c)
 * Callees:
 *     <none>
 */

struct CD3DDevice *__fastcall CD2DContext::GetDevice(CD2DContext *this)
{
  return (struct CD3DDevice *)(((unsigned __int64)this - 16) & -(__int64)(this != 0LL));
}
