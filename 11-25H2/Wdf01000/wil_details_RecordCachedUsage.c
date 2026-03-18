/*
 * XREFs of wil_details_RecordCachedUsage @ 0x140085F20
 * Callers:
 *     wil_details_OnFeatureUsageProviderFlushNotification @ 0x1400D9290 (wil_details_OnFeatureUsageProviderFlushNotification.c)
 * Callees:
 *     __security_check_cookie @ 0x1400AC640 (__security_check_cookie.c)
 *     wil_details_RecordFeatureUsageCallback @ 0x1400D92E4 (wil_details_RecordFeatureUsageCallback.c)
 */

void __fastcall wil_details_RecordCachedUsage(
        unsigned int featureId,
        wil_details_FeatureReportingCache *data,
        void (__fastcall *a3)(__WIL_RTL_FEATURE_USAGE_DATA *, unsigned __int64))
{
  unsigned __int32 v5; // edx
  unsigned int v6; // ecx
  __WIL_RTL_FEATURE_USAGE_DATA *v7; // r8
  signed __int64 v8; // r8
  __WIL_RTL_FEATURE_USAGE_DATA reports[6]; // [rsp+20h] [rbp-48h] BYREF

  _m_prefetchw(data);
  v5 = _InterlockedAnd((volatile signed __int32 *)data, 0xFFC0401E);
  v6 = (v5 >> 1) & 0xF;
  if ( v6 )
  {
    _m_prefetchw(&data->recorded);
    v6 &= ~_InterlockedOr((volatile signed __int32 *)&data->recorded, v6);
  }
  v7 = reports;
  if ( (v6 & 1) != 0 )
  {
    reports[0].FeatureId = featureId;
    v7 = &reports[1];
    *(_DWORD *)&reports[0].ReportingKind = 65538;
  }
  if ( (v6 & 2) != 0 )
  {
    v7->FeatureId = featureId;
    *(_DWORD *)&v7->ReportingKind = 65542;
    ++v7;
  }
  if ( (v6 & 4) != 0 )
  {
    v7->FeatureId = featureId;
    *(_DWORD *)&v7->ReportingKind = 65539;
    ++v7;
  }
  if ( v6 >= 8 )
  {
    v7->FeatureId = featureId;
    *(_DWORD *)&v7->ReportingKind = 65543;
    ++v7;
  }
  if ( ((v5 >> 5) & 0x1FF) != 0 )
  {
    v7->FeatureId = featureId;
    v7->UsageCount = (v5 >> 5) & 0x1FF;
    v7->ReportingKind = 4 * ((v5 >> 14) & 1);
    ++v7;
  }
  if ( ((v5 >> 15) & 0x7F) != 0 )
  {
    v7->FeatureId = featureId;
    v7->UsageCount = (v5 >> 15) & 0x7F;
    v7->ReportingKind = 4 * ((v5 >> 22) & 1) + 1;
    ++v7;
  }
  v8 = v7 - reports;
  if ( v8 > 0 )
    wil_details_RecordFeatureUsageCallback(reports, v8);
}
