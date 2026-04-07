/*
 * XREFs of ?DwmLivePreviewWndProc@CDesktopManager@@CA_JPEAUHWND__@@I_K_J@Z @ 0x1800B3D60
 * Callers:
 *     <none>
 * Callees:
 *     ?DeActivate@CLivePreview@@QEAAJ_N@Z @ 0x18001D5E4 (-DeActivate@CLivePreview@@QEAAJ_N@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18003CB74 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=2
LRESULT __fastcall CDesktopManager::DwmLivePreviewWndProc(HWND hWnd, UINT Msg, HWND wParam, LPARAM lParam)
{
  LRESULT v8; // rdi
  char v9; // si
  char v10; // r15
  signed int v11; // eax
  signed int LastError; // eax
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+40h] [rbp-38h] BYREF
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+48h] [rbp-30h]

  v14 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v8 = 0LL;
  v9 = 1;
  v10 = 0;
  if ( Msg == 6 )
  {
    if ( (_WORD)wParam )
      goto LABEL_30;
    *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 78) = 0LL;
  }
  else if ( Msg != 31 )
  {
    if ( Msg == 71 )
    {
      if ( (*(_BYTE *)(lParam + 32) & 0x40) != 0 )
      {
        v15 = &CDesktopManager::s_csDwmInstance;
        LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
        SetLastError(0);
        if ( SetForegroundWindow(hWnd) )
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
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, LastError, 0x9FEu);
          v10 = 1;
        }
LABEL_24:
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
        if ( !v10 )
          goto LABEL_29;
        goto LABEL_28;
      }
LABEL_30:
      LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
      v14 = 0LL;
      v8 = DefWindowProcW(hWnd, Msg, (WPARAM)wParam, lParam);
      goto LABEL_31;
    }
    if ( Msg != 257 )
    {
      if ( Msg == 1028 )
      {
        v15 = &CDesktopManager::s_csDwmInstance;
        LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
        SetLastError(0);
        if ( !SetWindowPos(wParam, 0LL, 0, 0, 0, 0, lParam != 0 ? 67 : 83) )
        {
          v11 = GetLastError();
          if ( v11 > 0 )
            v11 = (unsigned __int16)v11 | 0x80070000;
          if ( v11 >= 0 )
            v11 = -2003304445;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x9E8u);
          if ( wParam == hWnd )
            v10 = 1;
        }
        v9 = 0;
        goto LABEL_24;
      }
      goto LABEL_30;
    }
    if ( (unsigned __int64)wParam - 91 > 1 )
      goto LABEL_30;
    v9 = 0;
  }
LABEL_28:
  CLivePreview::DeActivate(*((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 57), 0);
LABEL_29:
  if ( v9 )
    goto LABEL_30;
LABEL_31:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v14);
  return v8;
}
