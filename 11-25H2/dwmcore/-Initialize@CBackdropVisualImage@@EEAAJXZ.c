/*
 * XREFs of ?Initialize@CBackdropVisualImage@@EEAAJXZ @ 0x180007B40
 * Callers:
 *     ?Create@CBackdropVisualImage@@SAJPEAVCComposition@@PEBVCVisual@@AEBVCVisualTreePath@@_NPEAPEAV1@@Z @ 0x1800081EC (-Create@CBackdropVisualImage@@SAJPEAVCComposition@@PEBVCVisual@@AEBVCVisualTreePath@@_NPEAPEAV1@.c)
 * Callees:
 *     ?ChoosePixelFormat@CCachedVisualImage@@IEAAXXZ @ 0x1800080D0 (-ChoosePixelFormat@CCachedVisualImage@@IEAAXXZ.c)
 *     ?GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ @ 0x1800263E4 (-GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ.c)
 */

__int64 __fastcall CBackdropVisualImage::Initialize(CBackdropVisualImage *this)
{
  bool v2; // zf
  __int64 v3; // rcx
  char v4; // dl

  *((_DWORD *)this + 36) = 0;
  *((_DWORD *)this + 37) = 87;
  *((_DWORD *)this + 39) = 1;
  CCachedVisualImage::ChoosePixelFormat(this);
  v2 = *((_BYTE *)this + 2242) == 0;
  *((_BYTE *)this + 2056) = 1;
  if ( !v2 )
    *((_QWORD *)this + 220) = this;
  v3 = *((_QWORD *)this + 258);
  *((_BYTE *)this + 2240) = 1;
  if ( (*(_BYTE *)(v3 + 107) & 1) == 0
    || (v4 = *(_BYTE *)(v3 + 106), *((_BYTE *)this + 2240) = (v4 & 2) != 0, (v4 & 2) != 0) )
  {
    if ( (**(_DWORD **)(v3 + 232) & 0x400000) != 0 )
      *((_BYTE *)this + 2240) = *((_BYTE *)CVisual::GetWindowBackgroundTreatmentInternal((CVisual *)v3) + 302);
  }
  return 0LL;
}
