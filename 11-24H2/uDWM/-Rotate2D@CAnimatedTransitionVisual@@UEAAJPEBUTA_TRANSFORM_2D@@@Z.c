/*
 * XREFs of ?Rotate2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z @ 0x1800A4B50
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D960 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::Rotate2D(
        CAnimatedTransitionVisual *this,
        const struct TA_TRANSFORM_2D *a2)
{
  float v2; // xmm1_4

  v2 = *((float *)a2 + 5);
  if ( *((float *)this + 185) != v2
    || *((float *)this + 188) != *((float *)a2 + 9)
    || *((float *)this + 189) != *((float *)a2 + 10) )
  {
    *((float *)this + 185) = v2;
    *((_QWORD *)this + 93) = 0LL;
    if ( !*((_BYTE *)this + 925) )
    {
      *((_DWORD *)this + 188) = *((_DWORD *)a2 + 9);
      *(_QWORD *)((char *)this + 756) = *((unsigned int *)a2 + 10);
    }
    CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)this + 8), 4096);
  }
  return 0LL;
}
