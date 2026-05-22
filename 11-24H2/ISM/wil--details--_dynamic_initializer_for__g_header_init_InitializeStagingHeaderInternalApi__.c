/*
 * XREFs of wil::details::_dynamic_initializer_for__g_header_init_InitializeStagingHeaderInternalApi__ @ 0x180009E20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void (__fastcall *wil::details::_dynamic_initializer_for__g_header_init_InitializeStagingHeaderInternalApi__())(BamoImpl::BamoMPCConstantManagerClientProxyImpl *__hidden this, struct Microsoft::BamoImpl::BamoProxyImpl *)
{
  void (__fastcall *result)(BamoImpl::BamoMPCConstantManagerClientProxyImpl *__hidden, struct Microsoft::BamoImpl::BamoProxyImpl *); // rax

  g_wil_details_internalGetFeatureEnabledState = (__int64)wil::details::WilApiImpl_GetFeatureEnabledState;
  g_wil_details_internalRecordFeatureUsage = (__int64)wil::details::WilApiImpl_RecordFeatureUsage;
  g_wil_details_internalSubscribeFeatureStateChangeNotification = (__int64)wil::details::WilApiImpl_SubscribeFeatureStateChangeNotification;
  g_wil_details_internalUnsubscribeFeatureStateChangeNotification = (__int64)wil::details::WilApiImpl_UnsubscribeFeatureStateChangeNotification;
  g_wil_details_realtimeFeatureUsageHook = (__int64)wil_StagingConfig_LogStagedFeatureUsage;
  result = BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp;
  g_wil_details_featureProcessUsageHook = (__int64)BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp;
  return result;
}
