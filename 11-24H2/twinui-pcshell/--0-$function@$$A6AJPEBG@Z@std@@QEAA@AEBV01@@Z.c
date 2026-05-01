/*
 * XREFs of ??0?$function@$$A6AJPEBG@Z@std@@QEAA@AEBV01@@Z @ 0x1802C5B74
 * Callers:
 *     _lambda_75452c5cb5e77a67412b4cfed81632b0_::_lambda_75452c5cb5e77a67412b4cfed81632b0_ @ 0x18046BB04 (_lambda_75452c5cb5e77a67412b4cfed81632b0_--_lambda_75452c5cb5e77a67412b4cfed81632b0_.c)
 *     ??4?$function@$$A6AJPEBG@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x18046D298 (--4-$function@$$A6AJPEBG@Z@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?RetryGettingInputAppIdTimerCallback@TouchKeyboardExperienceManager@@CAJPEAX@Z @ 0x1804740E0 (-RetryGettingInputAppIdTimerCallback@TouchKeyboardExperienceManager@@CAJPEAX@Z.c)
 *     ??0TouchEdgeGripperWindow@@QEAA@W4TouchEdgeGestureType@@PEAUIImmersiveMonitor@@_NAEBV?$function@$$A6AXIAEBUPoint@Foundation@Windows@winrt@@@Z@std@@@Z @ 0x180597C6C (--0TouchEdgeGripperWindow@@QEAA@W4TouchEdgeGestureType@@PEAUIImmersiveMonitor@@_NAEBV-$function@.c)
 *     ??0_lambda_9f5c7493512f30cd4ebf6dfda1287bbc_@@QEAA@AEBV?$tip_test@V?$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@@tip2@@AEBV?$shared_any_t@V?$event_t@V?$shared_storage@V?$unique_any_t@V?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@@wil@@AEBV?$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z@std@@@Z @ 0x1805C9D28 (--0_lambda_9f5c7493512f30cd4ebf6dfda1287bbc_@@QEAA@AEBV-$tip_test@V-$merged_data@U_tip_SettingsS.c)
 *     ??0_lambda_c63df5938b5e32cbd3483994e088b3e3_@@QEAA@QEAVLockScreenWidgetPackageHelperBase@@AEBV?$tip_test@V?$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@@tip2@@AEBV?$shared_any_t@V?$event_t@V?$shared_storage@V?$unique_any_t@V?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@@wil@@AEBV?$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z@std@@@Z @ 0x1805C9D98 (--0_lambda_c63df5938b5e32cbd3483994e088b3e3_@@QEAA@QEAVLockScreenWidgetPackageHelperBase@@AEBV-$.c)
 *     ?TryInstallAsync@LockScreenWidgetPackageHelperBase@@QEAA?AUIAsyncAction@Foundation@Windows@winrt@@V?$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z@std@@0@Z @ 0x1805D900C (-TryInstallAsync@LockScreenWidgetPackageHelperBase@@QEAA-AUIAsyncAction@Foundation@Windows@winrt.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::function<long (unsigned short const *)>::function<long (unsigned short const *)>(
        __int64 a1,
        __int64 a2)
{
  __int64 (__fastcall ***v3)(_QWORD, __int64); // rcx

  *(_QWORD *)(a1 + 56) = 0LL;
  v3 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a2 + 56);
  if ( v3 )
    *(_QWORD *)(a1 + 56) = (**v3)(v3, a1);
  return a1;
}
