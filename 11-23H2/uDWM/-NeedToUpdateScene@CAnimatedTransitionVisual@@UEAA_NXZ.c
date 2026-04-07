/*
 * XREFs of ?NeedToUpdateScene@CAnimatedTransitionVisual@@UEAA_NXZ @ 0x18001E5A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CAnimatedTransitionVisual::NeedToUpdateScene(CAnimatedTransitionVisual *this)
{
  return (*((_DWORD *)this + 24) & 0x1000) != 0;
}
