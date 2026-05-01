/*
 * XREFs of ??R_lambda_e608e5034e30ee0eacecb96a86560567_@@QEBA@AEBUIWindowTabsChangedEventArgsFactory@Shell@UI@Internal@Windows@winrt@@@Z @ 0x180050FB4
 * Callers:
 *     ??$call@AEAV_lambda_e608e5034e30ee0eacecb96a86560567_@@@?$factory_cache_entry@UWindowTabsChangedEventArgs@Shell@UI@Internal@Windows@winrt@@UIWindowTabsChangedEventArgsFactory@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_e608e5034e30ee0eacecb96a86560567_@@@Z @ 0x18057C854 (--$call@AEAV_lambda_e608e5034e30ee0eacecb96a86560567_@@@-$factory_cache_entry@UWindowTabsChanged.c)
 * Callees:
 *     ?GetDisplayMonitorInfoForMonitor@?$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollection@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@_K@Z @ 0x18005155C (-GetDisplayMonitorInfoForMonitor@-$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollection@UID.c)
 */

__int64 __fastcall _lambda_e608e5034e30ee0eacecb96a86560567_::operator()(_QWORD **a1, __int64 a2, __int64 a3)
{
  winrt::impl::consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollection<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfoCollection>::GetDisplayMonitorInfoForMonitor(
    a3,
    a2,
    **a1);
  return a2;
}
