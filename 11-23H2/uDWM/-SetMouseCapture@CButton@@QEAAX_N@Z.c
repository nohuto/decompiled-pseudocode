/*
 * XREFs of ?SetMouseCapture@CButton@@QEAAX_N@Z @ 0x1800ACBA4
 * Callers:
 *     ?UpdateCapturedButton@CTopLevelWindow@@AEAAXI@Z @ 0x1800102E8 (-UpdateCapturedButton@CTopLevelWindow@@AEAAXI@Z.c)
 *     ?OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ @ 0x1800349B4 (-OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x18003EF90 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180047554 (-OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ.c)
 * Callees:
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x18004F2A0 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 */

void __fastcall CButton::SetMouseCapture(CButton *this, char a2)
{
  int v2; // eax

  if ( ((*((_BYTE *)this + 288) & 8) != 0) != a2 )
  {
    v2 = *((_DWORD *)this + 22);
    *((_BYTE *)this + 288) = (8 * a2) | *((_BYTE *)this + 288) & 0xF7;
    if ( (v2 & 0x8000) == 0 )
    {
      *((_DWORD *)this + 22) = v2 | 0x8000;
      CVisual::PropagateDirtyChildren(this);
    }
  }
}
