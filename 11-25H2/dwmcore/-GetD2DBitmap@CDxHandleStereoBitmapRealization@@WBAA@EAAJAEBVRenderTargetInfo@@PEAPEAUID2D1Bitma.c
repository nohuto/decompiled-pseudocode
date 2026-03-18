/*
 * XREFs of ?GetD2DBitmap@CDxHandleStereoBitmapRealization@@WBAA@EAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802E1FF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDxHandleStereoBitmapRealization::GetD2DBitmap(
        __int64 a1,
        const struct RenderTargetInfo *a2,
        struct ID2D1Bitmap1 **a3,
        char a4)
{
  return CDxHandleStereoBitmapRealization::GetD2DBitmap((CD2DBitmapCache **)(a1 - 256), a2, a3, a4);
}
