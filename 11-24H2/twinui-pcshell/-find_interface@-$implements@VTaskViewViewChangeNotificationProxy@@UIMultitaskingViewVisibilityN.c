/*
 * XREFs of ?find_interface@?$implements@VTaskViewViewChangeNotificationProxy@@UIMultitaskingViewVisibilityNotification@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180210B90
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@U?$find_iid_traits@VVirtualDestopSwitcherViewChangeNotificationProxy@@@impl@winrt@@@?$interface_list@UIMultitaskingViewVisibilityNotification@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@VVirtualDestopSwitcherViewChangeNotificationProxy@@@12@@Z @ 0x1804A2308 (--$find@U-$find_iid_traits@VVirtualDestopSwitcherViewChangeNotificationProxy@@@impl@winrt@@@-$in.c)
 */

__int64 __fastcall winrt::implements<TaskViewViewChangeNotificationProxy,IMultitaskingViewVisibilityNotification>::find_interface(
        __int64 a1,
        __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[1] = a2;
  v3[0] = a1 - 8;
  return winrt::impl::interface_list<IMultitaskingViewVisibilityNotification>::find<winrt::impl::find_iid_traits<VirtualDestopSwitcherViewChangeNotificationProxy>>(v3);
}
