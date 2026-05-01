/*
 * XREFs of ??$find@U?$find_iid_traits@VGamingPosturePositioner@@@impl@winrt@@@?$interface_list@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIGamingPosturePositioner@@UIBasicPositioner@@UIShellPositionerViewHandoff@@UIImmersiveMonitorNotification@@UIPositionerApplicationClosePolicy@@UIApplicationViewChangeListener@@UIInternalFullScreenHandler@@UIWindowManagementShowMoveSizeEvents@@UIWindowManagementWindowGroupingEvents@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@VGamingPosturePositioner@@@12@@Z @ 0x1804F8134
 * Callers:
 *     ?find_interface@?$implements@VGamingPosturePositioner@@Uimmersive_shell_component@winrt@@UIGamingPosturePositioner@@UIBasicPositioner@@UIShellPositionerViewHandoff@@UIImmersiveMonitorNotification@@UIPositionerApplicationClosePolicy@@UIApplicationViewChangeListener@@UIInternalFullScreenHandler@@UIWindowManagementShowMoveSizeEvents@@UIWindowManagementWindowGroupingEvents@@Unon_agile@3@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180508B20 (-find_interface@-$implements@VGamingPosturePositioner@@Uimmersive_shell_component@winrt@@UIGamin.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable,IGamingPosturePositioner,IBasicPositioner,IShellPositionerViewHandoff,IImmersiveMonitorNotification,IPositionerApplicationClosePolicy,IApplicationViewChangeListener,IInternalFullScreenHandler,IWindowManagementShowMoveSizeEvents,IWindowManagementWindowGroupingEvents>::find<winrt::impl::find_iid_traits<GamingPosturePositioner>>(
        __int64 *a1)
{
  _QWORD *v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rcx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<IServiceProvider> && v1[1] == 0xFA096000AA003480uLL )
  {
    v2 = *a1;
    v3 = *a1 + 80;
    return v3 & -(__int64)(v2 != 0);
  }
  if ( *v1 == winrt::impl::guid_v<IImmersiveShellComponent> && v1[1] == 0xC45FA8EF5C7AA582uLL )
  {
    v2 = *a1;
    v3 = *a1 + 88;
    return v3 & -(__int64)(v2 != 0);
  }
  return winrt::impl::interface_list<winrt::Windows::Foundation::IInspectable,IGamingPosturePositioner,IBasicPositioner,IShellPositionerViewHandoff,IImmersiveMonitorNotification,IPositionerApplicationClosePolicy,IApplicationViewChangeListener,IInternalFullScreenHandler,IWindowManagementShowMoveSizeEvents,IWindowManagementWindowGroupingEvents>::find<winrt::impl::find_iid_traits<GamingPosturePositioner>>(a1);
}
