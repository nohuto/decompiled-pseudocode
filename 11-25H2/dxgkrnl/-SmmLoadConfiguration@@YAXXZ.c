/*
 * XREFs of ?SmmLoadConfiguration@@YAXXZ @ 0x14018236C
 * Callers:
 *     ?SysMmInitializeGlobal@@YAXXZ @ 0x14027FF1C (-SysMmInitializeGlobal@@YAXXZ.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1400670D8 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14006735C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     DxgkGpuVaIoMmuEnabled @ 0x1401823F0 (DxgkGpuVaIoMmuEnabled.c)
 *     SmmQueryRegistry @ 0x1403FD498 (SmmQueryRegistry.c)
 */

void SmmLoadConfiguration(void)
{
  __int64 v0; // [rsp+30h] [rbp+8h]

  SmmQueryRegistry();
  if ( (unsigned __int8)DxgkGpuVaIoMmuEnabled() )
  {
    dword_14015E600 |= 0x200u;
  }
  else
  {
    v0 = (unsigned int)Feature_IommuInterfaceV2_Smm__private_featureState;
    if ( (Feature_IommuInterfaceV2_Smm__private_featureState & 0x10) == 0 )
    {
      LODWORD(v0) = Feature_IommuInterfaceV2_Smm__private_featureState | 1;
      wil_details_FeatureReporting_ReportUsageToService(
        (__int64)&Feature_IommuInterfaceV2_Smm__private_descriptor,
        v0,
        3LL);
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
        v0,
        3,
        (__int64)&Feature_IommuInterfaceV2_Smm__private_descriptor);
    }
    dword_14015E600 |= 0x100u;
  }
}
