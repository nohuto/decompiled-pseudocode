/*
 * XREFs of DriverUnload @ 0x14002F3D0
 * Callers:
 *     DriverEntry @ 0x14002F218 (DriverEntry.c)
 * Callees:
 *     WppCleanupKm @ 0x14002FD68 (WppCleanupKm.c)
 */

void __fastcall DriverUnload(__int64 a1)
{
  void *v2; // rcx

  if ( g_wil_details_featureChangeNotification )
  {
    RtlUnregisterFeatureConfigurationChangeNotification();
    g_wil_details_featureChangeNotification = 0LL;
  }
  if ( g_wil_details_featureUsageProvider )
  {
    RtlUnregisterFeatureUsageProvider();
    g_wil_details_featureUsageProvider = 0LL;
  }
  g_wil_details_isFeatureStagingInitialized = 0;
  WppCleanupKm(a1);
  if ( g_RegistryPath )
  {
    v2 = (void *)*((_QWORD *)g_RegistryPath + 1);
    if ( v2 )
      ExFreePool(v2);
    ExFreePool(g_RegistryPath);
    g_RegistryPath = 0LL;
  }
}
