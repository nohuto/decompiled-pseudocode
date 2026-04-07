/*
 * XREFs of ?IsGlassSheetNCAreaPart@CTopLevelWindow@@CA_NI@Z @ 0x1800223EC
 * Callers:
 *     ?IsSqueegeePart@CAtlasedImage@@QEBAHXZ @ 0x1800223D0 (-IsSqueegeePart@CAtlasedImage@@QEBAHXZ.c)
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x180023E20 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CTopLevelWindow::IsGlassSheetNCAreaPart(int a1)
{
  return (unsigned int)(a1 - 9) <= 8;
}
