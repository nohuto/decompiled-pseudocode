/*
 * XREFs of ?SetOpacity@CAtlasedImage@@QEAAXM@Z @ 0x18001E4E4
 * Callers:
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x18001E1D0 (-RedrawVisual@CButton@@AEAAJXZ.c)
 *     ?UpdateCrossfade@CButton@@AEAAXXZ @ 0x18001EA40 (-UpdateCrossfade@CButton@@AEAAXXZ.c)
 *     ?SetShadowOpacity@CTopLevelWindow@@QEAAXM@Z @ 0x180032444 (-SetShadowOpacity@CTopLevelWindow@@QEAAXM@Z.c)
 * Callees:
 *     floor @ 0x18009C468 (floor.c)
 */

void __fastcall CAtlasedImage::SetOpacity(CAtlasedImage *this, float a2)
{
  int v3; // edx
  unsigned __int8 v4; // al

  v3 = (int)floor((float)(a2 * 255.0) + 0.5);
  v4 = -1;
  if ( v3 <= 255 )
  {
    v4 = 0;
    if ( v3 >= 0 )
      v4 = v3;
  }
  CAtlasedImage::InternalSetOpacity(this, v4);
}
