/*
 * XREFs of ?SetNotifyWindow@CImmersiveIconicBitmapRegistry@@QEAAXPEAUHWND__@@@Z @ 0x18008817C
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180090650 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x18003E04C (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 */

void __fastcall CImmersiveIconicBitmapRegistry::SetNotifyWindow(CImmersiveIconicBitmapRegistry *this, HWND a2)
{
  HWND ShellWindowForDesktop; // rdi
  unsigned __int64 v5[3]; // [rsp+20h] [rbp-18h] BYREF
  DWORD dwProcessId; // [rsp+50h] [rbp+18h] BYREF
  DWORD v7; // [rsp+58h] [rbp+20h] BYREF

  v5[0] = 0LL;
  if ( (unsigned int)GetDesktopID(2LL, v5) )
  {
    ShellWindowForDesktop = (HWND)CWindowList::GetShellWindowForDesktop(
                                    *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                                    v5[0]);
    if ( ShellWindowForDesktop )
    {
      dwProcessId = 0;
      v7 = 0;
      if ( GetWindowThreadProcessId(a2, &dwProcessId) )
      {
        if ( GetWindowThreadProcessId(ShellWindowForDesktop, &v7) )
        {
          if ( v7 == dwProcessId )
            *((_QWORD *)this + 10) = a2;
        }
      }
    }
  }
}
