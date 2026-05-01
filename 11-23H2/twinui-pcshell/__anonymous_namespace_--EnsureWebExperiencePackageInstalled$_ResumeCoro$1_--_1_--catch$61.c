/*
 * XREFs of __anonymous_namespace_::EnsureWebExperiencePackageInstalled$_ResumeCoro$1_::_1_::catch$61 @ 0x18023A294
 * Callers:
 *     <none>
 * Callees:
 *     ?complete@?$test_watcher@V?$merged_data@U_tip_WidgetsAppInstallTIP@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x18021E658 (-complete@-$test_watcher@V-$merged_data@U_tip_WidgetsAppInstallTIP@@U1@@details@tip2@@@tip2@@QEA.c)
 *     ??0?$test_data_control@V?$merged_data@U_tip_WidgetsAppInstallTIP@@U1@@details@tip2@@@tip2@@IEAA@AEBV?$com_ptr_t@V?$merged_data@U_tip_WidgetsAppInstallTIP@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1802349F8 (--0-$test_data_control@V-$merged_data@U_tip_WidgetsAppInstallTIP@@U1@@details@tip2@@@tip2@@IEAA@.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_WidgetsAppInstallTIP@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18023585C (--1-$test_data_control@V-$merged_data@U_tip_WidgetsAppInstallTIP@@U1@@details@tip2@@@tip2@@QEAA@.c)
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802CED10 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x180392010 (-ResultFromCaughtException@wil@@YAJXZ.c)
 *     ?WebExperienceInstallerFailedAndRetrying@DashboardManagerTelemetry@@SAXXZ @ 0x1806984F4 (-WebExperienceInstallerFailedAndRetrying@DashboardManagerTelemetry@@SAXXZ.c)
 */

__int64 __fastcall _anonymous_namespace_::EnsureWebExperiencePackageInstalled__ResumeCoro_1_::_1_::catch_61(
        wil *a1,
        __int64 a2)
{
  int v3; // ebx
  __int64 v4; // rdi
  __int64 v5; // rcx
  const char *v6; // r9

  v3 = wil::ResultFromCaughtException(a1);
  v4 = *(_QWORD *)(a2 + 104);
  tip2::test_data_control<tip2::details::merged_data<_tip_WidgetsAppInstallTIP,_tip_WidgetsAppInstallTIP>>::test_data_control<tip2::details::merged_data<_tip_WidgetsAppInstallTIP,_tip_WidgetsAppInstallTIP>>(
    (__int64 *)(v4 + 728),
    (__int64 *)(v4 + 96));
  v5 = *(_QWORD *)(v4 + 728);
  *(_QWORD *)(a2 + 240) = v5;
  *(_DWORD *)(v5 + 340) = v3;
  tip2::test_data_control<tip2::details::merged_data<_tip_WidgetsAppInstallTIP,_tip_WidgetsAppInstallTIP>>::~test_data_control<tip2::details::merged_data<_tip_WidgetsAppInstallTIP,_tip_WidgetsAppInstallTIP>>((void **)(v4 + 728));
  tip2::test_watcher<tip2::details::merged_data<_tip_WidgetsAppInstallTIP,_tip_WidgetsAppInstallTIP>>::complete(v4 + 48);
  DashboardManagerTelemetry::WebExperienceInstallerFailedAndRetrying();
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 472),
    (void *)0x2AA,
    (unsigned int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
    v6);
  return 0LL;
}
