/*
 * XREFs of ?ShouldSnapToPixels@CSurfaceBrush@@UEBA_NXZ @ 0x1801AA6F0
 * Callers:
 *     ?ShouldSnapToPixels@CNineGridBrush@@UEBA_NXZ @ 0x1801AA550 (-ShouldSnapToPixels@CNineGridBrush@@UEBA_NXZ.c)
 *     ?ShouldSnapToPixels@CMaskBrush@@UEBA_NXZ @ 0x1801AA660 (-ShouldSnapToPixels@CMaskBrush@@UEBA_NXZ.c)
 *     ?ShouldSnapToPixels@CEffectBrush@@UEBA_NXZ @ 0x1801AA700 (-ShouldSnapToPixels@CEffectBrush@@UEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CSurfaceBrush::ShouldSnapToPixels(CSurfaceBrush *this)
{
  return *((_BYTE *)this + 200);
}
