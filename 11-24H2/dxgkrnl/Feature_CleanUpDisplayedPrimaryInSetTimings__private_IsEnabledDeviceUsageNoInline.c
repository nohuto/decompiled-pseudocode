/*
 * XREFs of Feature_CleanUpDisplayedPrimaryInSetTimings__private_IsEnabledDeviceUsageNoInline @ 0x140067948
 * Callers:
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x14028FFE0 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x14037C6F0 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     Feature_CleanUpDisplayedPrimaryInSetTimings__private_IsEnabledFallback @ 0x140067980 (Feature_CleanUpDisplayedPrimaryInSetTimings__private_IsEnabledFallback.c)
 */

__int64 Feature_CleanUpDisplayedPrimaryInSetTimings__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_CleanUpDisplayedPrimaryInSetTimings__private_featureState & 0x10) != 0 )
    return Feature_CleanUpDisplayedPrimaryInSetTimings__private_featureState & 1;
  else
    return Feature_CleanUpDisplayedPrimaryInSetTimings__private_IsEnabledFallback(
             (unsigned int)Feature_CleanUpDisplayedPrimaryInSetTimings__private_featureState,
             3LL);
}
