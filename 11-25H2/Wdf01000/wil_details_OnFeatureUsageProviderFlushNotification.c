/*
 * XREFs of wil_details_OnFeatureUsageProviderFlushNotification @ 0x1400D9290
 * Callers:
 *     <none>
 * Callees:
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x140085EF4 (wil_details_FeatureDescriptors_SkipPadding.c)
 *     wil_details_RecordCachedUsage @ 0x140085F20 (wil_details_RecordCachedUsage.c)
 */

void __fastcall wil_details_OnFeatureUsageProviderFlushNotification(
        _RTL_FEATURE_USAGE_PROVIDER_CALLBACK_TYPE CallbackType,
        void *Context,
        void *CallbackData)
{
  const wil_details_FeatureDescriptor *i; // rcx
  const wil_details_FeatureDescriptor *v4; // rax
  void (__fastcall *v5)(__WIL_RTL_FEATURE_USAGE_DATA *, unsigned __int64); // r8
  const wil_details_FeatureDescriptor *v6; // rbx

  if ( CallbackType == FeatureUsageProviderCallBackUsageFlushNotification
    && _InterlockedExchange(&g_wil_details_featureUsageCached, 0) )
  {
    for ( i = wil_details_featureDescriptors_a; ; i = v6 + 1 )
    {
      v4 = wil_details_FeatureDescriptors_SkipPadding(i);
      v6 = v4;
      if ( !v4 )
        break;
      if ( (v4->featureReportingCache->reported.exchange & 1) != 0 )
        wil_details_RecordCachedUsage(v4->featureId, v4->featureReportingCache, v5);
    }
  }
}
