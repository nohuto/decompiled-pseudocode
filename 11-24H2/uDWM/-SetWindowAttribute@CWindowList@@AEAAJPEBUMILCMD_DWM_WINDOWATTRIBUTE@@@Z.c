/*
 * XREFs of ?SetWindowAttribute@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWATTRIBUTE@@@Z @ 0x18007A7F0
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180090650 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?SetThemeAttributesAttribute@CWindowList@@AEAAJPEAUHWND__@@K@Z @ 0x180093B00 (-SetThemeAttributesAttribute@CWindowList@@AEAAJPEAUHWND__@@K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::SetWindowAttribute(CWindowList *this, const struct MILCMD_DWM_WINDOWATTRIBUTE *a2)
{
  unsigned int v4; // ebx

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = -2147024872;
  if ( *((_DWORD *)a2 + 4) == 10 )
  {
    if ( *((_DWORD *)a2 + 5) == 4 )
    {
      CWindowList::SetThemeAttributesAttribute(this, *((HWND *)a2 + 1), *((_DWORD *)a2 + 6));
      v4 = 0;
    }
  }
  else
  {
    v4 = -2147024809;
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v4;
}
