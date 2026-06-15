/*
 * XREFs of wil::details::_dynamic_initializer_for__g_header_init_InitializeStagingHeaderApi__ @ 0x1800083F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void (__fastcall *wil::details::_dynamic_initializer_for__g_header_init_InitializeStagingHeaderApi__())(CBaseStreamGroupProxy *__hidden this, const unsigned __int16 *)
{
  void (__fastcall *result)(CBaseStreamGroupProxy *__hidden, const unsigned __int16 *); // rax

  g_wil_details_apiGetFeatureEnabledState = (__int64)wil::details::GetFeatureEnabledStateHelper;
  g_wil_details_apiRecordFeatureUsage = (__int64)RecordFeatureUsage;
  g_wil_details_apiSubscribeFeatureStateChangeNotification = (__int64)SubscribeFeatureStateChangeNotification;
  g_wil_details_apiUnsubscribeFeatureStateChangeNotification = (__int64)UnsubscribeFeatureStateChangeNotification;
  result = CBaseStreamGroupProxy::OnEndpointUnavailableForUse;
  g_wil_details_realtimeFeatureUsageHook = (__int64)CBaseStreamGroupProxy::OnEndpointUnavailableForUse;
  return result;
}
