/*
 * XREFs of ?IsOfType@CBlurredWallpaperBackdropBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180206930
 * Callers:
 *     ?GatherEffectInputs@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAV?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@@Z @ 0x180135A9C (-GatherEffectInputs@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAV-$vector.c)
 * Callees:
 *     <none>
 */

bool __fastcall CBlurredWallpaperBackdropBrush::IsOfType(__int64 a1, int a2)
{
  return ((a2 - 15) & 0xFFFFFFDD) == 0 && a2 != 49;
}
