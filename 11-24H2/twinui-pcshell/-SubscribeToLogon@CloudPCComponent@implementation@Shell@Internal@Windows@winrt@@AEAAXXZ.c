/*
 * XREFs of ?SubscribeToLogon@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180642404
 * Callers:
 *     ?perform_delayed_initialization@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x1806433A0 (-perform_delayed_initialization@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UE.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x180056268 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ??1?$function@$$A6A_NJ@Z@wistd@@QEAA@XZ @ 0x1800BC4BC (--1-$function@$$A6A_NJ@Z@wistd@@QEAA@XZ.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800EEF7C (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_b_ea_1800EEF7C.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800EEFFC (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     ??$make_wnf_subscription@Uempty_wnf_state@details@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@K@Z @ 0x180113690 (--$make_wnf_subscription@Uempty_wnf_state@details@wil@@@wil@@YA-AV-$unique_any_t@V-$unique_stora.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$SubscribedToLogonCompleteEvent@PEBG@CloudPCTelemetryCore@@SAX$$QEAPEBG@Z @ 0x18063C798 (--$SubscribedToLogonCompleteEvent@PEBG@CloudPCTelemetryCore@@SAX$$QEAPEBG@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_Engineering_Improvements@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18064225C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_Engineering_Improvements@@@detai.c)
 *     ?GetCorrelationId@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA?AUhstring@6@AEBU76@@Z @ 0x18064C3E0 (-GetCorrelationId@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA-AUhstrin.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::implementation::CloudPCComponent::SubscribeToLogon(
        wil::details **this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  winrt::hstring *CorrelationId; // rax
  wil::details **v6; // rax
  struct wil::details::wnf_subscription_state_base *v7; // rdx
  const char *v8; // r9
  wil::details *v9; // [rsp+20h] [rbp-98h] BYREF
  const WCHAR *v10; // [rsp+28h] [rbp-90h] BYREF
  _BYTE v11[8]; // [rsp+30h] [rbp-88h] BYREF
  _QWORD v12[14]; // [rsp+38h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  try
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_Engineering_Improvements>::ReportUsage(
      (__int64)&`wil::Feature<__WilFeatureTraits_Feature_W365Boot_Engineering_Improvements>::GetImpl'::`2'::impl,
      1u,
      a3,
      a4);
    CorrelationId = (winrt::hstring *)winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetCorrelationId(
                                        &v9,
                                        &c_bootSystemId);
    v10 = winrt::hstring::c_str(CorrelationId);
    CloudPCTelemetryCore::SubscribedToLogonCompleteEvent<unsigned short const *>(&v10);
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v9);
    v12[0] = off_180759CC8;
    v12[1] = this;
    v12[13] = v12;
    v6 = (wil::details **)wil::make_wnf_subscription<wil::details::empty_wnf_state>(
                            &v9,
                            (__int64)&WNF_SHEL_SESSION_LOGON_COMPLETE,
                            (__int64)v11,
                            0);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>>::operator=(
      this + 14,
      v6);
    if ( v9 )
      wil::details::delete_wnf_subscription_state(v9, v7);
    wistd::function<bool (long)>::~function<bool (long)>((__int64)v11);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xFC,
      (int)"pcshell\\twinui\\cloudpc\\lib\\cloudpccomponent.cpp",
      v8);
  }
}
