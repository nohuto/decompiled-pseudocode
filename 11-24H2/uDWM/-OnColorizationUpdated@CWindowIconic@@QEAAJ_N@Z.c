/*
 * XREFs of ?OnColorizationUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x180008544
 * Callers:
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x180006834 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?OnColorizationUpdated@CWindowData@@QEAAXXZ @ 0x18001B5C4 (-OnColorizationUpdated@CWindowData@@QEAAXXZ.c)
 *     ?OnSettingsUpdated@CWindowIconic@@QEAAJK_N@Z @ 0x180099C54 (-OnSettingsUpdated@CWindowIconic@@QEAAJK_N@Z.c)
 * Callees:
 *     ?OnColorizationUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18001B604 (-OnColorizationUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?RenderRecursive@CContainerVisual@@UEAAJXZ @ 0x180020E90 (-RenderRecursive@CContainerVisual@@UEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CWindowIconic::OnColorizationUpdated(CWindowIconic *this, char a2)
{
  unsigned int v4; // edi
  int v5; // eax

  v4 = 0;
  *(_BYTE *)(*((_QWORD *)this + 10) + 737LL) ^= (*(_BYTE *)(*((_QWORD *)this + 9) + 737LL) ^ *(_BYTE *)(*((_QWORD *)this + 10) + 737LL)) & 0x40;
  CTopLevelWindow::OnColorizationUpdated(*((CTopLevelWindow **)this + 11));
  if ( a2 )
  {
    v5 = CContainerVisual::RenderRecursive(*((CContainerVisual **)this + 11));
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x203u, 0LL);
  }
  return v4;
}
