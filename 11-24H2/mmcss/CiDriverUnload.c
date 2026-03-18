/*
 * XREFs of CiDriverUnload @ 0x14000D350
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x140004620 (WPP_SF_.c)
 *     wil_details_UnregisterFeatureStagingChangeNotification @ 0x14000D410 (wil_details_UnregisterFeatureStagingChangeNotification.c)
 *     wil_details_UnregisterFeatureUsageProvider @ 0x14000D440 (wil_details_UnregisterFeatureUsageProvider.c)
 *     CsTerminate @ 0x14000D470 (CsTerminate.c)
 */

__int64 CiDriverUnload()
{
  __int64 result; // rax

  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    WPP_SF_(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x13u,
      (__int64)&WPP_8f5427380d7633b566e62dbddd286985_Traceguids);
  if ( CiDeviceObject )
  {
    IoDeleteDevice(CiDeviceObject);
    CiDeviceObject = 0LL;
  }
  CsTerminate();
  wil_details_UnregisterFeatureStagingChangeNotification();
  result = wil_details_UnregisterFeatureUsageProvider();
  g_wil_details_isFeatureStagingInitialized = 0;
  return result;
}
