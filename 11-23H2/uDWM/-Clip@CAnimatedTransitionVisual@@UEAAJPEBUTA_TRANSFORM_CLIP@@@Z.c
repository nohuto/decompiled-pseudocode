/*
 * XREFs of ?Clip@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_CLIP@@@Z @ 0x1800A62A0
 * Callers:
 *     <none>
 * Callees:
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x18004F2A0 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::Clip(CAnimatedTransitionVisual *this, const struct TA_TRANSFORM_CLIP *a2)
{
  _DWORD *v2; // r8
  __int64 v3; // rdx
  __int64 v4; // r9
  int v5; // eax
  CVisual *v6; // rcx

  v2 = (_DWORD *)((char *)this + 824);
  v3 = a2 - this;
  v4 = 4LL;
  do
  {
    *v2 = (int)*(float *)((char *)v2 + v3 - 804);
    ++v2;
    --v4;
  }
  while ( v4 );
  v5 = *((_DWORD *)this + 24);
  v6 = (CAnimatedTransitionVisual *)((char *)this + 8);
  if ( (v5 & 0x1000) == 0 )
  {
    *((_DWORD *)v6 + 22) = v5 | 0x1000;
    CVisual::PropagateDirtyChildren(v6);
  }
  return 0LL;
}
