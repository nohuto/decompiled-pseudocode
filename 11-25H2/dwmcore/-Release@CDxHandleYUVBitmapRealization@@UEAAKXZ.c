/*
 * XREFs of ?Release@CDxHandleYUVBitmapRealization@@UEAAKXZ @ 0x18020C1E0
 * Callers:
 *     ?Release@CGlobalCompositionSurfaceInfo@@WGI@EAAKXZ @ 0x18029CB80 (-Release@CGlobalCompositionSurfaceInfo@@WGI@EAAKXZ.c)
 *     ?Release@CHolographicClient@@WBA@EAAKXZ @ 0x1802DEDF0 (-Release@CHolographicClient@@WBA@EAAKXZ.c)
 *     ?Release@CStereoRenderTargetBitmap@@WFA@EAAKXZ @ 0x1802E0150 (-Release@CStereoRenderTargetBitmap@@WFA@EAAKXZ.c)
 *     ?Release@CStereoRenderTargetBitmap@@WFI@EAAKXZ @ 0x1802E0160 (-Release@CStereoRenderTargetBitmap@@WFI@EAAKXZ.c)
 *     ?Release@CDxHandleAdvancedDirectFlipBitmapRealization@@WBEI@EAAKXZ @ 0x1802E0170 (-Release@CDxHandleAdvancedDirectFlipBitmapRealization@@WBEI@EAAKXZ.c)
 *     ?Release@CGDIBitmapRealization@@WBFA@EAAKXZ @ 0x1802E0190 (-Release@CGDIBitmapRealization@@WBFA@EAAKXZ.c)
 *     ?Release@CGDISectionBitmapRealization@@WBII@EAAKXZ @ 0x1802E01B0 (-Release@CGDISectionBitmapRealization@@WBII@EAAKXZ.c)
 *     ?Release@CDxHandleAdvancedDirectFlipBitmapRealization@@WBFI@EAAKXZ @ 0x1802E1400 (-Release@CDxHandleAdvancedDirectFlipBitmapRealization@@WBFI@EAAKXZ.c)
 *     ?Release@CGDIBitmapRealization@@WBJA@EAAKXZ @ 0x1802E1420 (-Release@CGDIBitmapRealization@@WBJA@EAAKXZ.c)
 *     ?Release@CStereoRenderTargetBitmap@@WII@EAAKXZ @ 0x1802E3D00 (-Release@CStereoRenderTargetBitmap@@WII@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CDxHandleYUVBitmapRealization::Release(CDxHandleYUVBitmapRealization *this)
{
  return CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease(this);
}
