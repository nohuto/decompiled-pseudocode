/*
 * XREFs of ?Rotate3D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_3D@@@Z @ 0x180086380
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D960 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?_NormalizeAngleToShowFront@CAnimatedTransitionVisual@@IEAAMM@Z @ 0x18008647C (-_NormalizeAngleToShowFront@CAnimatedTransitionVisual@@IEAAMM@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::Rotate3D(
        CAnimatedTransitionVisual *this,
        const struct TA_TRANSFORM_3D *a2)
{
  CAnimatedTransitionVisual *v4; // rcx
  CAnimatedTransitionVisual *v5; // rcx
  float v6; // xmm0_4
  bool v7; // zf

  if ( *((float *)this + 185) != *((float *)a2 + 5)
    || *((float *)this + 186) != *((float *)a2 + 6)
    || *((float *)this + 187) != *((float *)a2 + 7)
    || !*((_BYTE *)this + 925)
    && (*((float *)this + 188) != *((float *)a2 + 11)
     || *((float *)this + 189) != *((float *)a2 + 12)
     || *((float *)this + 190) != *((float *)a2 + 13)) )
  {
    *((float *)this + 185) = CAnimatedTransitionVisual::_NormalizeAngleToShowFront(this, *((float *)a2 + 5));
    *((float *)this + 186) = CAnimatedTransitionVisual::_NormalizeAngleToShowFront(v4, *((float *)a2 + 6));
    v6 = CAnimatedTransitionVisual::_NormalizeAngleToShowFront(v5, *((float *)a2 + 7));
    v7 = *((_BYTE *)this + 925) == 0;
    *((float *)this + 187) = v6;
    if ( v7 )
    {
      *((_DWORD *)this + 188) = *((_DWORD *)a2 + 11);
      *((_DWORD *)this + 189) = *((_DWORD *)a2 + 12);
      *((_DWORD *)this + 190) = *((_DWORD *)a2 + 13);
    }
    CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)this + 8), 4096);
  }
  return 0LL;
}
