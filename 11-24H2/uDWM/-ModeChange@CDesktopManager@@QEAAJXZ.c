/*
 * XREFs of ?ModeChange@CDesktopManager@@QEAAJXZ @ 0x18008E834
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJPEAK@Z @ 0x180009A3C (-UpdateSettings@CDesktopManager@@QEAAJPEAK@Z.c)
 *     ?RAILModeChanged@CWindowList@@UEAAXXZ @ 0x1800F1A90 (-RAILModeChanged@CWindowList@@UEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ @ 0x180033668 (-RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ.c)
 *     ?ModeChange@CAnalogCompositorManager@@SAJXZ @ 0x180055EFC (-ModeChange@CAnalogCompositorManager@@SAJXZ.c)
 *     ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x18006FBCC (-SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z.c)
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18008D05C (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1800A4184 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     McTemplateU0qqq_EtwEventWriteTransfer @ 0x1800BB9A8 (McTemplateU0qqq_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CDesktopManager::ModeChange(CDesktopManager *this)
{
  HDC DC; // rbx
  char DeviceCaps; // si
  int SystemMetrics; // ebx
  int v5; // eax
  int v6; // edx
  int v7; // eax
  unsigned int v8; // ebx
  int MonitorRenderTargets; // eax
  int v10; // eax
  void *v11; // rdx
  unsigned __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = 0LL;
  if ( (unsigned __int8)EtwEventEnabled(Microsoft_Windows_Dwm_Udwm_Provider_Context[0], &UdwmProcessModeChange_Info) )
  {
    DC = GetDC(0LL);
    DeviceCaps = GetDeviceCaps(DC, 12);
    ReleaseDC(0LL, DC);
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    {
      SystemMetrics = GetSystemMetrics(1);
      v5 = GetSystemMetrics(0);
      McTemplateU0qqq_EtwEventWriteTransfer(
        (unsigned int)Microsoft_Windows_Dwm_Udwm_Provider_Context,
        v6,
        v5,
        SystemMetrics,
        DeviceCaps);
    }
  }
  GetDesktopID(1LL, &v13);
  v7 = CDesktopManager::SendSwitchModeCommand(v13);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x404u, 0LL);
  }
  else if ( *((_BYTE *)this + 16)
         && (MonitorRenderTargets = CDesktopManager::CreateMonitorRenderTargets(this),
             v8 = MonitorRenderTargets,
             MonitorRenderTargets < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, MonitorRenderTargets, 0x408u, 0LL);
  }
  else
  {
    v10 = CAnalogCompositorManager::ModeChange();
    v8 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x40Eu, 0LL);
    else
      wil::details::SetEvent(
        *(wil::details **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7) + 72LL),
        v11);
  }
  CWindowList::RecreateDesktopWindowReplacementForDesktops(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                           + 53));
  return v8;
}
