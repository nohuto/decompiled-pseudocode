/*
 * XREFs of ?MarkFullDirty@CDxHandleYUVBitmapRealization@@UEAAXXZ @ 0x180061240
 * Callers:
 *     ?UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_NPEAVISwapChainRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEBUCSM_RGNDATA_@@PEBUScrollOptimization@@@Z @ 0x180061F10 (-UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_NPEAVISwapChainRealization@@PEBU.c)
 *     ?AddDirtyRegion@CDxHandleYUVBitmapRealization@@UEAAXAEBVCRegion@@@Z @ 0x180258230 (-AddDirtyRegion@CDxHandleYUVBitmapRealization@@UEAAXAEBVCRegion@@@Z.c)
 *     ?MarkFullDirty@CDxHandleYUVBitmapRealization@@WBAA@EAAXXZ @ 0x1802E25D0 (-MarkFullDirty@CDxHandleYUVBitmapRealization@@WBAA@EAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CDxHandleYUVBitmapRealization::MarkFullDirty(CDxHandleYUVBitmapRealization *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 26);
  if ( v1 )
    *(_BYTE *)(v1 + 136) = 0;
  IBitmapRealizationMethodsT<CSectionBitmapRealization,IGDIBitmapRealization>::MarkFullDirty();
}
