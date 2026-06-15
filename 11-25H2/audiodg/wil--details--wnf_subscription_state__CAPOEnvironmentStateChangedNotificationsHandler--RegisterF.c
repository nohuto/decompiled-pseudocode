/*
 * XREFs of wil::details::wnf_subscription_state__CAPOEnvironmentStateChangedNotificationsHandler::RegisterForEnvironmentalStateChangedNotifications_::_2_::WnfPayload4k_::InternalCallback__CAPOEnvironmentStateChangedNotificationsHandler::RegisterForEnvironmentalStateChangedNotifications_::_2_::WnfPayload4k_ @ 0x14005F708
 * Callers:
 *     _lambda_fcafbedef24e81d133269090a4833dfd_::_lambda_invoker_cdecl_ @ 0x14005F6E0 (_lambda_fcafbedef24e81d133269090a4833dfd_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x14005D394 (-Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x14005E890 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 */

__int64 __fastcall wil::details::wnf_subscription_state__CAPOEnvironmentStateChangedNotificationsHandler::RegisterForEnvironmentalStateChangedNotifications_::_2_::WnfPayload4k_::InternalCallback__CAPOEnvironmentStateChangedNotificationsHandler::RegisterForEnvironmentalStateChangedNotifications_::_2_::WnfPayload4k_(
        __int64 a1,
        __int64 a2,
        int a3)
{
  __int64 v4; // rcx
  const char *v5; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a3 != 4096 )
    return wil::details::in1diag3::Log_HrMsg(
             retaddr,
             (void *)0x39D,
             (__int64)"onecore\\internal\\sdk\\inc\\wil\\resource.h",
             (const char *)0x8000FFFFLL,
             (int)"Inconsistent state data size in WNF callback",
             v5);
  v4 = *(_QWORD *)(a1 + 128);
  if ( !v4 )
    wil::details::in1diag3::_FailFastImmediate_Unexpected(0LL);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4);
}
