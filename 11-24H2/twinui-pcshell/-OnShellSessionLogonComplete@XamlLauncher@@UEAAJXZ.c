/*
 * XREFs of ?OnShellSessionLogonComplete@XamlLauncher@@UEAAJXZ @ 0x1804604E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ConsiderShowStartAutomatically@XamlLauncher@@AEAAXXZ @ 0x18045DAB8 (-ConsiderShowStartAutomatically@XamlLauncher@@AEAAXXZ.c)
 *     ?ShellLogonCompleteObserved@StartWindowTelemetry@@SAXXZ @ 0x180460F54 (-ShellLogonCompleteObserved@StartWindowTelemetry@@SAXXZ.c)
 */

__int64 __fastcall XamlLauncher::OnShellSessionLogonComplete(XamlLauncher *this)
{
  StartWindowTelemetry::ShellLogonCompleteObserved();
  *((_BYTE *)XamlLauncher::s_pLauncher + 358) = 1;
  XamlLauncher::ConsiderShowStartAutomatically((XamlLauncher *)((char *)this - 88));
  return 0LL;
}
