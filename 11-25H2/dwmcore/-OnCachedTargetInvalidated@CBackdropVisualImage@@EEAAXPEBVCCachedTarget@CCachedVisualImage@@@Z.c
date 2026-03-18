/*
 * XREFs of ?OnCachedTargetInvalidated@CBackdropVisualImage@@EEAAXPEBVCCachedTarget@CCachedVisualImage@@@Z @ 0x18000CE10
 * Callers:
 *     ?MarkDirty@CCachedTarget@CCachedVisualImage@@QEAAXXZ @ 0x18000CDC4 (-MarkDirty@CCachedTarget@CCachedVisualImage@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CBackdropVisualImage::OnCachedTargetInvalidated(
        CBackdropVisualImage *this,
        const struct CCachedVisualImage::CCachedTarget *a2)
{
  CBackdropVisualImage::InvalidateBlurCache(this, a2);
}
