/*
 * XREFs of Feature_PackagedComElevationSupport_v2__private_IsEnabledNoReportingNoInline @ 0x18015EFC4
 * Callers:
 *     AppModelPolicy_GetPolicy_Internal @ 0x1800F32C0 (AppModelPolicy_GetPolicy_Internal.c)
 * Callees:
 *     <none>
 */

__int64 Feature_PackagedComElevationSupport_v2__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_PackagedComElevationSupport_v2__private_featureState & 2) != 0 )
    return Feature_PackagedComElevationSupport_v2__private_featureState & 1;
  else
    return Feature_PackagedComElevationSupport_v2__private_IsEnabledFallback(
             (unsigned int)Feature_PackagedComElevationSupport_v2__private_featureState,
             0);
}
