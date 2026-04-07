/*
 * XREFs of ?SetOpacity@CImage@@UEAAXN@Z @ 0x1800C5970
 * Callers:
 *     ?UpdateTransition@CPressTapVisual@@MEAAJXZ @ 0x1800CAA40 (-UpdateTransition@CPressTapVisual@@MEAAJXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CImage::SetOpacity(CVisualProxy **this, double a2)
{
  CVisual::SendSetOpacity(this, a2);
}
