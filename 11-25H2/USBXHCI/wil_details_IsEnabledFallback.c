/*
 * XREFs of wil_details_IsEnabledFallback @ 0x14003FD74
 * Callers:
 *     Feature_UMPERS__private_IsEnabledFallback @ 0x14003F5AC (Feature_UMPERS__private_IsEnabledFallback.c)
 *     Feature_FSSM__private_IsEnabledFallback @ 0x140044240 (Feature_FSSM__private_IsEnabledFallback.c)
 *     Feature_O3BDH__private_IsEnabledFallback @ 0x140044294 (Feature_O3BDH__private_IsEnabledFallback.c)
 *     Feature_RH1S__private_IsEnabledFallback @ 0x1400442E8 (Feature_RH1S__private_IsEnabledFallback.c)
 *     Feature_SBDFESSOA__private_IsEnabledFallback @ 0x14004433C (Feature_SBDFESSOA__private_IsEnabledFallback.c)
 *     Feature_SPR_HardenInClient__private_IsEnabledFallback @ 0x140044390 (Feature_SPR_HardenInClient__private_IsEnabledFallback.c)
 *     Feature_Servicing_Usb3AMDRuntimeRegistersToVTL0__private_IsEnabledFallback @ 0x1400443E4 (Feature_Servicing_Usb3AMDRuntimeRegistersToVTL0__private_IsEnabledFallback.c)
 *     Feature_UARRTVS2__private_IsEnabledFallback @ 0x140044438 (Feature_UARRTVS2__private_IsEnabledFallback.c)
 *     Feature_USBEXSVPA__private_IsEnabledFallback @ 0x1400444F0 (Feature_USBEXSVPA__private_IsEnabledFallback.c)
 *     Feature_USBEXSVPX__private_IsEnabledFallback @ 0x140044544 (Feature_USBEXSVPX__private_IsEnabledFallback.c)
 *     Feature_UXTM__private_IsEnabledFallback @ 0x140044598 (Feature_UXTM__private_IsEnabledFallback.c)
 *     Feature_UISCSF__private_IsEnabledFallback @ 0x1400482B8 (Feature_UISCSF__private_IsEnabledFallback.c)
 *     Feature_UTMDSM__private_IsEnabledFallback @ 0x14004DF18 (Feature_UTMDSM__private_IsEnabledFallback.c)
 *     Feature_UTSP__private_IsEnabledFallback @ 0x14004DF6C (Feature_UTSP__private_IsEnabledFallback.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x140037B74 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x14003FAA0 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14003FBB0 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
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
