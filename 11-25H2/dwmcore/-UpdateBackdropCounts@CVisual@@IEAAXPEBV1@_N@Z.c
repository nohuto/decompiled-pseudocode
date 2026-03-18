/*
 * XREFs of ?UpdateBackdropCounts@CVisual@@IEAAXPEBV1@_N@Z @ 0x1801E09BC
 * Callers:
 *     ?ProcessSetVisible@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETVISIBLE@@@Z @ 0x1801E0954 (-ProcessSetVisible@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETVISIBLE@@@Z.c)
 *     ?SetVisible@CVisual@@QEAAX_N@Z @ 0x1802028D0 (-SetVisible@CVisual@@QEAAX_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CVisual::UpdateBackdropCounts(CVisual *this, const struct CVisual *a2, char a3)
{
  int v3; // r9d
  int v4; // r10d
  bool v5; // zf
  int v6; // edx
  CVisual *v7; // rax

  v3 = *((_DWORD *)a2 + 67);
  v4 = *((_DWORD *)a2 + 66) + 1;
  if ( (*((_BYTE *)a2 + 107) & 1) == 0 )
    v4 = *((_DWORD *)a2 + 66);
  v5 = (*((_BYTE *)a2 + 107) & 4) == 0;
  v6 = v3 + 1;
  if ( v5 )
    v6 = v3;
  if ( !a3 )
  {
    v6 = -v6;
    v4 = -v4;
  }
  if ( v4 || v6 )
  {
    v7 = this;
    do
    {
      *((_DWORD *)this + 66) += v4;
      *((_DWORD *)this + 67) += v6;
      if ( (*((_BYTE *)this + 106) & 0x40) == 0 )
        break;
      this = (CVisual *)*((_QWORD *)this + 11);
      if ( v7 )
      {
        v7 = (CVisual *)*((_QWORD *)v7 + 11);
        if ( v7 )
          v7 = (CVisual *)*((_QWORD *)v7 + 11);
      }
    }
    while ( this != v7 );
  }
}
