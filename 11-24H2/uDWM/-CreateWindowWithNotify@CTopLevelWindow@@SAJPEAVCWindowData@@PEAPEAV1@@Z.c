/*
 * XREFs of ?CreateWindowWithNotify@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@@Z @ 0x18002EFF8
 * Callers:
 *     ?EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x18001D19C (-EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@@Z @ 0x18002F080 (-Create@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@@Z.c)
 *     ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z @ 0x18002F6B4 (-IsLogonDesktop@CDesktopManager@@SA_N_K@Z.c)
 *     ?SendTopLevelWindowCommand@CTopLevelWindow@@QEAAJPEAUHWND__@@PEAVCWindowData@@_N@Z @ 0x1800300C0 (-SendTopLevelWindowCommand@CTopLevelWindow@@QEAAJPEAUHWND__@@PEAVCWindowData@@_N@Z.c)
 */

__int64 __fastcall CTopLevelWindow::CreateWindowWithNotify(struct CWindowData *a1, struct CTopLevelWindow **a2)
{
  int v4; // eax
  unsigned int v5; // edi
  bool v7; // r9
  HWND v8; // rdx

  v4 = CTopLevelWindow::Create(a1, a2);
  v5 = v4;
  if ( v4 >= 0 )
  {
    if ( !CDesktopManager::IsLogonDesktop(*((_QWORD *)a1 + 17)) )
    {
      v8 = (HWND)*((_QWORD *)a1 + 5);
      if ( v8 )
      {
        if ( (*((_BYTE *)a1 + 740) & 0x20) == 0 )
          CTopLevelWindow::SendTopLevelWindowCommand(*a2, v8, a1, v7);
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x5Cu, 0LL);
  }
  return v5;
}
