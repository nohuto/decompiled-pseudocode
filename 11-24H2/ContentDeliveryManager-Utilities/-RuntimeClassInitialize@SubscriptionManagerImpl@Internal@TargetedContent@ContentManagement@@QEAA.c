/*
 * XREFs of ?RuntimeClassInitialize@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@QEAAJXZ @ 0x1800635A0
 * Callers:
 *     ??$MakeAndInitialize@VSubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UISubscriptionManager@234@$$V@Details@WRL@Microsoft@@YAJPEAPEAUISubscriptionManager@Internal@TargetedContent@ContentManagement@@@Z @ 0x18005F220 (--$MakeAndInitialize@VSubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UISubs.c)
 * Callees:
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x180029924 (--0last_error_context@wil@@QEAA@XZ.c)
 *     ??1?$function@$$A6AJAEAVValueSetHelper@Triggers@CreativeFramework@@@Z@wistd@@QEAA@XZ @ 0x18002A344 (--1-$function@$$A6AJAEAVValueSetHelper@Triggers@CreativeFramework@@@Z@wistd@@QEAA@XZ.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x18002AAD8 (--1last_error_context@wil@@QEAA@XZ.c)
 *     ??$make_wnf_subscription@Uempty_wnf_state@details@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@K@Z @ 0x18005FB7C (--$make_wnf_subscription@Uempty_wnf_state@details@wil@@@wil@@YA-AV-$unique_any_t@V-$unique_stora.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180060530 (--1-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x180064914 (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     __security_check_cookie @ 0x1800B6D70 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::RuntimeClassInitialize(
        ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl *this,
        __int64 a2)
{
  wil::details **v3; // rax
  struct wil::details::wnf_subscription_state_base *v4; // rdx
  wil::details **v5; // rdi
  wil::details **v6; // rbx
  wil::details *v7; // r14
  wil::details *v8; // rsi
  struct wil::details::wnf_subscription_state_base *v9; // rdx
  const char *v10; // r9
  __int64 result; // rax
  int v12; // [rsp+20h] [rbp-98h] BYREF
  wil::details *v13; // [rsp+28h] [rbp-90h] BYREF
  char v14[8]; // [rsp+30h] [rbp-88h] BYREF
  _QWORD v15[14]; // [rsp+38h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  try
  {
    v15[0] = off_1800C5B78;
    v15[1] = this;
    v15[13] = v15;
    v3 = (wil::details **)wil::make_wnf_subscription<wil::details::empty_wnf_state>(&v13, a2, (__int64)v14);
    v5 = v3;
    v6 = (wil::details **)((char *)this + 72);
    if ( v6 != v3 )
    {
      v7 = *v3;
      v8 = *v6;
      if ( *v6 )
      {
        wil::last_error_context::last_error_context((wil::last_error_context *)&v12);
        wil::details::delete_wnf_subscription_state(v8, v9);
        wil::last_error_context::~last_error_context((wil::last_error_context *)&v12);
      }
      *v6 = v7;
      *v5 = 0LL;
    }
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>(
      &v13,
      v4);
    wistd::function<long (CreativeFramework::Triggers::ValueSetHelper &)>::~function<long (CreativeFramework::Triggers::ValueSetHelper &)>((__int64)v14);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x3B,
                           (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\subscriptionmanager.cpp",
                           v10);
  }
  return result;
}
