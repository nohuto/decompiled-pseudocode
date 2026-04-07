/*
 * XREFs of ?OnSourceConstantAlphaUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18001B688
 * Callers:
 *     ?OnAlphaUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x1800084C4 (-OnAlphaUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18001B770 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800EDF10 (-AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x18001B720 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?Hide@CVisual@@QEAAXXZ @ 0x18002237C (-Hide@CVisual@@QEAAXXZ.c)
 *     ?Unhide@CVisual@@QEAAXXZ @ 0x180023BB4 (-Unhide@CVisual@@QEAAXXZ.c)
 */

void __fastcall CTopLevelWindow::OnSourceConstantAlphaUpdated(CTopLevelWindow *this)
{
  __int64 v1; // rdx
  double v3; // xmm6_8
  char v4; // al

  v1 = *((_QWORD *)this + 89);
  v3 = (double)*(unsigned __int8 *)(v1 + 408) / 255.0;
  if ( (*(_BYTE *)(v1 + 740) & 2) == 0 )
    goto LABEL_5;
  v4 = *((_BYTE *)this + 201) & 0x40;
  if ( v3 > 0.0 )
  {
    if ( v4 )
    {
      CVisual::Unhide(this);
      *((_BYTE *)this + 201) &= ~0x40u;
    }
LABEL_5:
    CVisual::SetOpacity(this, v3);
    return;
  }
  if ( !v4 )
  {
    CVisual::SetOpacity(this, 1.0);
    CVisual::Hide(this);
    *((_BYTE *)this + 201) |= 0x40u;
  }
}
