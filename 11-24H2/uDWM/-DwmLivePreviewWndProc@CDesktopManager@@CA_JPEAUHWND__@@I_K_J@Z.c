/*
 * XREFs of ?DwmLivePreviewWndProc@CDesktopManager@@CA_JPEAUHWND__@@I_K_J@Z @ 0x180079DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DeActivate@CLivePreview@@QEAAJ_N@Z @ 0x1800476AC (-DeActivate@CLivePreview@@QEAAJ_N@Z.c)
 */

// Hidden C++ exception states: #wind=2
LRESULT __fastcall CDesktopManager::DwmLivePreviewWndProc(HWND hWnd, UINT Msg, HWND a3, LPARAM lParam)
{
  HWND v7; // rdi
  struct _RTL_CRITICAL_SECTION *v8; // rbx
  LRESULT v9; // r12
  char v10; // si
  char v11; // r15
  signed int v13; // eax
  signed int LastError; // eax

  v7 = hWnd;
  v8 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v9 = 0LL;
  v10 = 1;
  v11 = 0;
  if ( Msg == 6 )
  {
    if ( (_WORD)a3 )
      goto LABEL_6;
    *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 144) = 0LL;
  }
  else if ( Msg != 31 )
  {
    if ( Msg == 71 )
    {
      if ( (*(_BYTE *)(lParam + 32) & 0x40) == 0 )
        goto LABEL_6;
      LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
      SetLastError(0);
      if ( SetForegroundWindow(v7) )
      {
        LockSetForegroundWindow(1u);
      }
      else
      {
        LastError = GetLastError();
        if ( LastError > 0 )
          LastError = (unsigned __int16)LastError | 0x80070000;
        if ( LastError >= 0 )
          LastError = -2003304445;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, LastError, 0x9E3u, 0LL);
        v11 = 1;
      }
      goto LABEL_32;
    }
    if ( Msg != 257 )
    {
      if ( Msg != 1028 )
      {
LABEL_6:
        LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
        v8 = 0LL;
        v9 = DefWindowProcW(v7, Msg, (WPARAM)a3, lParam);
        goto LABEL_7;
      }
      LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
      SetLastError(0);
      if ( SetWindowPos(a3, 0LL, 0, 0, 0, 0, lParam != 0 ? 67 : 83) )
      {
        v7 = hWnd;
      }
      else
      {
        v13 = GetLastError();
        if ( v13 > 0 )
          v13 = (unsigned __int16)v13 | 0x80070000;
        if ( v13 >= 0 )
          v13 = -2003304445;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x9CDu, 0LL);
        v7 = hWnd;
        if ( a3 == hWnd )
          v11 = 1;
      }
      v10 = 0;
LABEL_32:
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      if ( !v11 )
        goto LABEL_10;
      goto LABEL_36;
    }
    if ( (unsigned __int64)a3 - 91 > 1 )
      goto LABEL_6;
    v10 = 0;
  }
LABEL_36:
  CLivePreview::DeActivate(*((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 57), 0);
LABEL_10:
  if ( v10 )
    goto LABEL_6;
LABEL_7:
  if ( v8 )
    LeaveCriticalSection(v8);
  return v9;
}
