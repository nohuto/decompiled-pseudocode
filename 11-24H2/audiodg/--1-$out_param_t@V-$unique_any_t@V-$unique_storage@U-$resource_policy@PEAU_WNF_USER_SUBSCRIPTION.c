/*
 * XREFs of ??1?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_WNF_USER_SUBSCRIPTION@@P6AJPEAU1@@Z$1?RtlUnsubscribeWnfStateChangeNotification@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x14005C1E8
 * Callers:
 *     ??$make_wnf_subscription_state@UWNF_AUDIO_ORIENTATION_STATE@@@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBUWNF_AUDIO_ORIENTATION_STATE@@@Z@wistd@@KPEAPEAU?$wnf_subscription_state@UWNF_AUDIO_ORIENTATION_STATE@@@01@@Z @ 0x14005BC60 (--$make_wnf_subscription_state@UWNF_AUDIO_ORIENTATION_STATE@@@details@wil@@YAJAEBU_WNF_STATE_NAM.c)
 *     wil::details::make_wnf_subscription_state__CAPOEnvironmentStateChangedNotificationsHandler::RegisterForEnvironmentalStateChangedNotifications_::_2_::WnfPayload4k_ @ 0x14005F67C (wil--details--make_wnf_subscription_state__CAPOEnvironmentStateChangedNotificationsHandler--Regi.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_WNF_USER_SUBSCRIPTION@@P6AJPEAU1@@Z$1?RtlUnsubscribeWnfStateChangeNotification@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_WNF_USER_SUBSCRIPTION@@@Z @ 0x14005E988 (-reset@-$unique_storage@U-$resource_policy@PEAU_WNF_USER_SUBSCRIPTION@@P6AJPEAU1@@Z$1-RtlUnsubsc.c)
 */

__int64 __fastcall wil::details::out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_WNF_USER_SUBSCRIPTION *,long (*)(_WNF_USER_SUBSCRIPTION *),&long RtlUnsubscribeWnfStateChangeNotification(_WNF_USER_SUBSCRIPTION *),wistd::integral_constant<unsigned __int64,0>,_WNF_USER_SUBSCRIPTION *,_WNF_USER_SUBSCRIPTION *,0,std::nullptr_t>>>>::~out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_WNF_USER_SUBSCRIPTION *,long (*)(_WNF_USER_SUBSCRIPTION *),&long RtlUnsubscribeWnfStateChangeNotification(_WNF_USER_SUBSCRIPTION *),wistd::integral_constant<unsigned __int64,0>,_WNF_USER_SUBSCRIPTION *,_WNF_USER_SUBSCRIPTION *,0,std::nullptr_t>>>>(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
    return wil::details::unique_storage<wil::details::resource_policy<_WNF_USER_SUBSCRIPTION *,long (*)(_WNF_USER_SUBSCRIPTION *),&long RtlUnsubscribeWnfStateChangeNotification(_WNF_USER_SUBSCRIPTION *),wistd::integral_constant<unsigned __int64,0>,_WNF_USER_SUBSCRIPTION *,_WNF_USER_SUBSCRIPTION *,0,std::nullptr_t>>::reset(
             *(_QWORD *)a1,
             *(_QWORD *)(a1 + 8));
  return result;
}
