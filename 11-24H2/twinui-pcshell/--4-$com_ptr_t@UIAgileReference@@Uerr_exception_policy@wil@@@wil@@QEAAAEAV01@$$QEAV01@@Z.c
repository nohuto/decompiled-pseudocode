/*
 * XREFs of ??4?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180150E08
 * Callers:
 *     ?UwpWindowActivating@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowActivatingEventArgs@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x180021B40 (-UwpWindowActivating@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowActivatingEventArgs@UwpWindowL.c)
 *     ??0AppUsageTracker@@QEAA@PEAUIServiceProvider@@PEAUIAppStateChangeNotification@AppLimits@FamilySafety@Internal@Windows@@W4ViewTrackingOption@3456@@Z @ 0x180150C8C (--0AppUsageTracker@@QEAA@PEAUIServiceProvider@@PEAUIAppStateChangeNotification@AppLimits@FamilyS.c)
 *     ??0ComponentCreator@@QEAA@XZ @ 0x1801901C8 (--0ComponentCreator@@QEAA@XZ.c)
 *     ??4PendingActivationResumeData@UwpWindowEventDispatcher@@QEAAAEAU01@$$QEAU01@@Z @ 0x180193958 (--4PendingActivationResumeData@UwpWindowEventDispatcher@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     _lambda_a4d545b91c9e09961ecfadb7c1e91fee_::operator() @ 0x180427DAC (_lambda_a4d545b91c9e09961ecfadb7c1e91fee_--operator().c)
 *     ?SwitchAsync@UwpWindowEventDispatcher@@AEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@UI@Windows@@PEAUIAsyncCallback@@@Z @ 0x180429CD0 (-SwitchAsync@UwpWindowEventDispatcher@@AEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@U.c)
 *     ?TerminateActivityHost@UwpWindowEventDispatcher@@UEAAJIW4TerminateActivityHostOptions@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180429F50 (-TerminateActivityHost@UwpWindowEventDispatcher@@UEAAJIW4TerminateActivityHostOptions@ViewManage.c)
 *     ??0WindowWrapper@@QEAA@PEAUIWindowEventDispatcherInternal@@PEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppModel@3456@W4AppModelKind@3456@UAppViewId@3456@PEAUIWindow@3456@UWindowId@3456@PEBGW4WindowCreatedType@@@Z @ 0x180432BE4 (--0WindowWrapper@@QEAA@PEAUIWindowEventDispatcherInternal@@PEAUIAppView@WindowManagement@Applica.c)
 *     ?EnsureExperienceManager@FallbackFlyoutView@@AEAA?AV?$com_ptr_t@UINetworkFlyoutExperienceManager@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1805F9C4C (-EnsureExperienceManager@FallbackFlyoutView@@AEAA-AV-$com_ptr_t@UINetworkFlyoutExperienceManager.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::com_ptr_t<IAgileReference,wil::err_exception_policy>::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx

  v3 = *a2;
  *a2 = 0LL;
  v4 = *a1;
  *a1 = v3;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return a1;
}
