/*
 * XREFs of ?PowerChangeCallback@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CAKPEAXK0@Z @ 0x1805D5650
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateWidgetsTelemetryAsync@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@W4SessionType@123456@@Z @ 0x1802948A0 (-UpdateWidgetsTelemetryAsync@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA-.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::PowerChangeCallback(
        __int64 a1,
        int a2,
        void *a3)
{
  char v4; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 && a2 == 18 )
    winrt::Windows::Internal::Shell::implementation::DashboardManager::UpdateWidgetsTelemetryAsync(a1, (__int64)&v4, 1);
  return 0LL;
}
