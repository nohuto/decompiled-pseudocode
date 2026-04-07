/*
 * XREFs of ?UpdateCrossfade@CButton@@AEAAXXZ @ 0x18006BA88
 * Callers:
 *     ?ValidateVisual@CButton@@UEAAJXZ @ 0x180045C30 (-ValidateVisual@CButton@@UEAAJXZ.c)
 * Callees:
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x18004F2A0 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?SetOpacity@CAtlasedImage@@QEAAXM@Z @ 0x1800AC280 (-SetOpacity@CAtlasedImage@@QEAAXM@Z.c)
 *     ?ComputeFadeValues@CButton@@AEAAXPEAM0@Z @ 0x1800AC8E8 (-ComputeFadeValues@CButton@@AEAAXPEAM0@Z.c)
 *     ?DeactivateTimeline@CButton@@AEAAXPEAPEAV?$CTimeline@M@@@Z @ 0x1800AC948 (-DeactivateTimeline@CButton@@AEAAXPEAPEAV-$CTimeline@M@@@Z.c)
 */

void __fastcall CButton::UpdateCrossfade(CButton *this)
{
  __int64 v2; // rcx
  int v3; // eax
  float v4; // [rsp+30h] [rbp+8h] BYREF
  float v5; // [rsp+38h] [rbp+10h] BYREF

  if ( *(_BYTE *)(*((_QWORD *)this + 49) + 72LL) || (*((_BYTE *)this + 288) & 0x40) != 0 )
  {
    *((_BYTE *)this + 288) &= ~0x40u;
    CButton::DeactivateTimeline(this);
    v3 = *((_DWORD *)this + 22);
    if ( (v3 & 0x8000) == 0 )
    {
      *((_DWORD *)this + 22) = v3 | 0x8000;
      CVisual::PropagateDirtyChildren(this);
    }
  }
  else
  {
    CButton::ComputeFadeValues(this, &v4, &v5);
    CAtlasedImage::SetOpacity(*(CAtlasedImage **)(v2 + 296), v4);
    CAtlasedImage::SetOpacity(*((CAtlasedImage **)this + 38), v5);
  }
}
