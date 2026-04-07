/*
 * XREFs of ?Opacity@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_OPACITY@@@Z @ 0x180050DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x18004F2A0 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::Opacity(
        CAnimatedTransitionVisual *this,
        const struct TA_TRANSFORM_OPACITY *a2)
{
  float v2; // xmm0_4
  int v3; // eax
  CVisual *v4; // rcx

  v2 = *((float *)a2 + 5);
  if ( v2 != *((float *)this + 186) )
  {
    *((float *)this + 186) = v2;
    v3 = *((_DWORD *)this + 24);
    v4 = (CAnimatedTransitionVisual *)((char *)this + 8);
    if ( (v3 & 0x1000) == 0 )
    {
      *((_DWORD *)v4 + 22) = v3 | 0x1000;
      CVisual::PropagateDirtyChildren(v4);
    }
  }
  return 0LL;
}
