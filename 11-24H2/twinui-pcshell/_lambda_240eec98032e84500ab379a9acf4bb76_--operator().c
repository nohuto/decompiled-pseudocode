/*
 * XREFs of _lambda_240eec98032e84500ab379a9acf4bb76_::operator() @ 0x1805CB8EC
 * Callers:
 *     ?CallDashboardExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAJ$$QEAV?$function@$$A6AXUDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@Z@std@@V?$basic_string_view@GU?$char_traits@G@std@@@8@V?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@8@@Z @ 0x1805CD624 (-CallDashboardExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAJ$$QEA.c)
 * Callees:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18028C0CC (--1-$com_ptr_t@V-$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@Uerr_returncode.c)
 *     ?start_and_watch_errors@?$tip_test@V?$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@@2@XZ @ 0x18028C17C (-start_and_watch_errors@-$tip_test@V-$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@t.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18028C238 (-ensure_data@-$tip_test@V-$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@@tip2@.c)
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x18028C6A4 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ?has_ever_started@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1802CDF64 (-has_ever_started@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_60880818@@@details@wil@@QEAA_NXZ @ 0x1805DB464 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_60880818@@@details@wil@@QEAA_NXZ.c)
 */

struct wil::details::IFailureCallback *__fastcall lambda_240eec98032e84500ab379a9acf4bb76_::operator()(
        void *a1,
        struct wil::details::IFailureCallback *a2)
{
  char IsEnabled; // al
  wil::details::in1diag3 *v4; // rcx
  _QWORD *v5; // rax
  void *v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = a1;
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_60880818>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_60880818>::GetImpl'::`2'::impl);
  v7 = 0LL;
  if ( IsEnabled )
  {
    *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_CallDashboardExtensionTIP,_tip_CallDashboardExtensionTIP>>::ensure_data(&v7)
             + 41LL) = 6;
    if ( v7 && tip2::details::shared_data<1,0,0>::has_ever_started((__int64)v7 + 8) )
      wil::details::in1diag3::FailFastImmediate_Unexpected(v4);
    v5 = tip2::tip_test<tip2::details::merged_data<_tip_CallDashboardExtensionTIP,_tip_CallDashboardExtensionTIP>>::ensure_data(&v7);
    *(_DWORD *)(*v5 + 28LL) |= 0x200u;
  }
  tip2::tip_test<tip2::details::merged_data<_tip_CallDashboardExtensionTIP,_tip_CallDashboardExtensionTIP>>::start_and_watch_errors(
    (__int64 *)&v7,
    a2);
  wil::com_ptr_t<tip2::details::merged_data<_tip_CallDashboardExtensionTIP,_tip_CallDashboardExtensionTIP>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_CallDashboardExtensionTIP,_tip_CallDashboardExtensionTIP>,wil::err_returncode_policy>(&v7);
  return a2;
}
