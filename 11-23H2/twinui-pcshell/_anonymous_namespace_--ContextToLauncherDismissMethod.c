/*
 * XREFs of _anonymous_namespace_::ContextToLauncherDismissMethod @ 0x180500544
 * Callers:
 *     XamlLauncher::LauncherDismissRequested$_ResumeCoro$1 @ 0x1801FF760 (XamlLauncher--LauncherDismissRequested$_ResumeCoro$1.c)
 * Callees:
 *     ??8winrt@@YA_NAEBUhstring@0@PEBG@Z @ 0x1800B5424 (--8winrt@@YA_NAEBUhstring@0@PEBG@Z.c)
 */

__int64 __fastcall anonymous_namespace_::ContextToLauncherDismissMethod(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  __int64 v6; // r8

  if ( winrt::operator==(a1, (__int64)L"StartButton", a3) )
    return 6LL;
  if ( winrt::operator==(a1, (__int64)L"TaskView", v4) )
    return 7LL;
  return winrt::operator==(a1, (__int64)L"Drag", v6) ? 9 : 7;
}
