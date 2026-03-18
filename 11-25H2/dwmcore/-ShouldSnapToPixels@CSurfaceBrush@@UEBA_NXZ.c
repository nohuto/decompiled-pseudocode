/*
 * XREFs of ?ShouldSnapToPixels@CSurfaceBrush@@UEBA_NXZ @ 0x1801BF300
 * Callers:
 *     ?ShouldSnapToPixels@CNineGridBrush@@UEBA_NXZ @ 0x1801BF220 (-ShouldSnapToPixels@CNineGridBrush@@UEBA_NXZ.c)
 *     ?ShouldSnapToPixels@CMaskBrush@@UEBA_NXZ @ 0x1801BF270 (-ShouldSnapToPixels@CMaskBrush@@UEBA_NXZ.c)
 *     ?ShouldSnapToPixels@CEffectBrush@@UEBA_NXZ @ 0x1801BF310 (-ShouldSnapToPixels@CEffectBrush@@UEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CSurfaceBrush::ShouldSnapToPixels(CSurfaceBrush *this)
{
  return *((_BYTE *)this + 200);
}
