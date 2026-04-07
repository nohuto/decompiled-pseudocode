/*
 * XREFs of ?OnAlphaUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x1800084C4
 * Callers:
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x180006834 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800EDF10 (-AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?OnSourceConstantAlphaUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18001B688 (-OnSourceConstantAlphaUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?RenderRecursive@CContainerVisual@@UEAAJXZ @ 0x180020E90 (-RenderRecursive@CContainerVisual@@UEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CWindowIconic::OnAlphaUpdated(CWindowIconic *this, char a2)
{
  unsigned int v4; // edi
  int v6; // eax

  v4 = 0;
  *(_BYTE *)(*((_QWORD *)this + 10) + 408LL) = *(_BYTE *)(*((_QWORD *)this + 9) + 408LL);
  CTopLevelWindow::OnSourceConstantAlphaUpdated(*((CTopLevelWindow **)this + 11));
  if ( a2 )
  {
    v6 = CContainerVisual::RenderRecursive(*((CContainerVisual **)this + 11));
    v4 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x2B2u, 0LL);
  }
  return v4;
}
