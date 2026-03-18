/*
 * XREFs of wil_details_IsEnabledFallback @ 0x1400459F8
 * Callers:
 *     Feature_EUSB2__private_IsEnabledFallback @ 0x140043D90 (Feature_EUSB2__private_IsEnabledFallback.c)
 *     Feature_FSSM__private_IsEnabledFallback @ 0x140043DE4 (Feature_FSSM__private_IsEnabledFallback.c)
 *     Feature_O3BDH__private_IsEnabledFallback @ 0x140043E38 (Feature_O3BDH__private_IsEnabledFallback.c)
 *     Feature_RH1S__private_IsEnabledFallback @ 0x140043E8C (Feature_RH1S__private_IsEnabledFallback.c)
 *     Feature_SPR_HardenInClient__private_IsEnabledFallback @ 0x140043EE0 (Feature_SPR_HardenInClient__private_IsEnabledFallback.c)
 *     Feature_UPD0__private_IsEnabledFallback @ 0x140043F34 (Feature_UPD0__private_IsEnabledFallback.c)
 *     Feature_USBEXSVPA__private_IsEnabledFallback @ 0x140043FEC (Feature_USBEXSVPA__private_IsEnabledFallback.c)
 *     Feature_USBEXSVPX__private_IsEnabledFallback @ 0x140044040 (Feature_USBEXSVPX__private_IsEnabledFallback.c)
 *     Feature_UXKTV__private_IsEnabledFallback @ 0x140044094 (Feature_UXKTV__private_IsEnabledFallback.c)
 *     Feature_UISCSF__private_IsEnabledFallback @ 0x1400485C8 (Feature_UISCSF__private_IsEnabledFallback.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1400380F0 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x140045724 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x140045834 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 __fastcall wil_details_IsEnabledFallback(__int64 a1, unsigned int a2, volatile signed __int32 **a3)
{
  char v5; // bl
  __int64 v6; // rdi

  v5 = a1;
  if ( (a1 & 2) != 0 )
  {
    v6 = (unsigned int)a1;
  }
  else
  {
    v6 = wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(*a3, a1, (__int64)a3);
    v5 = v6;
  }
  if ( a2 )
  {
    wil_details_FeatureReporting_ReportUsageToService((__int64)a3, v6, a2);
    if ( a2 - 3 <= 1 )
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v6, a2, (__int64)a3);
  }
  return v5 & 1;
}
