/*
 * XREFs of ?StartupEnd@CWindowList@@AEAAJXZ @ 0x18001FA74
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180049B90 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z @ 0x18001FAD8 (-EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z.c)
 *     ?ClearPreferences@CDesktopManager@@SAXK@Z @ 0x18001FC14 (-ClearPreferences@CDesktopManager@@SAXK@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18003CB74 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::StartupEnd(CWindowList *this)
{
  unsigned int v2; // ecx
  int v3; // eax
  unsigned int v4; // ebx
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( *((_BYTE *)this + 640) )
    CDesktopManager::ClearPreferences(v2);
  v3 = CDesktopManager::EnableMonitorRenderTargets(CDesktopManager::s_pDesktopManagerInstance, 1);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x1B1Au, 0LL);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v6);
  return v4;
}
