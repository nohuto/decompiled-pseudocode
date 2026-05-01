/*
 * XREFs of ?SubscribeToAccessPhysicalDevice@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18064236C
 * Callers:
 *     ?HandlePhysicalDeviceAccess@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180640FB0 (-HandlePhysicalDeviceAccess@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXX.c)
 * Callees:
 *     ??1?$function@$$A6A_NJ@Z@wistd@@QEAA@XZ @ 0x1800BC4BC (--1-$function@$$A6A_NJ@Z@wistd@@QEAA@XZ.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800EEF7C (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_b_ea_1800EEF7C.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800EEFFC (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     ??$make_wnf_subscription@Uempty_wnf_state@details@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@K@Z @ 0x180113690 (--$make_wnf_subscription@Uempty_wnf_state@details@wil@@@wil@@YA-AV-$unique_any_t@V-$unique_stora.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::implementation::CloudPCComponent::SubscribeToAccessPhysicalDevice(
        wil::details **this)
{
  wil::details **v2; // rax
  struct wil::details::wnf_subscription_state_base *v3; // rdx
  const char *v4; // r9
  wil::details *v5; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v6[8]; // [rsp+28h] [rbp-90h] BYREF
  _QWORD v7[14]; // [rsp+30h] [rbp-88h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v7[0] = off_180759D70;
  v7[13] = v7;
  try
  {
    v2 = (wil::details **)wil::make_wnf_subscription<wil::details::empty_wnf_state>(
                            &v5,
                            (__int64)&WNF_SHEL_B2C_ACCESS_PHYSICAL_DEVICE,
                            (__int64)v6,
                            0);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>>::operator=(
      this + 18,
      v2);
    if ( v5 )
      wil::details::delete_wnf_subscription_state(v5, v3);
    wistd::function<bool (long)>::~function<bool (long)>((__int64)v6);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x176,
      (int)"pcshell\\twinui\\cloudpc\\lib\\cloudpccomponent.cpp",
      v4);
  }
}
