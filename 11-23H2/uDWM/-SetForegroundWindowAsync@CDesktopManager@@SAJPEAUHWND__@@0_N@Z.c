/*
 * XREFs of ?SetForegroundWindowAsync@CDesktopManager@@SAJPEAUHWND__@@0_N@Z @ 0x1800B54B0
 * Callers:
 *     ?EnableInputHooksHelper@CDesktopManager@@SAJ_N0PEBGPEAPEAUHWND__@@@Z @ 0x1800B4004 (-EnableInputHooksHelper@CDesktopManager@@SAJ_N0PEBGPEAPEAUHWND__@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDesktopManager::SetForegroundWindowAsync(HWND hWnd, WPARAM wParam)
{
  signed int v2; // ebx
  signed int LastError; // eax

  v2 = 0;
  if ( CDesktopManager::s_pDesktopManagerInstance )
  {
    if ( *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 76) )
    {
      if ( hWnd )
      {
        SetLastError(0);
        if ( !PostMessageW(hWnd, 0x404u, wParam, 1LL) )
        {
          LastError = GetLastError();
          v2 = LastError;
          if ( LastError > 0 )
            v2 = (unsigned __int16)LastError | 0x80070000;
          if ( v2 >= 0 )
            v2 = -2003304445;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0xC89u);
        }
      }
    }
  }
  return (unsigned int)v2;
}
