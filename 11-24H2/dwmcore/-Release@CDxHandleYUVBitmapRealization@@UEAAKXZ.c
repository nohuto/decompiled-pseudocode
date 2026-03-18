/*
 * XREFs of ?Release@CDxHandleYUVBitmapRealization@@UEAAKXZ @ 0x1801FFE10
 * Callers:
 *     ?Release@CGlobalCompositionSurfaceInfo@@WGI@EAAKXZ @ 0x1802915D0 (-Release@CGlobalCompositionSurfaceInfo@@WGI@EAAKXZ.c)
 *     ?Release@CHolographicClient@@WBA@EAAKXZ @ 0x1802D5B50 (-Release@CHolographicClient@@WBA@EAAKXZ.c)
 *     ?Release@CStereoRenderTargetBitmap@@WFA@EAAKXZ @ 0x1802D6EB0 (-Release@CStereoRenderTargetBitmap@@WFA@EAAKXZ.c)
 *     ?Release@CStereoRenderTargetBitmap@@WFI@EAAKXZ @ 0x1802D6EC0 (-Release@CStereoRenderTargetBitmap@@WFI@EAAKXZ.c)
 *     ?Release@CDxHandleAdvancedDirectFlipBitmapRealization@@WBEI@EAAKXZ @ 0x1802D6ED0 (-Release@CDxHandleAdvancedDirectFlipBitmapRealization@@WBEI@EAAKXZ.c)
 *     ?Release@CGDIBitmapRealization@@WBFA@EAAKXZ @ 0x1802D6EF0 (-Release@CGDIBitmapRealization@@WBFA@EAAKXZ.c)
 *     ?Release@CGDISectionBitmapRealization@@WBII@EAAKXZ @ 0x1802D6F10 (-Release@CGDISectionBitmapRealization@@WBII@EAAKXZ.c)
 *     ?Release@CDxHandleAdvancedDirectFlipBitmapRealization@@WBFI@EAAKXZ @ 0x1802D8160 (-Release@CDxHandleAdvancedDirectFlipBitmapRealization@@WBFI@EAAKXZ.c)
 *     ?Release@CGDIBitmapRealization@@WBJA@EAAKXZ @ 0x1802D8180 (-Release@CGDIBitmapRealization@@WBJA@EAAKXZ.c)
 *     ?Release@CStereoRenderTargetBitmap@@WII@EAAKXZ @ 0x1802DAA60 (-Release@CStereoRenderTargetBitmap@@WII@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CDxHandleYUVBitmapRealization::Release(CDxHandleYUVBitmapRealization *this)
{
  return CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease(this);
}
