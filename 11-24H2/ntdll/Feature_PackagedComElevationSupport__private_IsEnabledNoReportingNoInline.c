/*
 * XREFs of Feature_PackagedComElevationSupport__private_IsEnabledNoReportingNoInline @ 0x180160C04
 * Callers:
 *     AppModelPolicy_GetPolicy_Internal @ 0x1800F8750 (AppModelPolicy_GetPolicy_Internal.c)
 * Callees:
 *     <none>
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
