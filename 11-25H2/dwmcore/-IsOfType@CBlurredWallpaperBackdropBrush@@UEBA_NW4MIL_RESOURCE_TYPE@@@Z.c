/*
 * XREFs of ?IsOfType@CBlurredWallpaperBackdropBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1802132E0
 * Callers:
 *     ?GatherEffectInputs@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAV?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@@Z @ 0x18007CC64 (-GatherEffectInputs@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAV-$vector.c)
 * Callees:
 *     <none>
 */

bool __fastcall CBlurredWallpaperBackdropBrush::IsOfType(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rcx
  bool result; // al

  result = 0;
  if ( (unsigned int)a2 <= 0x2E )
  {
    v2 = 0x400000028000LL;
    if ( _bittest64(&v2, a2) )
      return 1;
  }
  return result;
}
