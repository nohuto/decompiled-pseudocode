/*
 * XREFs of ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x18002E98C
 * Callers:
 *     ?EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z @ 0x18001FAD8 (-EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z.c)
 *     ?StartupBegin@CWindowList@@AEAAJXZ @ 0x180027FF8 (-StartupBegin@CWindowList@@AEAAJXZ.c)
 *     ?ModeChange@CDesktopManager@@QEAAJXZ @ 0x18002B468 (-ModeChange@CDesktopManager@@QEAAJXZ.c)
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x18002E360 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180049B90 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ @ 0x18002EA28 (-GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ.c)
 *     ?UpdateRemotingMode@CDesktopManager@@AEAA_NXZ @ 0x18002EA98 (-UpdateRemotingMode@CDesktopManager@@AEAA_NXZ.c)
 *     ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z @ 0x180051228 (-IsLogonDesktop@CDesktopManager@@SA_N_K@Z.c)
 *     ?UpdateHolographicLockState@CAnalogCompositorManager@@AEAAJXZ @ 0x18005271C (-UpdateHolographicLockState@CAnalogCompositorManager@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopManager::SendSwitchModeCommand(unsigned __int64 a1)
{
  CDesktopManager *v2; // rax
  unsigned int v3; // ebx
  unsigned int v4; // esi
  int v5; // eax
  unsigned int v6; // ebx
  struct CAnalogCompositorManager *Instance; // rax
  int updated; // eax
  bool v10; // zf

  CDesktopManager::UpdateRemotingMode(CDesktopManager::s_pDesktopManagerInstance);
  v2 = CDesktopManager::s_pDesktopManagerInstance;
  v3 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 8);
  v4 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 9);
  if ( v3 == 5 )
  {
    v10 = !CDesktopManager::IsLogonDesktop(a1);
    v2 = CDesktopManager::s_pDesktopManagerInstance;
    if ( !v10 )
      v3 = 3;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)v2 + 6) + 24LL) + 184LL))(
         *(_QWORD *)(*((_QWORD *)v2 + 6) + 24LL),
         v3,
         v4);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x142u, 0LL);
  }
  else
  {
    Instance = CAnalogCompositorManager::GetInstance();
    *((_QWORD *)Instance + 8) = a1;
    updated = CAnalogCompositorManager::UpdateHolographicLockState(Instance);
    v6 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x145u, 0LL);
  }
  return v6;
}
