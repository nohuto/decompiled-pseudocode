/*
 * XREFs of ??1CWRLObjectWithGITSite@@IEAA@XZ @ 0x1801DFE30
 * Callers:
 *     ??1?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VCWRLObjectWithGITSite@@@Details@23@VCImmersiveShellComponent@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1801B1998 (--1-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00U-$ImplementsMarker@VCWRLObject.c)
 *     ??1?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VFtmBase@WRL@Microsoft@@@Details@23@VCWRLObjectWithGITSite@@UIActiveZBand@@UIImmersiveSystemMode@@UIImmersiveSystemModeInternal@@U7@VIImmersiveSystemModeNotificationServicePrivate@@VIActiveZBandNotificationServicePrivate@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveMonitorNotification@@UIDesktopVisibilityService@@UIDesktopVisibilityChangesNotification@@@23@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1801DFE08 (--1-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$ImplementsMark_ea_1801DFE08.c)
 *     ??1?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCWRLObjectWithGITSite@@@Details@23@VFtmBase@23@UITabletModeCoverWindow@@UITabletModeChrome@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1802CD8E0 (--1-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$ImplementsMark_ea_1802CD8E0.c)
 *     ??1?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCWRLObjectWithGITSite@@@Details@23@U?$ChainInterfaces@UIApplicationFrameServiceTestability@@UIApplicationFrameService@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationFrameEventHandler@@VFtmBase@23@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1802FF00C (--1-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$ImplementsMark_ea_1802FF00C.c)
 *     ??1?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@VCWRLObjectWithGITSite@@@Details@23@UIImmersiveApplication@@UIImmersiveApplication2@@UIImmersiveApplicationHolographic@@UIImmersiveApplicationInternal@@UIObjectWithWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@VObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@V?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@UIServiceProvider@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1803015CC (--1-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00U-$ImplementsMarker@VCWRLObject.c)
 *     ??1?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@VCWRLObjectWithGITSite@@@Details@23@VCActivatedEventArgsWithViewIdBase@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x18032CF44 (--1-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00U-$ImplementsMarke_ea_18032CF44.c)
 *     ??1?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCWRLObjectWithGITSite@@@Details@23@UIServiceProvider@@UIShouldSwitchToDesktop@@UILayoutPreferencesOnAppLaunch@@UIExecuteCommandHost@@UILocalCopyDownloadSettings@@UIWakeOnRPCCalls@@UILaunchTargetMonitor@@UIUpdateViewValueSet@@VFtmBase@23@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1803A1D38 (--1-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$ImplementsMark_ea_1803A1D38.c)
 *     ??1?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VCWRLObjectWithGITSite@@@Details@23@VCServiceHostComponent@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1805837B0 (--1-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00U-$ImplementsMarke_ea_1805837B0.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UILaunchTargetMonitor@@UIServiceProvider@@VCWRLObjectWithGITSite@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18067F820 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UILaunchTargetMonitor@@UIServiceProvi.c)
 *     ??_ECLaunchToMonitor@@UEAAPEAXI@Z @ 0x18067F8F0 (--_ECLaunchToMonitor@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Revoke@GlobalInterfaceTable@@SAXK@Z @ 0x1801DFE6C (-Revoke@GlobalInterfaceTable@@SAXK@Z.c)
 */

void __fastcall CWRLObjectWithGITSite::~CWRLObjectWithGITSite(CWRLObjectWithGITSite *this)
{
  unsigned int v2; // ecx

  *(_QWORD *)this = &CWRLObjectWithGITSite::`vftable';
  v2 = *((_DWORD *)this + 6);
  if ( v2 )
  {
    GlobalInterfaceTable::Revoke(v2);
    *((_DWORD *)this + 6) = 0;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 4);
}
