/*
 * XREFs of ??_GCLauncherUIMode@@UEAAPEAXI@Z @ 0x1803A20C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCWRLObjectWithGITSite@@@Details@23@UIServiceProvider@@UIShouldSwitchToDesktop@@UILayoutPreferencesOnAppLaunch@@UIExecuteCommandHost@@UILocalCopyDownloadSettings@@UIWakeOnRPCCalls@@UILaunchTargetMonitor@@UIUpdateViewValueSet@@VFtmBase@23@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1803A1D38 (--1-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$ImplementsMark_ea_1803A1D38.c)
 */

CLauncherUIMode *__fastcall CLauncherUIMode::`scalar deleting destructor'(CLauncherUIMode *this, char a2)
{
  *((_DWORD *)this + 35) = -1073741823;
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,IServiceProvider,IShouldSwitchToDesktop,ILayoutPreferencesOnAppLaunch,IExecuteCommandHost,ILocalCopyDownloadSettings,IWakeOnRPCCalls,ILaunchTargetMonitor,IUpdateViewValueSet,Microsoft::WRL::FtmBase>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,IServiceProvider,IShouldSwitchToDesktop,ILayoutPreferencesOnAppLaunch,IExecuteCommandHost,ILocalCopyDownloadSettings,IWakeOnRPCCalls,ILaunchTargetMonitor,IUpdateViewValueSet,Microsoft::WRL::FtmBase>(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xB8);
  return this;
}
