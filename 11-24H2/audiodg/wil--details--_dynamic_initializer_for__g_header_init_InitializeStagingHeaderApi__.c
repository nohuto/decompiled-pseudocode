/*
 * XREFs of wil::details::_dynamic_initializer_for__g_header_init_InitializeStagingHeaderApi__ @ 0x140002D00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void (__fastcall *wil::details::_dynamic_initializer_for__g_header_init_InitializeStagingHeaderApi__())(Windows::Media::Devices::SendCommandAsyncOperation *__hidden this)
{
  void (__fastcall *result)(Windows::Media::Devices::SendCommandAsyncOperation *__hidden); // rax

  g_wil_details_apiGetFeatureEnabledState = (__int64)wil::details::GetFeatureEnabledStateHelper;
  g_wil_details_apiRecordFeatureUsage = (__int64)RecordFeatureUsage;
  g_wil_details_apiSubscribeFeatureStateChangeNotification = (__int64)SubscribeFeatureStateChangeNotification;
  g_wil_details_apiUnsubscribeFeatureStateChangeNotification = (__int64)UnsubscribeFeatureStateChangeNotification;
  g_wil_details_realtimeFeatureUsageHook = (__int64)Windows::Media::Devices::SendCommandAsyncOperation::OnCancel;
  result = Windows::Media::Devices::SendCommandAsyncOperation::OnCancel;
  g_wil_details_featureProcessUsageHook = (__int64)Windows::Media::Devices::SendCommandAsyncOperation::OnCancel;
  return result;
}
