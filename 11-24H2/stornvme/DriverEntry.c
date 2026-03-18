/*
 * XREFs of DriverEntry @ 0x14000DA10
 * Callers:
 *     GsDriverEntry @ 0x140046010 (GsDriverEntry.c)
 * Callees:
 *     memset @ 0x1400314C0 (memset.c)
 *     wil_InitializeFeatureStaging @ 0x140046078 (wil_InitializeFeatureStaging.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  NTSTATUS result; // eax
  NTSTATUS v5; // ebx
  _QWORD v6[26]; // [rsp+20h] [rbp-79h] BYREF

  memset(v6, 0, sizeof(v6));
  if ( !g_DumpPreInitializeInvoked )
    wil_InitializeFeatureStaging();
  LODWORD(v6[23]) |= 0xC003B1B8;
  v6[1] = NVMeHwInitialize;
  v6[0] = 0x5000000D0LL;
  v6[2] = NVMeHwStartIo;
  LODWORD(v6[11]) = 16843010;
  v6[3] = NVMeHwInterrupt;
  v6[4] = NVMeHwFindAdapter;
  v6[5] = NVMeHwResetBus;
  v6[15] = NVMeHwAdapterControl;
  v6[16] = NVMeHwBuildIo;
  v6[22] = NVMeHwTracingEnabled;
  v6[25] = NVMeHwUnitControl;
  BYTE4(v6[11]) = 1;
  LODWORD(v6[8]) = 4352;
  v6[9] = 0x200002088LL;
  HIDWORD(v6[23]) = 2;
  result = ((__int64 (__fastcall *)(_DRIVER_OBJECT *, PUNICODE_STRING, _QWORD *, _QWORD))StorPortInitialize)(
             DriverObject,
             RegistryPath,
             v6,
             0LL);
  v5 = result;
  if ( !g_DumpPreInitializeInvoked )
  {
    if ( result )
    {
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
    }
    else
    {
      StorPortDriverUnload = (__int64)DriverObject->DriverUnload;
      if ( !StorPortDriverUnload )
        return result;
      DriverObject->DriverUnload = (PDRIVER_UNLOAD)StorNVMeDriverUnload;
    }
    return v5;
  }
  return result;
}
