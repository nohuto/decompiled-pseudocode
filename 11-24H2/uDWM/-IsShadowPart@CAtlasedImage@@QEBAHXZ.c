/*
 * XREFs of ?IsShadowPart@CAtlasedImage@@QEBAHXZ @ 0x180023408
 * Callers:
 *     ?Validate@CAtlasedImage@@QEAAJXZ @ 0x1800230A4 (-Validate@CAtlasedImage@@QEAAJXZ.c)
 *     ?ShouldCloneAtlasImage@CTopLevelAtlasedRectsVisual@@MEAA_NPEBVCAtlasedImage@@W4CloneOptions@@@Z @ 0x18007B250 (-ShouldCloneAtlasImage@CTopLevelAtlasedRectsVisual@@MEAA_NPEBVCAtlasedImage@@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?IsShadowNCAreaPart@CTopLevelWindow@@CA_NI@Z @ 0x180024024 (-IsShadowNCAreaPart@CTopLevelWindow@@CA_NI@Z.c)
 */

_BOOL8 __fastcall CAtlasedImage::IsShadowPart(CAtlasedImage *this)
{
  return CTopLevelWindow::IsShadowNCAreaPart(*((_DWORD *)this + 30));
}
