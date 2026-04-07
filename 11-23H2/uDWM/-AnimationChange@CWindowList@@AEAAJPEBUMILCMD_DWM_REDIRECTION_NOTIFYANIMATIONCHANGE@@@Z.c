/*
 * XREFs of ?AnimationChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYANIMATIONCHANGE@@@Z @ 0x180108DD8
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180049B90 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?SetWindowAnimation@CDesktopManager@@SAX_N@Z @ 0x18002D424 (-SetWindowAnimation@CDesktopManager@@SAX_N@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18003CB74 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x18004CE14 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::AnimationChange(
        CWindowList *this,
        const struct MILCMD_DWM_REDIRECTION_NOTIFYANIMATIONCHANGE *a2)
{
  unsigned int v4; // ebx
  HWND v5; // rdx
  int SyncedWindowDataByHwnd; // eax
  struct CWindowData *v8; // [rsp+48h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  v5 = *(HWND *)((char *)a2 + 4);
  if ( v5 )
  {
    v8 = 0LL;
    SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, v5, &v8);
    v4 = SyncedWindowDataByHwnd;
    if ( SyncedWindowDataByHwnd >= 0 )
    {
      if ( v8 )
        *((_BYTE *)v8 + 672) = *((_BYTE *)v8 + 672) & 0xDF | (*((_DWORD *)a2 + 3) == 0 ? 0x20 : 0);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, SyncedWindowDataByHwnd, 0x1C33u);
    }
  }
  else
  {
    CDesktopManager::SetWindowAnimation(*((_DWORD *)a2 + 3) != 0);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v9);
  return v4;
}
