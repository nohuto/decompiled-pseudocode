/*
 * XREFs of ?InternalSetOpacity@CAtlasedImage@@IEAAXH@Z @ 0x180024554
 * Callers:
 *     ?SetOpacity@CAtlasedImage@@QEAAXM@Z @ 0x18001E4E4 (-SetOpacity@CAtlasedImage@@QEAAXM@Z.c)
 *     ?InitializeVisualTreeClone@CAtlasedRectsVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180021928 (-InitializeVisualTreeClone@CAtlasedRectsVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x1800245EC (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 */

void __fastcall CAtlasedImage::InternalSetOpacity(CAtlasedImage *this, int a2)
{
  if ( a2 != *((_DWORD *)this + 17) )
  {
    CAtlasedImage::SetDirtyFlags(this, 2u, 0x2000u);
    *((_DWORD *)this + 17) = a2;
  }
}
