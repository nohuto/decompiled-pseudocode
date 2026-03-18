/*
 * XREFs of ?GetD2DBitmap@CDxHandleBitmapRealization@@WBAA@EAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802E0FC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CDxHandleBitmapRealization::GetD2DBitmap(
        __int64 a1,
        const struct RenderTargetInfo *a2,
        struct ID2D1Bitmap1 **a3,
        bool a4)
{
  return CDxHandleBitmapRealization::GetD2DBitmap((CDxHandleBitmapRealization *)(a1 - 256), a2, a3, a4);
}
