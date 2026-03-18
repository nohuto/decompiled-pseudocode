/*
 * XREFs of ?GetD2DBitmap@CWICBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x180224A00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWICBitmapRealization::GetD2DBitmap(
        CWICBitmapRealization *this,
        const struct RenderTargetInfo *a2,
        struct ID2D1Bitmap1 **a3,
        char a4)
{
  return CD2DBitmapCache::GetCachedBitmap((CWICBitmapRealization *)((char *)this - 80), a2, a3, a4);
}
