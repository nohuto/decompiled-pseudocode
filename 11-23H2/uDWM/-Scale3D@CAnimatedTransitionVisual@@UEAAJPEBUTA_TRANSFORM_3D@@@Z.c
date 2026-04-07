/*
 * XREFs of ?Scale3D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_3D@@@Z @ 0x1800A6EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x18004F2A0 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::Scale3D(
        CAnimatedTransitionVisual *this,
        const struct TA_TRANSFORM_3D *a2)
{
  float v2; // xmm1_4
  bool v3; // zf
  int v4; // eax
  CVisual *v5; // rcx

  v2 = *((float *)a2 + 5);
  if ( *((float *)this + 191) != v2
    || *((float *)this + 192) != *((float *)a2 + 6)
    || *((float *)this + 193) != *((float *)a2 + 7)
    || !*((_BYTE *)this + 974)
    && (*((float *)this + 194) != *((float *)a2 + 11)
     || *((float *)this + 195) != *((float *)a2 + 12)
     || *((float *)this + 196) != *((float *)a2 + 13)) )
  {
    v3 = *((_BYTE *)this + 974) == 0;
    *((float *)this + 191) = v2;
    *((_DWORD *)this + 192) = *((_DWORD *)a2 + 6);
    *((_DWORD *)this + 193) = *((_DWORD *)a2 + 7);
    if ( v3 )
    {
      *((_DWORD *)this + 194) = *((_DWORD *)a2 + 11);
      *((_DWORD *)this + 195) = *((_DWORD *)a2 + 12);
      *((_DWORD *)this + 196) = *((_DWORD *)a2 + 13);
    }
    v4 = *((_DWORD *)this + 24);
    v5 = (CAnimatedTransitionVisual *)((char *)this + 8);
    if ( (v4 & 0x1000) == 0 )
    {
      *((_DWORD *)v5 + 22) = v4 | 0x1000;
      CVisual::PropagateDirtyChildren(v5);
    }
  }
  return 0LL;
}
