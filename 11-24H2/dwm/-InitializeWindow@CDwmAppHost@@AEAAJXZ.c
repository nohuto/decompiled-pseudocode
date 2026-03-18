/*
 * XREFs of ?InitializeWindow@CDwmAppHost@@AEAAJXZ @ 0x14000396C
 * Callers:
 *     ?Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z @ 0x140002EE0 (-Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x140002E0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x140005858 (memset_0.c)
 *     IsChangeWindowMessageFilterExPresent @ 0x1400058D8 (IsChangeWindowMessageFilterExPresent.c)
 */

__int64 __fastcall CDwmAppHost::InitializeWindow(CDwmAppHost *this)
{
  unsigned int v1; // ebx
  signed int LastError; // eax
  signed int v3; // eax
  unsigned int X; // [rsp+20h] [rbp-98h]
  WNDCLASSEXW v6; // [rsp+60h] [rbp-58h] BYREF

  v1 = 0;
  memset_0(&v6, 0, sizeof(v6));
  v6.cbSize = 80;
  v6.lpfnWndProc = (WNDPROC)CDwmAppHost::s_NotifyWndProc;
  v6.hInstance = hInstance;
  v6.lpszClassName = L"Dwm";
  SetLastError(0);
  if ( !RegisterClassExW(&v6) )
  {
    LastError = GetLastError();
    v1 = LastError;
    if ( LastError > 0 )
      v1 = (unsigned __int16)LastError | 0x80070000;
    X = 275;
LABEL_5:
    if ( (v1 & 0x80000000) == 0 )
      v1 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v1, X, 0LL);
    return v1;
  }
  SetLastError(0);
  hWnd = CreateWindowExW(0, L"Dwm", L"DWM Notification Window", 0xA0000000, 0, 0, 0, 0, 0LL, 0LL, hInstance, 0LL);
  if ( !hWnd )
  {
    v3 = GetLastError();
    v1 = v3;
    if ( v3 > 0 )
      v1 = (unsigned __int16)v3 | 0x80070000;
    X = 288;
    goto LABEL_5;
  }
  if ( (unsigned __int8)IsChangeWindowMessageFilterExPresent() )
  {
    ChangeWindowMessageFilterEx(hWnd, 0x1Au, 1u, 0LL);
    ChangeWindowMessageFilterEx(hWnd, 0x15u, 1u, 0LL);
    ChangeWindowMessageFilterEx(hWnd, 0x31Au, 1u, 0LL);
    ChangeWindowMessageFilterEx(hWnd, 0x31Bu, 1u, 0LL);
  }
  return v1;
}
