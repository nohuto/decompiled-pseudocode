/*
 * XREFs of ?OnWindowScaleUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180050ED8
 * Callers:
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x18003EF90 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z @ 0x1800522D4 (-OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z.c)
 *     ?OnIsInWindowMove@CTopLevelWindow@@QEAAX_NAEBUtagRECT@@@Z @ 0x1800E61EC (-OnIsInWindowMove@CTopLevelWindow@@QEAAX_NAEBUtagRECT@@@Z.c)
 * Callees:
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x18004F2A0 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 */

void __fastcall CTopLevelWindow::OnWindowScaleUpdated(CTopLevelWindow *this)
{
  int v1; // eax
  int v3; // eax

  v1 = *((_DWORD *)this + 22);
  if ( (v1 & 0x40000) == 0 )
  {
    *((_DWORD *)this + 22) = v1 | 0x40000;
    CVisual::PropagateDirtyChildren(this);
  }
  v3 = *((_DWORD *)this + 22);
  if ( (v3 & 0x4000000) == 0 )
  {
    *((_DWORD *)this + 22) = v3 | 0x4000000;
    CVisual::PropagateDirtyChildren(this);
  }
}
