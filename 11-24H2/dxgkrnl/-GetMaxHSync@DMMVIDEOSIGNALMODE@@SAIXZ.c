/*
 * XREFs of ?GetMaxHSync@DMMVIDEOSIGNALMODE@@SAIXZ @ 0x14003E4BC
 * Callers:
 *     ?_ValidateDdiVideoSignalModeInfo@DMMVIDEOSIGNALMODE@@SAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x14003E1D8 (-_ValidateDdiVideoSignalModeInfo@DMMVIDEOSIGNALMODE@@SAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z.c)
 *     ?IsValidFrequencyRange@@YAJAEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x1400918F0 (-IsValidFrequencyRange@@YAJAEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z.c)
 * Callees:
 *     Feature_IncreasedRefreshRateLimits__private_IsEnabledDeviceUsageNoInline @ 0x14009005C (Feature_IncreasedRefreshRateLimits__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 DMMVIDEOSIGNALMODE::GetMaxHSync(void)
{
  if ( DMMVIDEOSIGNALMODE::EnableExperimentalRefreshRates )
    return 50000000LL;
  else
    return (unsigned int)Feature_IncreasedRefreshRateLimits__private_IsEnabledDeviceUsageNoInline() != 0
         ? 25000000
         : 2000000;
}
