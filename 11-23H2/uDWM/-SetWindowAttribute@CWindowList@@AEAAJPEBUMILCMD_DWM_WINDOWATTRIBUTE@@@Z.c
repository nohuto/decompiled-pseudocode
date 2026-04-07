/*
 * XREFs of ?SetWindowAttribute@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWATTRIBUTE@@@Z @ 0x180007DD4
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180049B90 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?SetThemeAttributesAttribute@CWindowList@@AEAAJPEAUHWND__@@K@Z @ 0x180007E50 (-SetThemeAttributesAttribute@CWindowList@@AEAAJPEAUHWND__@@K@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18003CB74 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::SetWindowAttribute(CWindowList *this, const struct MILCMD_DWM_WINDOWATTRIBUTE *a2)
{
  unsigned int v4; // ebx
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = &CDesktopManager::s_csDwmInstance;
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
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v6);
  return v4;
}
