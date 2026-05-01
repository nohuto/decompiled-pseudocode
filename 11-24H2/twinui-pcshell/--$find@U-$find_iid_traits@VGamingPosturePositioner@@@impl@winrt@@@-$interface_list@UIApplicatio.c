/*
 * XREFs of ??$find@U?$find_iid_traits@VGamingPosturePositioner@@@impl@winrt@@@?$interface_list@UIApplicationViewChangeListener@@UIInternalFullScreenHandler@@UIWindowManagementShowMoveSizeEvents@@UIWindowManagementWindowGroupingEvents@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@VGamingPosturePositioner@@@12@@Z @ 0x1804F7FC8
 * Callers:
 *     ??$find@U?$find_iid_traits@VGamingPosturePositioner@@@impl@winrt@@@?$interface_list@UIImmersiveMonitorNotification@@UIPositionerApplicationClosePolicy@@UIApplicationViewChangeListener@@UIInternalFullScreenHandler@@UIWindowManagementShowMoveSizeEvents@@UIWindowManagementWindowGroupingEvents@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@VGamingPosturePositioner@@@12@@Z @ 0x1804F8080 (--$find@U-$find_iid_traits@VGamingPosturePositioner@@@impl@winrt@@@-$interface_list@UIImmersiveM.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<IApplicationViewChangeListener,IInternalFullScreenHandler,IWindowManagementShowMoveSizeEvents,IWindowManagementWindowGroupingEvents>::find<winrt::impl::find_iid_traits<GamingPosturePositioner>>(
        __int64 *a1)
{
  _QWORD *v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rcx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<IApplicationViewChangeListener> && v1[1] == 0x5C48281337B642A9LL )
  {
    v2 = *a1;
    v3 = *a1 + 40;
    return v3 & -(__int64)(v2 != 0);
  }
  if ( *v1 == winrt::impl::guid_v<IInternalFullScreenHandler> && v1[1] == 0x75D76BE3E41239BCLL )
  {
    v2 = *a1;
    v3 = *a1 + 48;
    return v3 & -(__int64)(v2 != 0);
  }
  return winrt::impl::interface_list<IWindowManagementShowMoveSizeEvents,IWindowManagementWindowGroupingEvents>::find<winrt::impl::find_iid_traits<GamingPosturePositioner>>();
}
