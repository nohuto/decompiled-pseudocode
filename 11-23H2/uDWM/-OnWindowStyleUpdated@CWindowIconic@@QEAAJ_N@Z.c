/*
 * XREFs of ?OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x180106FD8
 * Callers:
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002EB90 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?OnWindowStyleUpdated@CWindowData@@QEAAJXZ @ 0x18004D684 (-OnWindowStyleUpdated@CWindowData@@QEAAJXZ.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x180106658 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z @ 0x180107100 (-SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z.c)
 *     ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x180107224 (-SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 * Callees:
 *     ?RenderRecursive@CVisual@@UEAAJXZ @ 0x180016A50 (-RenderRecursive@CVisual@@UEAAJXZ.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow@@QEAAJXZ @ 0x18004D758 (-OnWindowStyleUpdated@CTopLevelWindow@@QEAAJXZ.c)
 *     IsOpenThemeDataPresent @ 0x18005DB28 (IsOpenThemeDataPresent.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?WasMaximized@CWindowIconic@@AEAA_NXZ @ 0x18006EE26 (-WasMaximized@CWindowIconic@@AEAA_NXZ.c)
 */

__int64 __fastcall CWindowIconic::OnWindowStyleUpdated(CWindowIconic *this, char a2)
{
  unsigned int v4; // edi
  int v5; // eax

  v4 = 0;
  *(_DWORD *)(*((_QWORD *)this + 10) + 116LL) = *(_DWORD *)(*((_QWORD *)this + 9) + 116LL);
  *(_DWORD *)(*((_QWORD *)this + 10) + 120LL) = *(_DWORD *)(*((_QWORD *)this + 9) + 120LL);
  *(_DWORD *)(*((_QWORD *)this + 10) + 124LL) = *(_DWORD *)(*((_QWORD *)this + 9) + 124LL);
  *(_BYTE *)(*((_QWORD *)this + 10) + 672LL) = (IsOpenThemeDataPresent() != 0 ? 8 : 0) | *(_BYTE *)(*((_QWORD *)this + 10)
                                                                                                  + 672LL) & 0xF7;
  *(_DWORD *)(*((_QWORD *)this + 10) + 412LL) = *(_DWORD *)(*((_QWORD *)this + 9) + 412LL);
  *(_BYTE *)(*((_QWORD *)this + 10) + 672LL) ^= (*(_BYTE *)(*((_QWORD *)this + 10) + 672LL) ^ *(_BYTE *)(*((_QWORD *)this + 9) + 672LL)) & 2;
  *(_DWORD *)(*((_QWORD *)this + 10) + 116LL) &= 0xFF30FFFF;
  if ( *((_DWORD *)this + 4) != 2 || *((_BYTE *)this + 21) )
    *(_DWORD *)(*((_QWORD *)this + 10) + 116LL) |= 0xCF0000u;
  *(_DWORD *)(*((_QWORD *)this + 10) + 116LL) &= ~0x20000000u;
  if ( CWindowIconic::WasMaximized(this) )
    *(_DWORD *)(*((_QWORD *)this + 10) + 116LL) |= 0x1000000u;
  CTopLevelWindow::OnWindowStyleUpdated(*((CTopLevelWindow **)this + 11));
  if ( a2 )
  {
    v5 = CVisual::RenderRecursive(*((CVisual **)this + 11));
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x22Eu);
  }
  return v4;
}
