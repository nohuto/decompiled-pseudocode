/*
 * XREFs of ?SetDirtyChildren@CThumbnailVisual@@UEAAXXZ @ 0x18000B0E0
 * Callers:
 *     <none>
 * Callees:
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x18004F2A0 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 */

void __fastcall CThumbnailVisual::SetDirtyChildren(CThumbnailVisual *this)
{
  __int64 v1; // rax
  __int64 v3; // rcx
  CVisual *v4; // rcx
  int v5; // eax

  v1 = *((_QWORD *)this + 47);
  if ( v1 )
  {
    if ( *(_BYTE *)(v1 + 34) )
    {
      v3 = *(_QWORD *)(v1 + 16);
      if ( v3 )
      {
        v4 = *(CVisual **)(v3 + 440);
        if ( v4 )
        {
          v5 = *((_DWORD *)v4 + 22);
          if ( (v5 & 0x8000000) == 0 )
          {
            *((_DWORD *)v4 + 22) = v5 | 0x8000000;
            CVisual::PropagateDirtyChildren(v4);
          }
        }
      }
    }
  }
  *((_DWORD *)this + 22) |= 1u;
}
