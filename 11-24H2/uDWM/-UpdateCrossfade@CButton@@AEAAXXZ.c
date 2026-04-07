/*
 * XREFs of ?UpdateCrossfade@CButton@@AEAAXXZ @ 0x18001EA40
 * Callers:
 *     ?ValidateVisual@CButton@@UEAAJXZ @ 0x18001E130 (-ValidateVisual@CButton@@UEAAJXZ.c)
 * Callees:
 *     ?DeactivateTimeline@CButton@@AEAAXPEAPEAV?$CTimeline@M@@@Z @ 0x18001E480 (-DeactivateTimeline@CButton@@AEAAXPEAPEAV-$CTimeline@M@@@Z.c)
 *     ?SetOpacity@CAtlasedImage@@QEAAXM@Z @ 0x18001E4E4 (-SetOpacity@CAtlasedImage@@QEAAXM@Z.c)
 *     ?ComputeFadeValues@CButton@@AEAAXPEAM0@Z @ 0x180077A44 (-ComputeFadeValues@CButton@@AEAAXPEAM0@Z.c)
 */

void __fastcall CButton::UpdateCrossfade(CButton *this)
{
  __int64 v2; // rcx
  float v3; // [rsp+30h] [rbp+8h] BYREF
  float v4; // [rsp+38h] [rbp+10h] BYREF

  if ( *(_BYTE *)(*((_QWORD *)this + 43) + 72LL) || (*((_BYTE *)this + 240) & 0x40) != 0 )
  {
    *((_BYTE *)this + 240) &= ~0x40u;
    CButton::DeactivateTimeline(this, (CTimelineBase **)this + 43);
    CVisual::SetDirtyFlags(this, 0x8000);
  }
  else
  {
    v3 = 0.0;
    v4 = 0.0;
    CButton::ComputeFadeValues(this, &v3, &v4);
    CAtlasedImage::SetOpacity(*(CAtlasedImage **)(v2 + 248), v3);
    CAtlasedImage::SetOpacity(*((CAtlasedImage **)this + 32), v4);
  }
}
