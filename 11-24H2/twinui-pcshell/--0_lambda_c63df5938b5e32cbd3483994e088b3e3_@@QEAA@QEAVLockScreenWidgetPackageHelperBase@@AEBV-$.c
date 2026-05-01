/*
 * XREFs of ??0_lambda_c63df5938b5e32cbd3483994e088b3e3_@@QEAA@QEAVLockScreenWidgetPackageHelperBase@@AEBV?$tip_test@V?$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@@tip2@@AEBV?$shared_any_t@V?$event_t@V?$shared_storage@V?$unique_any_t@V?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@@wil@@AEBV?$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z@std@@@Z @ 0x1805C9D98
 * Callers:
 *     LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync$_ResumeCoro$1 @ 0x1805D9270 (LockScreenWidgetPackageHelperBase--TryInstallStoreApplicationAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??0?$function@$$A6AJPEBG@Z@std@@QEAA@AEBV01@@Z @ 0x1802C5B74 (--0-$function@$$A6AJPEBG@Z@std@@QEAA@AEBV01@@Z.c)
 *     ??0?$tip_test@V?$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@@tip2@@QEAA@AEBV01@@Z @ 0x1805CAA44 (--0-$tip_test@V-$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@@tip2@@QEAA@.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall _lambda_c63df5938b5e32cbd3483994e088b3e3_::_lambda_c63df5938b5e32cbd3483994e088b3e3_(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5)
{
  __int64 v7; // rax

  *a1 = a2;
  tip2::tip_test<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>::tip_test<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>(
    a1 + 1,
    a3);
  a1[2] = 0LL;
  a1[3] = 0LL;
  v7 = a4[1];
  if ( v7 )
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
  a1[2] = *a4;
  a1[3] = a4[1];
  std::function<long (unsigned short const *)>::function<long (unsigned short const *)>((__int64)(a1 + 4), a5);
  return a1;
}
