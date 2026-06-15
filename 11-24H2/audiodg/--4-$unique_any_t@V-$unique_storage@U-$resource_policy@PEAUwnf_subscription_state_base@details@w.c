/*
 * XREFs of ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x14005C350
 * Callers:
 *     ?RegisterDeviceOrientationNotification@CDeviceOrientationNotificationsHandler@@AEAAJXZ @ 0x14005D9A4 (-RegisterDeviceOrientationNotification@CDeviceOrientationNotificationsHandler@@AEAAJXZ.c)
 *     ?RegisterForEnvironmentalStateChangedNotifications@CAPOEnvironmentStateChangedNotificationsHandler@@AEAAJXZ @ 0x14005FCEC (-RegisterForEnvironmentalStateChangedNotifications@CAPOEnvironmentStateChangedNotificationsHandl.c)
 * Callees:
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x14002CA90 (--1last_error_context@wil@@QEAA@XZ.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x14002DBC8 (--0last_error_context@wil@@QEAA@XZ.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x14005E960 (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 */

wil::details **__fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>>::operator=(
        wil::details **a1,
        wil::details **a2)
{
  wil::details *v4; // rsi
  wil::details *v5; // rbp
  struct wil::details::wnf_subscription_state_base *v6; // rdx
  char v8; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 != a2 )
  {
    v4 = *a1;
    v5 = *a2;
    if ( *a1 )
    {
      wil::last_error_context::last_error_context((wil::last_error_context *)&v8);
      wil::details::delete_wnf_subscription_state(v4, v6);
      wil::last_error_context::~last_error_context((wil::last_error_context *)&v8);
    }
    *a1 = v5;
    *a2 = 0LL;
  }
  return a1;
}
