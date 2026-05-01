/*
 * XREFs of ?Initialize@ConnectedStandbyHelper@@QEAAJPEAUIWindowDispatcherConnectedStandby@@@Z @ 0x18042AB4C
 * Callers:
 *     ?SubscribeToServices@UwpWindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x180249660 (-SubscribeToServices@UwpWindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?SubscribeToServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x180423A90 (-SubscribeToServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?shared_from_this@?$enable_shared_from_this@VConnectedStandbyHelper@@@std@@QEAA?AV?$shared_ptr@VConnectedStandbyHelper@@@2@XZ @ 0x18008C3D4 (-shared_from_this@-$enable_shared_from_this@VConnectedStandbyHelper@@@std@@QEAA-AV-$shared_ptr@V.c)
 *     ??1?$function@$$A6A_NJ@Z@wistd@@QEAA@XZ @ 0x1800BC4BC (--1-$function@$$A6A_NJ@Z@wistd@@QEAA@XZ.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800EEF7C (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_b_ea_1800EEF7C.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800EEFFC (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     ??$make_wnf_subscription@E@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBE@Z@wistd@@K@Z @ 0x1801E9B78 (--$make_wnf_subscription@E@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUwnf.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
__int64 __fastcall ConnectedStandbyHelper::Initialize(
        ConnectedStandbyHelper *this,
        struct IWindowDispatcherConnectedStandby *a2)
{
  __int64 *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  wil::details **wnf; // rax
  struct wil::details::wnf_subscription_state_base *v7; // rdx
  wil::details *v9; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v10; // [rsp+28h] [rbp-A0h] BYREF
  std::_Ref_count_base *v11; // [rsp+30h] [rbp-98h]
  _BYTE v12[8]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v13[14]; // [rsp+40h] [rbp-88h] BYREF

  *((_QWORD *)this + 3) = a2;
  v3 = std::enable_shared_from_this<ConnectedStandbyHelper>::shared_from_this((__int64)this, &v10);
  v4 = *v3;
  v5 = v3[1];
  *v3 = 0LL;
  v3[1] = 0LL;
  v13[0] = &off_18073CA68;
  v13[1] = v4;
  v13[2] = v5;
  v13[13] = v13;
  wnf = (wil::details **)wil::make_wnf_subscription<unsigned char>(&v9, v4, (__int64)v12);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>>::operator=(
    (wil::details **)this + 5,
    wnf);
  if ( v9 )
    wil::details::delete_wnf_subscription_state(v9, v7);
  wistd::function<bool (long)>::~function<bool (long)>((__int64)v12);
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
  return 0LL;
}
