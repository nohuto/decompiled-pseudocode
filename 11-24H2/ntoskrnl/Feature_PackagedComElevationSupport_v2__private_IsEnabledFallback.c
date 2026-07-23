/*
 * XREFs of Feature_PackagedComElevationSupport_v2__private_IsEnabledFallback @ 0x140605800
 * Callers:
 *     Feature_PackagedComElevationSupport_v2__private_IsEnabledNoReportingNoInline @ 0x14060581C (Feature_PackagedComElevationSupport_v2__private_IsEnabledNoReportingNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1404CA820 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_PackagedComElevationSupport_v2__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_PackagedComElevationSupport_v2__private_descriptor);
}
