/*
 * XREFs of __anonymous_namespace_::EnsureWebExperiencePackageInstalled$_ResumeCoro$1_::_1_::catch$62 @ 0x18023A318
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802CED10 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?WebExperienceInstallerFailedAndRetrying@DashboardManagerTelemetry@@SAXXZ @ 0x1806984F4 (-WebExperienceInstallerFailedAndRetrying@DashboardManagerTelemetry@@SAXXZ.c)
 */

__int64 __fastcall _anonymous_namespace_::EnsureWebExperiencePackageInstalled__ResumeCoro_1_::_1_::catch_62(
        __int64 a1,
        __int64 a2)
{
  const char *v3; // r9

  DashboardManagerTelemetry::WebExperienceInstallerFailedAndRetrying();
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 472),
    (void *)0x2B1,
    (unsigned int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
    v3);
  return 0LL;
}
