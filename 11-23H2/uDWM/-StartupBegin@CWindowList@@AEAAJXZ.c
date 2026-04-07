/*
 * XREFs of ?StartupBegin@CWindowList@@AEAAJXZ @ 0x180027FF8
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180049B90 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x180025CB4 (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 *     ?SetPreferences@CDesktopManager@@SAXK@Z @ 0x180025CE0 (-SetPreferences@CDesktopManager@@SAXK@Z.c)
 *     ?EnsureDCompResources@CDesktopManager@@QEAAJXZ @ 0x180028098 (-EnsureDCompResources@CDesktopManager@@QEAAJXZ.c)
 *     ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x18002E98C (-SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18003CB74 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::StartupBegin(CWindowList *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  unsigned __int64 v6; // [rsp+48h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  GetDesktopID(1LL, &v6);
  v2 = CDesktopManager::SendSwitchModeCommand(v6);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x1B02u, 0LL);
  }
  else
  {
    v4 = CDesktopManager::EnsureDCompResources(CDesktopManager::s_pDesktopManagerInstance);
    v3 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x1B05u, 0LL);
    }
    else
    {
      *((_BYTE *)this + 640) = (unsigned __int8)CDesktopManager::CheckAnyPreference(0x10u) == 0;
      CDesktopManager::SetPreferences();
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v7);
  return v3;
}
