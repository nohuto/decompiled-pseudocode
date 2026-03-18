/*
 * XREFs of CmInitSystem0 @ 0x140C483D8
 * Callers:
 *     InitBootProcessor @ 0x140C0AC88 (InitBootProcessor.c)
 * Callees:
 *     RtlArmFeatureUsageProviderFlushNotification @ 0x1404F5110 (RtlArmFeatureUsageProviderFlushNotification.c)
 *     wil_details_RegisterFeatureStagingChangeNotification @ 0x1407D612C (wil_details_RegisterFeatureStagingChangeNotification.c)
 *     wil_details_RegisterFeatureUsageProvider @ 0x1407D6160 (wil_details_RegisterFeatureUsageProvider.c)
 *     wil_details_ShouldRegisterFeatureStagingChangeNotification @ 0x1407D61A0 (wil_details_ShouldRegisterFeatureStagingChangeNotification.c)
 *     CmpGetSystemControlValues @ 0x140C48AB8 (CmpGetSystemControlValues.c)
 */

void __fastcall CmInitSystem0(__int64 a1)
{
  __int64 ***v2; // rax
  __int64 **v3; // rbx
  __int64 v4; // rcx

  CmpGetSystemControlValues(*(_QWORD *)(a1 + 168));
  v2 = (__int64 ***)(*(_QWORD *)(a1 + 240) + 312LL);
  v3 = *v2;
  while ( v3 != (__int64 **)v2 )
  {
    if ( ((_DWORD)v3[3] & 0x40) != 0 )
      CmpGetSystemControlValues((__int64)v3[4]);
    v3 = (__int64 **)*v3;
    v2 = (__int64 ***)(*(_QWORD *)(a1 + 240) + 312LL);
  }
  if ( (unsigned int)wil_details_ShouldRegisterFeatureStagingChangeNotification() )
    wil_details_RegisterFeatureStagingChangeNotification();
  if ( !(unsigned int)wil_details_RegisterFeatureUsageProvider(v4) )
  {
    if ( g_wil_details_featureUsageCached )
      RtlArmFeatureUsageProviderFlushNotification(g_wil_details_featureUsageProvider, 1);
  }
}
