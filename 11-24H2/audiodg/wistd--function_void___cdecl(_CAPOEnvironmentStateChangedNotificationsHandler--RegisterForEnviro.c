/*
 * XREFs of wistd::function_void___cdecl(_CAPOEnvironmentStateChangedNotificationsHandler::RegisterForEnvironmentalStateChangedNotifications_::_2_::WnfPayload4k_const_&)_::_function_void___cdecl(_CAPOEnvironmentStateChangedNotificationsHandler::RegisterForEnvironmentalStateChangedNotifications_::_2_::WnfPayload4k_const_&)_ @ 0x14005F84C
 * Callers:
 *     wil::details::wnf_subscription_state__CAPOEnvironmentStateChangedNotificationsHandler::RegisterForEnvironmentalStateChangedNotifications_::_2_::WnfPayload4k_::_wnf_subscription_state__CAPOEnvironmentStateChangedNotificationsHandler::RegisterForEnvironmentalStateChangedNotifications_::_2_::WnfPayload4k_ @ 0x14005F874 (wil--details--wnf_subscription_state__CAPOEnvironmentStateChangedNotificationsHandl_ea_14005F874.c)
 *     ?RegisterForEnvironmentalStateChangedNotifications@CAPOEnvironmentStateChangedNotificationsHandler@@AEAAJXZ @ 0x14005FCEC (-RegisterForEnvironmentalStateChangedNotifications@CAPOEnvironmentStateChangedNotificationsHandl.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wistd::function_void___cdecl__CAPOEnvironmentStateChangedNotificationsHandler::RegisterForEnvironmentalStateChangedNotifications_::_2_::WnfPayload4k_const____::_function_void___cdecl__CAPOEnvironmentStateChangedNotificationsHandler::RegisterForEnvironmentalStateChangedNotifications_::_2_::WnfPayload4k_const____(
        __int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 112);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 24LL))(v1);
  return result;
}
