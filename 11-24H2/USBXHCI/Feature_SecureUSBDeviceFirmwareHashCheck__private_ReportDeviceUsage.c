/*
 * XREFs of Feature_SecureUSBDeviceFirmwareHashCheck__private_ReportDeviceUsage @ 0x14004AE2C
 * Callers:
 *     Isoch_RetrieveNextStage @ 0x14000E290 (Isoch_RetrieveNextStage.c)
 *     TR_ValidateSecureTransferType @ 0x140023BB0 (TR_ValidateSecureTransferType.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1400380F0 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x140045834 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

void Feature_SecureUSBDeviceFirmwareHashCheck__private_ReportDeviceUsage()
{
  __int64 v0; // [rsp+30h] [rbp+8h]

  v0 = (unsigned int)Feature_SecureUSBDeviceFirmwareHashCheck__private_featureState;
  if ( (Feature_SecureUSBDeviceFirmwareHashCheck__private_featureState & 0x10) == 0 )
  {
    LODWORD(v0) = Feature_SecureUSBDeviceFirmwareHashCheck__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_SecureUSBDeviceFirmwareHashCheck__private_descriptor,
      v0,
      3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v0,
      3,
      (__int64)&Feature_SecureUSBDeviceFirmwareHashCheck__private_descriptor);
  }
}
