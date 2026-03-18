/*
 * XREFs of ?GetMaxPixelRate@DMMVIDEOSIGNALMODE@@SA_KXZ @ 0x14003E47C
 * Callers:
 *     ?_ValidateDdiVideoSignalModeInfo@DMMVIDEOSIGNALMODE@@SAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x14003E1D8 (-_ValidateDdiVideoSignalModeInfo@DMMVIDEOSIGNALMODE@@SAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z.c)
 *     ?IsValidFrequencyRange@@YAJAEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x1400918F0 (-IsValidFrequencyRange@@YAJAEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z.c)
 * Callees:
 *     Feature_IncreasedRefreshRateLimits__private_IsEnabledDeviceUsageNoInline @ 0x14009005C (Feature_IncreasedRefreshRateLimits__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 DMMVIDEOSIGNALMODE::GetMaxPixelRate(void)
{
  if ( DMMVIDEOSIGNALMODE::EnableExperimentalRefreshRates )
    return 40000000000LL;
  else
    return (-(__int64)((unsigned int)Feature_IncreasedRefreshRateLimits__private_IsEnabledDeviceUsageNoInline() != 0) & 0x2540BE400LL)
         + 10000000000LL;
}
