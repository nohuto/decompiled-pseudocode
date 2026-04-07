/*
 * XREFs of ?EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z @ 0x18001FAD8
 * Callers:
 *     ?StartupEnd@CWindowList@@AEAAJXZ @ 0x18001FA74 (-StartupEnd@CWindowList@@AEAAJXZ.c)
 *     ?NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ @ 0x1800B4D00 (-NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ.c)
 * Callees:
 *     ?SetRoot@CVisualTargetProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x18001FBBC (-SetRoot@CVisualTargetProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z @ 0x18001FC44 (-CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z.c)
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x180029FFC (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x18002D59C (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z @ 0x18002D6C4 (-BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z.c)
 *     ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x18002E98C (-SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ReleaseMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x1800B5234 (-ReleaseMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 */

__int64 __fastcall CDesktopManager::EnableMonitorRenderTargets(CVisualTargetProxy **this, char a2)
{
  unsigned int v2; // ebx
  int v5; // eax
  CWindowList *v6; // rbx
  struct CVisual *RenderTargetRootVisualForDesktop; // rax
  int v8; // eax
  int MonitorRenderTargets; // eax
  bool v10; // dl
  int v12; // eax
  unsigned __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( a2 != *((_BYTE *)this + 16) )
  {
    if ( a2 )
    {
      GetDesktopID(1LL, &v13);
      v5 = CDesktopManager::SendSwitchModeCommand(v13);
      v2 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x670u, 0LL);
        return v2;
      }
      v6 = (CWindowList *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 54);
      RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(v6, v13);
      CWindowList::BringDesktopToFront(v6, RenderTargetRootVisualForDesktop);
      v8 = CVisualTargetProxy::SetRoot(
             this[12],
             *(struct CVisualProxy **)(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 54) + 80LL)
                                     + 16LL));
      v2 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x672u, 0LL);
        return v2;
      }
      MonitorRenderTargets = CDesktopManager::CreateMonitorRenderTargets((CDesktopManager *)this);
      v2 = MonitorRenderTargets;
      if ( MonitorRenderTargets < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, MonitorRenderTargets, 0x673u, 0LL);
        return v2;
      }
      v10 = 1;
    }
    else
    {
      (*(void (__fastcall **)(CVisualTargetProxy *, _QWORD))(*(_QWORD *)this[10] + 24LL))(this[10], 0LL);
      v12 = CDesktopManager::ReleaseMonitorRenderTargets((CDesktopManager *)this);
      v2 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x67Du, 0LL);
        return v2;
      }
      v10 = 0;
    }
    CWindowList::CreateOrDestroyDesktopWindowReplacementForDesktops(
      *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
      v10);
    *((_BYTE *)this + 16) = a2;
  }
  return v2;
}
