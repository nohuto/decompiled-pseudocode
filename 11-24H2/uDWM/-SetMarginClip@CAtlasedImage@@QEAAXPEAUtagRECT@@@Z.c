/*
 * XREFs of ?SetMarginClip@CAtlasedImage@@QEAAXPEAUtagRECT@@@Z @ 0x180023348
 * Callers:
 *     ?InitializeVisualTreeClone@CAtlasedRectsVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180021928 (-InitializeVisualTreeClone@CAtlasedRectsVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ @ 0x180022E40 (-UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ.c)
 * Callees:
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x1800245EC (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 */

void __fastcall CAtlasedImage::SetMarginClip(CAtlasedImage *this, struct tagRECT *a2)
{
  char v2; // al

  v2 = *((_BYTE *)this + 116);
  if ( !a2 )
  {
    if ( !v2 )
      return;
    *((_BYTE *)this + 116) = 0;
LABEL_7:
    CAtlasedImage::SetDirtyFlags(this, 1u, 0x2000u);
    return;
  }
  if ( !v2 || !EqualRect((const RECT *)((char *)this + 100), a2) )
  {
    *((_BYTE *)this + 116) = 1;
    *(struct tagRECT *)((char *)this + 100) = *a2;
    goto LABEL_7;
  }
}
