/*
 * XREFs of ?query_interface@?$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x18023B7E0
 * Callers:
 *     ?QueryInterface@?$implements@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@U13456@UIWindowTabHost@3456@Uimmersive_shell_component@6@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@U?$cloaked@UIWindowTabHostInternal@Shell@Internal@Windows@@@6@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180185250 (-QueryInterface@-$implements@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@U13456@.c)
 *     ?QueryInterface@?$implements@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UITaskGroupHost@34567@UITaskGroupDataModelSingleton@34567@UITaskGroupsComponent@DesktopTaskGroups@4567@UIApplicationViewChangeListener@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801DECC0 (-QueryInterface@-$implements@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windo.c)
 *     ?QueryInterface@?$implements@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIDragDropSimulator@34567@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802218A0 (-QueryInterface@-$implements@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@.c)
 *     ?QueryInterface@?$implements@VTouchGestureComponent@@Uimmersive_shell_component@winrt@@UIGlobalRudeWindowNotifications@@UIInputHostLayoutChanges@@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180224850 (-QueryInterface@-$implements@VTouchGestureComponent@@Uimmersive_shell_component@winrt@@UIGlobalR.c)
 *     ?QueryInterface@?$implements@UImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@6@UIImeContextMenuExperienceManager@@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180227B50 (-QueryInterface@-$implements@UImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@.c)
 *     ?QueryInterface@?$implements@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIThemeCoordinator@34567@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180229E00 (-QueryInterface@-$implements@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@.c)
 *     ?QueryInterface@?$implements@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIApplicationViewChangeListener@@UIWindowSnappingEvents@@Uimmersive_shell_component@6@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180297080 (-QueryInterface@-$implements@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt.c)
 *     ?QueryInterface@?$implements@VGamingPosturePositioner@@Uimmersive_shell_component@winrt@@UIGamingPosturePositioner@@UIBasicPositioner@@UIShellPositionerViewHandoff@@UIImmersiveMonitorNotification@@UIPositionerApplicationClosePolicy@@UIApplicationViewChangeListener@@UIInternalFullScreenHandler@@UIWindowManagementShowMoveSizeEvents@@UIWindowManagementWindowGroupingEvents@@Unon_agile@3@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180505660 (-QueryInterface@-$implements@VGamingPosturePositioner@@Uimmersive_shell_component@winrt@@UIGamin.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::query_interface(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v3; // rbx
  __int64 v6; // rax
  signed __int64 v7; // rax
  signed __int64 v8; // rtt

  v3 = a1;
  if ( !a1 )
    a1 = 32LL;
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1);
  *a3 = v6;
  if ( !v6 )
    return winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::RemoteSystemStateChangedEventArgs,winrt::Windows::Internal::Shell::RemoteSystemStateChangedEventArgs>::query_interface_common(
             v3,
             a2,
             a3);
  v7 = *(_QWORD *)(v3 + 8);
  while ( v7 >= 0 )
  {
    v8 = v7;
    v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 8), v7 + 1, v7);
    if ( v8 == v7 )
      return 0LL;
  }
  _InterlockedIncrement((volatile signed __int32 *)(2 * v7 + 24));
  return 0LL;
}
