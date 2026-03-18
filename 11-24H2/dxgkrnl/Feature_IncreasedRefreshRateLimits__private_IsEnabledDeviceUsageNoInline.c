/*
 * XREFs of Feature_IncreasedRefreshRateLimits__private_IsEnabledDeviceUsageNoInline @ 0x14009005C
 * Callers:
 *     ?GetMaxPixelRate@DMMVIDEOSIGNALMODE@@SA_KXZ @ 0x14003E47C (-GetMaxPixelRate@DMMVIDEOSIGNALMODE@@SA_KXZ.c)
 *     ?GetMaxHSync@DMMVIDEOSIGNALMODE@@SAIXZ @ 0x14003E4BC (-GetMaxHSync@DMMVIDEOSIGNALMODE@@SAIXZ.c)
 *     ?GetMaxVSync@DMMVIDEOSIGNALMODE@@SAIXZ @ 0x14003E4F0 (-GetMaxVSync@DMMVIDEOSIGNALMODE@@SAIXZ.c)
 * Callees:
 *     Feature_IncreasedRefreshRateLimits__private_IsEnabledFallback @ 0x140090094 (Feature_IncreasedRefreshRateLimits__private_IsEnabledFallback.c)
 */

__int64 Feature_IncreasedRefreshRateLimits__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_IncreasedRefreshRateLimits__private_featureState & 0x10) != 0 )
    return Feature_IncreasedRefreshRateLimits__private_featureState & 1;
  else
    return Feature_IncreasedRefreshRateLimits__private_IsEnabledFallback(
             (unsigned int)Feature_IncreasedRefreshRateLimits__private_featureState,
             3LL);
}
