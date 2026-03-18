/*
 * XREFs of ?GetD2DBitmap@CDxHandleYUVBitmapRealization@@WBAA@EAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802D9200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::GetD2DBitmap(
        __int64 a1,
        const struct RenderTargetInfo *a2,
        struct ID2D1Bitmap1 **a3,
        char a4)
{
  return CDxHandleYUVBitmapRealization::GetD2DBitmap((CDxHandleYUVBitmapRealization *)(a1 - 256), a2, a3, a4);
}
