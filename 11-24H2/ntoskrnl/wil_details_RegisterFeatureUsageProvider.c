/*
 * XREFs of wil_details_RegisterFeatureUsageProvider @ 0x1407D66A0
 * Callers:
 *     CmFcInitSystem1 @ 0x140C4C340 (CmFcInitSystem1.c)
 * Callees:
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x1404B90F4 (wil_details_FeatureDescriptors_SkipPadding.c)
 *     CmFcManagerRegisterFeatureUsageProvider @ 0x1407E4AB4 (CmFcManagerRegisterFeatureUsageProvider.c)
 */

__int64 wil_details_RegisterFeatureUsageProvider()
{
  __int64 v0; // rcx
  __int64 result; // rax
  _QWORD v2[3]; // [rsp+20h] [rbp-28h] BYREF
  int v3; // [rsp+38h] [rbp-10h]
  int v4; // [rsp+3Ch] [rbp-Ch]

  v4 = 0;
  g_wil_details_recordFeatureUsage = (__int64)wil_details_RecordFeatureUsageReporting;
  v2[2] = 0LL;
  v2[0] = wil_details_FeatureDescriptors_SkipPadding((__int64 *)&wil_details_featureDescriptors_a);
  v3 = 1;
  v2[1] = &wil_details_featureDescriptors_z;
  result = CmFcManagerRegisterFeatureUsageProvider(
             v0,
             wil_details_OnFeatureUsageProviderFlushNotification,
             v2,
             &g_wil_details_featureUsageProvider);
  if ( (_DWORD)result )
    g_wil_details_featureUsageProvider = 0LL;
  return result;
}
