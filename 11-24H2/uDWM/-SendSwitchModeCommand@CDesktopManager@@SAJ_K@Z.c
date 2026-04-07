/*
 * XREFs of ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x18006FBCC
 * Callers:
 *     ?StartupBegin@CWindowList@@AEAAJXZ @ 0x18006FAF0 (-StartupBegin@CWindowList@@AEAAJXZ.c)
 *     ?EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z @ 0x180089ED0 (-EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z.c)
 *     ?ModeChange@CDesktopManager@@QEAAJXZ @ 0x18008E834 (-ModeChange@CDesktopManager@@QEAAJXZ.c)
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180090650 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x180092EB0 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z @ 0x18002F6B4 (-IsLogonDesktop@CDesktopManager@@SA_N_K@Z.c)
 *     ?GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ @ 0x180057D38 (-GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ.c)
 *     ?PartitionSwitchRemotingMode@CCompositor@@QEAAJW4Enum@DwmRemotingMode@@I@Z @ 0x180083754 (-PartitionSwitchRemotingMode@CCompositor@@QEAAJW4Enum@DwmRemotingMode@@I@Z.c)
 *     ?SignalDesktopModeSwitchImpl@CAnalogCompositorManager@@AEAAJ_K@Z @ 0x180086F40 (-SignalDesktopModeSwitchImpl@CAnalogCompositorManager@@AEAAJ_K@Z.c)
 *     ?UpdateRemotingMode@CDesktopManager@@AEAA_NXZ @ 0x18008E9A8 (-UpdateRemotingMode@CDesktopManager@@AEAA_NXZ.c)
 */

__int64 __fastcall CDesktopManager::SendSwitchModeCommand(unsigned __int64 a1)
{
  CDesktopManager *v2; // rcx
  unsigned int v3; // ebx
  unsigned int v4; // esi
  int v5; // eax
  unsigned int v6; // ebx
  CAnalogCompositorManager *Instance; // rax
  int v8; // eax

  CDesktopManager::UpdateRemotingMode(CDesktopManager::s_pDesktopManagerInstance);
  v2 = CDesktopManager::s_pDesktopManagerInstance;
  v3 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 8);
  v4 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 9);
  if ( v3 - 5 <= 1 )
  {
    if ( CDesktopManager::IsLogonDesktop(a1) )
      v3 = 3;
    v2 = CDesktopManager::s_pDesktopManagerInstance;
  }
  v5 = CCompositor::PartitionSwitchRemotingMode(*((_QWORD *)v2 + 6), v3, v4);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x121u, 0LL);
  }
  else
  {
    Instance = CAnalogCompositorManager::GetInstance();
    v8 = CAnalogCompositorManager::SignalDesktopModeSwitchImpl(Instance, a1);
    v6 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x124u, 0LL);
  }
  return v6;
}
