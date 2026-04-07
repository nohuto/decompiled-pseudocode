/*
 * XREFs of ?CreateWindowWithNotify@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@@Z @ 0x18004E5E4
 * Callers:
 *     ?EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x18004E4AC (-EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?Create@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@@Z @ 0x18004E674 (-Create@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@@Z.c)
 *     ?SendTopLevelWindowCommand@CTopLevelWindow@@QEAAJPEAUHWND__@@PEAVCWindowData@@_N@Z @ 0x18004EB7C (-SendTopLevelWindowCommand@CTopLevelWindow@@QEAAJPEAUHWND__@@PEAVCWindowData@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CTopLevelWindow::CreateWindowWithNotify(HWND *a1, struct CTopLevelWindow **a2)
{
  int v4; // eax
  unsigned int v5; // edi
  HWND v6; // rsi
  bool v7; // r9
  HWND v8; // rdx
  HWND v10; // [rsp+50h] [rbp+18h] BYREF

  v4 = CTopLevelWindow::Create((struct CWindowData *)a1, a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x5Fu, 0LL);
  }
  else
  {
    v6 = a1[17];
    if ( !(unsigned int)GetDesktopID(4LL, &v10) || v10 != v6 )
    {
      v8 = a1[5];
      if ( v8 && (*((_BYTE *)a1 + 676) & 0x20) == 0 )
        CTopLevelWindow::SendTopLevelWindowCommand(*a2, v8, (struct CWindowData *)a1, v7);
    }
  }
  return v5;
}
