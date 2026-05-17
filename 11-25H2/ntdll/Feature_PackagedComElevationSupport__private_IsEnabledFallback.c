/*
 * XREFs of Feature_PackagedComElevationSupport__private_IsEnabledFallback @ 0x180162184
 * Callers:
 *     Feature_PackagedComElevationSupport__private_IsEnabledNoReportingNoInline @ 0x180162198 (Feature_PackagedComElevationSupport__private_IsEnabledNoReportingNoInline.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Feature_PackagedComElevationSupport__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_PackagedComElevationSupport__private_descriptor);
}
