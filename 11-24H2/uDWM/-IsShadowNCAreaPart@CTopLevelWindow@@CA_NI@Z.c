/*
 * XREFs of ?IsShadowNCAreaPart@CTopLevelWindow@@CA_NI@Z @ 0x180024024
 * Callers:
 *     ?IsShadowPart@CAtlasedImage@@QEBAHXZ @ 0x180023408 (-IsShadowPart@CAtlasedImage@@QEBAHXZ.c)
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x180023E20 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18002AB40 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CTopLevelWindow::IsShadowNCAreaPart(int a1)
{
  return (unsigned int)(a1 - 18) <= 3;
}
