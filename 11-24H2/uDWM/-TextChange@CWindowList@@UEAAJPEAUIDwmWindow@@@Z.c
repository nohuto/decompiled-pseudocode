/*
 * XREFs of ?TextChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180055280
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x1800063C4 (-OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?OnTitleUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18001B614 (-OnTitleUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetTitle@CWindowData@@QEAAJPEAGH@Z @ 0x1800553D0 (-SetTitle@CWindowData@@QEAAJPEAGH@Z.c)
 *     ?OnWindowTitleChange@CLivePreview@@QEAAXPEBVCWindowData@@@Z @ 0x180055838 (-OnWindowTitleChange@CLivePreview@@QEAAXPEBVCWindowData@@@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180093CB4 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::TextChange(CWindowList *this, struct IDwmWindow *a2)
{
  unsigned int v4; // esi
  CWindowData *v5; // rbx
  int WindowText; // eax
  int v7; // eax
  CTopLevelWindow *v8; // rcx
  CWindowIconic *v9; // rcx
  int v11; // eax
  CWindowData *v12[2]; // [rsp+30h] [rbp-238h] BYREF
  WCHAR pString[256]; // [rsp+40h] [rbp-228h] BYREF

  v4 = 0;
  v12[1] = (CWindowData *)&CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v12[0] = 0LL;
  CWindowList::GetSyncedWindowData(this, a2, 0, v12);
  v5 = v12[0];
  if ( v12[0] )
  {
    WindowText = InternalGetWindowText(*((HWND *)v12[0] + 5), pString, 256);
    v7 = CWindowData::SetTitle(v5, pString, WindowText);
    v4 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x1957u, 0LL);
    }
    else
    {
      v8 = (CTopLevelWindow *)*((_QWORD *)v5 + 55);
      if ( v8 )
        CTopLevelWindow::OnTitleUpdated(v8);
      v9 = (CWindowIconic *)*((_QWORD *)v5 + 61);
      if ( v9 && (v11 = CWindowIconic::OnTitleUpdated(v9, 1), v4 = v11, v11 < 0) )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x1960u, 0LL);
      else
        CLivePreview::OnWindowTitleChange(*((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 57), v5);
    }
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v4;
}
