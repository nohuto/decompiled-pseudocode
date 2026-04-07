/*
 * XREFs of ?SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z @ 0x180022968
 * Callers:
 *     ?InitializeVisualTreeClone@CAtlasedRectsVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180021928 (-InitializeVisualTreeClone@CAtlasedRectsVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?UpdateAtlasPositionAndSize@CButton@@AEAAXXZ @ 0x18002262C (-UpdateAtlasPositionAndSize@CButton@@AEAAXXZ.c)
 *     ?UpdateAtlasLayout@CAtlasedRectsVisual@@QEAAXXZ @ 0x18002276C (-UpdateAtlasLayout@CAtlasedRectsVisual@@QEAAXXZ.c)
 *     ?_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ @ 0x180022998 (-_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ.c)
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x180023E20 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 *     ?UpdatePinnedParts@CTopLevelWindow@@AEAAJXZ @ 0x18002A410 (-UpdatePinnedParts@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18002AB40 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CAtlasedImage::SetSize(struct tagSIZE *this, const struct tagSIZE *a2)
{
  if ( this[3].cx != a2->cx || this[3].cy != a2->cy )
  {
    this[3] = *a2;
    CAtlasedImage::SetDirtyFlags((CAtlasedImage *)this, 1u, 0x2000u);
  }
}
