/*
 * XREFs of Feature_PackagedComElevationSupport__private_IsEnabledNoReportingNoInline @ 0x1405FBE2C
 * Callers:
 *     AppModelPolicy_GetPolicy_Internal @ 0x140495818 (AppModelPolicy_GetPolicy_Internal.c)
 * Callees:
 *     Feature_PackagedComElevationSupport__private_IsEnabledFallback @ 0x1405FBE10 (Feature_PackagedComElevationSupport__private_IsEnabledFallback.c)
 */

__int64 Feature_PackagedComElevationSupport__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_PackagedComElevationSupport__private_featureState & 2) != 0 )
    return Feature_PackagedComElevationSupport__private_featureState & 1;
  else
    return Feature_PackagedComElevationSupport__private_IsEnabledFallback(
             (unsigned int)Feature_PackagedComElevationSupport__private_featureState,
             0);
}
