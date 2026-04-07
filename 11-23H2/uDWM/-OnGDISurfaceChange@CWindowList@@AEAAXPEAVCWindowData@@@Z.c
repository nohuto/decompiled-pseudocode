/*
 * XREFs of ?OnGDISurfaceChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18010B22C
 * Callers:
 *     ?ReparentingFromDesktop@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180017360 (-ReparentingFromDesktop@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CWindowList::OnGDISurfaceChange(CWindowList *this, struct CWindowData *a2)
{
  CVisual *v2; // rcx
  int v3; // eax

  v2 = (CVisual *)*((_QWORD *)a2 + 55);
  if ( v2 )
  {
    v3 = *((_DWORD *)v2 + 22);
    if ( (*((_BYTE *)a2 + 673) & 0x20) != 0 )
    {
      if ( (v3 & 0x2000000) == 0 )
      {
        *((_DWORD *)v2 + 22) = v3 | 0x2000000;
        CVisual::PropagateDirtyChildren(v2);
      }
    }
    else
    {
      *((_DWORD *)v2 + 22) = v3 & 0xFDFFFFFF;
    }
  }
}
