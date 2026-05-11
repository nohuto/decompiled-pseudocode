/*
 * XREFs of DriverUnload @ 0x14002F280
 * Callers:
 *     DriverEntry @ 0x14002F0CC (DriverEntry.c)
 * Callees:
 *     WppCleanupKm @ 0x14002FC18 (WppCleanupKm.c)
 */

void __fastcall DriverUnload(__int64 a1)
{
  void *v2; // rcx

  if ( WPP_MAIN_CB.Dpc.DpcData )
  {
    RtlUnregisterFeatureConfigurationChangeNotification();
    WPP_MAIN_CB.Dpc.DpcData = 0LL;
  }
  if ( g_wil_details_featureUsageProvider )
  {
    RtlUnregisterFeatureUsageProvider();
    g_wil_details_featureUsageProvider = 0LL;
  }
  WPP_MAIN_CB.ActiveThreadCount = 0;
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
