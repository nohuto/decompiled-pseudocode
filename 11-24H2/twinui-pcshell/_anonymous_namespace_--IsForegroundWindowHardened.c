/*
 * XREFs of _anonymous_namespace_::IsForegroundWindowHardened @ 0x1802B48B4
 * Callers:
 *     ?DisableWindowHardeningPolicy@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CAJXZ @ 0x1802B4764 (-DisableWindowHardeningPolicy@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CAJX.c)
 * Callees:
 *     <none>
 */

char anonymous_namespace_::IsForegroundWindowHardened()
{
  HWND ForegroundWindow; // rax
  char result; // al
  int v2; // [rsp+30h] [rbp+8h] BYREF

  ForegroundWindow = GetForegroundWindow();
  v2 = 0;
  if ( !ForegroundWindow )
    return 0;
  if ( !(unsigned int)GetWindowBand(ForegroundWindow, &v2) )
    return 0;
  result = 1;
  if ( v2 == 1 )
    return 0;
  return result;
}
