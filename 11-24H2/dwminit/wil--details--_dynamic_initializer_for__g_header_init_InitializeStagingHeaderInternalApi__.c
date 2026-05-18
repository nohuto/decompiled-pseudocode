/*
 * XREFs of wil::details::_dynamic_initializer_for__g_header_init_InitializeStagingHeaderInternalApi__ @ 0x180001E40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 (__fastcall *wil::details::_dynamic_initializer_for__g_header_init_InitializeStagingHeaderInternalApi__())()
{
  __int64 (__fastcall *result)(); // rax

  g_wil_details_internalGetFeatureEnabledState = (__int64)wil::details::WilApiImpl_GetFeatureEnabledState;
  g_wil_details_internalRecordFeatureUsage = (__int64)wil::details::WilApiImpl_RecordFeatureUsage;
  g_wil_details_internalSubscribeFeatureStateChangeNotification = (__int64)wil::details::WilApiImpl_SubscribeFeatureStateChangeNotification;
  g_wil_details_internalUnsubscribeFeatureStateChangeNotification = (__int64)wil::details::WilApiImpl_UnsubscribeFeatureStateChangeNotification;
  g_wil_details_realtimeFeatureUsageHook = (__int64)wil_StagingConfig_LogStagedFeatureUsage;
  result = wistd::__function::__func<_lambda_8db0ce862824541f40dfb767113f1e28_,bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>::destroy;
  g_wil_details_featureProcessUsageHook = (__int64)wistd::__function::__func<_lambda_8db0ce862824541f40dfb767113f1e28_,bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>::destroy;
  return result;
}
