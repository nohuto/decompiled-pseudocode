/*
 * XREFs of ?UpdateVisualOpacity@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A7B8C
 * Callers:
 *     ?ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ @ 0x1800503D0 (-ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ.c)
 * Callees:
 *     ?UpdateOpacity@CVisual@@UEAAJXZ @ 0x18001C4A0 (-UpdateOpacity@CVisual@@UEAAJXZ.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180041E40 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::UpdateVisualOpacity(CAnimatedTransitionVisual *this)
{
  float v1; // xmm0_4

  v1 = *((float *)this + 186);
  if ( v1 != *((float *)this + 187) )
  {
    CVisual::SetOpacity((CAnimatedTransitionVisual *)((char *)this + 8), v1);
    CVisual::UpdateOpacity((CAnimatedTransitionVisual *)((char *)this + 8));
    *((_DWORD *)this + 187) = *((_DWORD *)this + 186);
  }
  return 0LL;
}
