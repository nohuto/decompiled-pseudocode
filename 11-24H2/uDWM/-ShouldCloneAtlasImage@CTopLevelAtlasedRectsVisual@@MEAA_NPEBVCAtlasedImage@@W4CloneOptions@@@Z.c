/*
 * XREFs of ?ShouldCloneAtlasImage@CTopLevelAtlasedRectsVisual@@MEAA_NPEBVCAtlasedImage@@W4CloneOptions@@@Z @ 0x18007B250
 * Callers:
 *     <none>
 * Callees:
 *     ?IsSqueegeePart@CAtlasedImage@@QEBAHXZ @ 0x1800223D0 (-IsSqueegeePart@CAtlasedImage@@QEBAHXZ.c)
 *     ?IsShadowPart@CAtlasedImage@@QEBAHXZ @ 0x180023408 (-IsShadowPart@CAtlasedImage@@QEBAHXZ.c)
 */

char __fastcall CTopLevelAtlasedRectsVisual::ShouldCloneAtlasImage(__int64 a1, CAtlasedImage *a2, char a3)
{
  char v3; // r9
  CAtlasedImage *v5; // rdx
  char v6; // r8

  if ( (a3 & 2) == 0 || CAtlasedImage::IsSqueegeePart(a2) || (v6 & 1) == 0 && CAtlasedImage::IsShadowPart(v5) )
    return 1;
  return v3;
}
