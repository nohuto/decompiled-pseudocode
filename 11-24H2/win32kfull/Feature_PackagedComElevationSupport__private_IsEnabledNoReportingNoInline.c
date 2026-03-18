/*
 * XREFs of Feature_PackagedComElevationSupport__private_IsEnabledNoReportingNoInline @ 0x140288280
 * Callers:
 *     ?AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValue@@PEAU_PS_PKG_CLAIM@@PEA_K@Z @ 0x1401F5F5C (-AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValu.c)
 * Callees:
 *     Feature_PackagedComElevationSupport__private_IsEnabledFallback @ 0x140288264 (Feature_PackagedComElevationSupport__private_IsEnabledFallback.c)
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
