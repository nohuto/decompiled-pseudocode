/*
 * XREFs of ?Clip@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_CLIP@@@Z @ 0x1800A4670
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D960 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::Clip(CAnimatedTransitionVisual *this, const struct TA_TRANSFORM_CLIP *a2)
{
  _DWORD *v2; // r8
  __int64 v3; // rdx
  __int64 v4; // r9

  v2 = (_DWORD *)((char *)this + 776);
  v3 = a2 - this;
  v4 = 4LL;
  do
  {
    *v2 = (int)*(float *)((char *)v2 + v3 - 756);
    ++v2;
    --v4;
  }
  while ( v4 );
  CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)this + 8), 4096);
  return 0LL;
}
