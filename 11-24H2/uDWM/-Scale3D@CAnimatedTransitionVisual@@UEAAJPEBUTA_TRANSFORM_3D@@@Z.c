/*
 * XREFs of ?Scale3D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_3D@@@Z @ 0x1800A4BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D960 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::Scale3D(
        CAnimatedTransitionVisual *this,
        const struct TA_TRANSFORM_3D *a2)
{
  float v2; // xmm1_4
  bool v3; // zf

  v2 = *((float *)a2 + 5);
  if ( *((float *)this + 179) != v2
    || *((float *)this + 180) != *((float *)a2 + 6)
    || *((float *)this + 181) != *((float *)a2 + 7)
    || !*((_BYTE *)this + 926)
    && (*((float *)this + 182) != *((float *)a2 + 11)
     || *((float *)this + 183) != *((float *)a2 + 12)
     || *((float *)this + 184) != *((float *)a2 + 13)) )
  {
    v3 = *((_BYTE *)this + 926) == 0;
    *((float *)this + 179) = v2;
    *((_DWORD *)this + 180) = *((_DWORD *)a2 + 6);
    *((_DWORD *)this + 181) = *((_DWORD *)a2 + 7);
    if ( v3 )
    {
      *((_DWORD *)this + 182) = *((_DWORD *)a2 + 11);
      *((_DWORD *)this + 183) = *((_DWORD *)a2 + 12);
      *((_DWORD *)this + 184) = *((_DWORD *)a2 + 13);
    }
    CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)this + 8), 4096);
  }
  return 0LL;
}
