/*
 * XREFs of ?Translate2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z @ 0x180079890
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D960 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::Translate2D(
        CAnimatedTransitionVisual *this,
        const struct TA_TRANSFORM_2D *a2)
{
  float v2; // xmm1_4
  float *v3; // rax
  float *v4; // rdx
  float v5; // eax

  v2 = *((float *)a2 + 5);
  v3 = (float *)((char *)a2 + 24);
  v4 = (float *)((char *)this + 708);
  if ( *((float *)this + 176) != v2 || *v4 != *v3 )
  {
    *((float *)this + 176) = v2;
    v5 = *v3;
    *((_DWORD *)this + 178) = 0;
    *v4 = v5;
    CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)this + 8), 4096);
  }
  return 0LL;
}
