/*
 * XREFs of Feature_PackagedComElevationSupport_v2__private_IsEnabledNoReportingNoInline @ 0x14060581C
 * Callers:
 *     AppModelPolicy_GetPolicy_Internal @ 0x14048EF38 (AppModelPolicy_GetPolicy_Internal.c)
 * Callees:
 *     Feature_PackagedComElevationSupport_v2__private_IsEnabledFallback @ 0x140605800 (Feature_PackagedComElevationSupport_v2__private_IsEnabledFallback.c)
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
