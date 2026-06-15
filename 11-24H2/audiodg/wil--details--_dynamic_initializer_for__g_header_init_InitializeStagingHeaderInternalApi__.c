/*
 * XREFs of wil::details::_dynamic_initializer_for__g_header_init_InitializeStagingHeaderInternalApi__ @ 0x140002930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void (__fastcall *wil::details::_dynamic_initializer_for__g_header_init_InitializeStagingHeaderInternalApi__())(Windows::Media::Devices::SendCommandAsyncOperation *__hidden this)
{
  void (__fastcall *result)(Windows::Media::Devices::SendCommandAsyncOperation *__hidden); // rax

  g_wil_details_internalGetFeatureEnabledState = (__int64)wil::details::WilApiImpl_GetFeatureEnabledState;
  g_wil_details_internalRecordFeatureUsage = (__int64)wil::details::WilApiImpl_RecordFeatureUsage;
  g_wil_details_internalSubscribeFeatureStateChangeNotification = (__int64)wil::details::WilApiImpl_SubscribeFeatureStateChangeNotification;
  g_wil_details_internalUnsubscribeFeatureStateChangeNotification = (__int64)wil::details::WilApiImpl_UnsubscribeFeatureStateChangeNotification;
  g_wil_details_realtimeFeatureUsageHook = (__int64)wil_StagingConfig_LogStagedFeatureUsage;
  result = Windows::Media::Devices::SendCommandAsyncOperation::OnCancel;
  g_wil_details_featureProcessUsageHook = (__int64)Windows::Media::Devices::SendCommandAsyncOperation::OnCancel;
  return result;
}
