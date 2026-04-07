/*
 * XREFs of ?OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x1800085D4
 * Callers:
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x180006834 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowStyleUpdated@CWindowData@@QEAAJXZ @ 0x1800076E0 (-OnWindowStyleUpdated@CWindowData@@QEAAJXZ.c)
 *     ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x1800079A0 (-SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 *     ?SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z @ 0x18008CBC4 (-SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z.c)
 * Callees:
 *     ?WasMaximized@CWindowIconic@@AEAA_NXZ @ 0x1800086FC (-WasMaximized@CWindowIconic@@AEAA_NXZ.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow@@QEAAJXZ @ 0x18001D8B0 (-OnWindowStyleUpdated@CTopLevelWindow@@QEAAJXZ.c)
 *     ?RenderRecursive@CContainerVisual@@UEAAJXZ @ 0x180020E90 (-RenderRecursive@CContainerVisual@@UEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     IsOpenThemeDataPresent @ 0x18009CA90 (IsOpenThemeDataPresent.c)
 */

__int64 __fastcall CWindowIconic::OnWindowStyleUpdated(CWindowIconic *this, char a2)
{
  unsigned int v4; // edi
  int v6; // eax

  v4 = 0;
  *(_DWORD *)(*((_QWORD *)this + 10) + 116LL) = *(_DWORD *)(*((_QWORD *)this + 9) + 116LL);
  *(_DWORD *)(*((_QWORD *)this + 10) + 120LL) = *(_DWORD *)(*((_QWORD *)this + 9) + 120LL);
  *(_BYTE *)(*((_QWORD *)this + 10) + 736LL) = *(_BYTE *)(*((_QWORD *)this + 10) + 736LL) & 0xF7 | ((unsigned __int8)IsOpenThemeDataPresent() != 0
                                                                                                  ? 8
                                                                                                  : 0);
  *(_DWORD *)(*((_QWORD *)this + 10) + 412LL) = *(_DWORD *)(*((_QWORD *)this + 9) + 412LL);
  *(_BYTE *)(*((_QWORD *)this + 10) + 736LL) ^= (*(_BYTE *)(*((_QWORD *)this + 9) + 736LL) ^ *(_BYTE *)(*((_QWORD *)this + 10) + 736LL)) & 2;
  *(_DWORD *)(*((_QWORD *)this + 10) + 116LL) &= 0xFF30FFFF;
  if ( *((_DWORD *)this + 4) != 2 || *((_BYTE *)this + 21) )
    *(_DWORD *)(*((_QWORD *)this + 10) + 116LL) |= 0xCF0000u;
  *(_DWORD *)(*((_QWORD *)this + 10) + 116LL) &= ~0x20000000u;
  if ( CWindowIconic::WasMaximized(this) )
    *(_DWORD *)(*((_QWORD *)this + 10) + 116LL) |= 0x1000000u;
  CTopLevelWindow::OnWindowStyleUpdated(*((CTopLevelWindow **)this + 11));
  if ( a2 )
  {
    v6 = CContainerVisual::RenderRecursive(*((CContainerVisual **)this + 11));
    v4 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x22Cu, 0LL);
  }
  return v4;
}
