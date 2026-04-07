/*
 * XREFs of ?InternalSetOpacity@CAtlasedImage@@IEAAXH@Z @ 0x1800AC16C
 * Callers:
 *     ?SetOpacity@CAtlasedImage@@QEAAXM@Z @ 0x1800AC280 (-SetOpacity@CAtlasedImage@@QEAAXM@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x18000BC44 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 */

void __fastcall CAtlasedImage::InternalSetOpacity(CAtlasedImage *this, int a2)
{
  if ( a2 != *((_DWORD *)this + 17) )
  {
    CAtlasedImage::SetDirtyFlags(this, 2, 0x2000u);
    *((_DWORD *)this + 17) = a2;
  }
}
