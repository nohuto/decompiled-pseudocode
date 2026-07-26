/*
 * XREFs of wil_details_RecordFeatureUsageReporting @ 0x1400A0180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall wil_details_RecordFeatureUsageReporting(int a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  _DWORD *v5; // rbx

  v5 = a5;
  if ( *a5 && !_InterlockedExchange(&g_wil_details_featureUsageCached, 1) && g_wil_details_featureUsageProvider )
    RtlArmFeatureUsageProviderFlushNotification(g_wil_details_featureUsageProvider, 1LL);
  if ( v5[1] )
  {
    WORD2(a5) = *((_WORD *)v5 + 4);
    HIWORD(a5) = *((_WORD *)v5 + 2);
    LODWORD(a5) = a1;
    RtlRecordFeatureUsage(&a5, 1LL);
  }
}
