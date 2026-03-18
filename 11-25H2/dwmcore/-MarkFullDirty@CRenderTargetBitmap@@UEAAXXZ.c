/*
 * XREFs of ?MarkFullDirty@CRenderTargetBitmap@@UEAAXXZ @ 0x180211A60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CRenderTargetBitmap::MarkFullDirty(CRenderTargetBitmap *this)
{
  CD2DBitmapCache::MarkFullInvalid((CRenderTargetBitmap *)((char *)this - 88));
}
