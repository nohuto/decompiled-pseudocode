/*
 * XREFs of ?IsSqueegeePart@CAtlasedImage@@QEBAHXZ @ 0x1800223D0
 * Callers:
 *     ?ShouldDrawAtlasImage@CTopLevelAtlasedRectsVisual@@MEAA_NPEBVCAtlasedImage@@@Z @ 0x1800223B0 (-ShouldDrawAtlasImage@CTopLevelAtlasedRectsVisual@@MEAA_NPEBVCAtlasedImage@@@Z.c)
 *     ?ShouldCloneAtlasImage@CTopLevelAtlasedRectsVisual@@MEAA_NPEBVCAtlasedImage@@W4CloneOptions@@@Z @ 0x18007B250 (-ShouldCloneAtlasImage@CTopLevelAtlasedRectsVisual@@MEAA_NPEBVCAtlasedImage@@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?IsGlassSheetNCAreaPart@CTopLevelWindow@@CA_NI@Z @ 0x1800223EC (-IsGlassSheetNCAreaPart@CTopLevelWindow@@CA_NI@Z.c)
 */

_BOOL8 __fastcall CAtlasedImage::IsSqueegeePart(CAtlasedImage *this)
{
  return CTopLevelWindow::IsGlassSheetNCAreaPart(*((_DWORD *)this + 30));
}
