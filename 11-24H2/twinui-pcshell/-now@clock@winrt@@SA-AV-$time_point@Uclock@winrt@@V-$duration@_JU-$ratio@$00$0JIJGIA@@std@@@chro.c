/*
 * XREFs of ?now@clock@winrt@@SA?AV?$time_point@Uclock@winrt@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@chrono@std@@XZ @ 0x1802C9574
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::UpdateWidgetsTelemetryAsync$_ResumeCoro$1 @ 0x1805D9CB0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--UpdateWidgetsTel_ea_1805D9CB0.c)
 *     winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection$_ResumeCoro$1 @ 0x18066CF00 (winrt--Windows--Internal--Shell--implementation--SwitchConnectionHandler--CloseClou_ea_18066CF00.c)
 *     ?ShowDisconnectingScreen@SwitchDisconnectedState@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x18066EAA8 (-ShowDisconnectingScreen@SwitchDisconnectedState@implementation@Shell@Internal@Windows@winrt@@AE.c)
 * Callees:
 *     WINRT_IMPL_GetSystemTimePreciseAsFileTime @ 0x1802DB18C (WINRT_IMPL_GetSystemTimePreciseAsFileTime.c)
 */

_QWORD *__fastcall winrt::clock::now(_QWORD *a1)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  WINRT_IMPL_GetSystemTimePreciseAsFileTime(&v3);
  *a1 = v3;
  return a1;
}
