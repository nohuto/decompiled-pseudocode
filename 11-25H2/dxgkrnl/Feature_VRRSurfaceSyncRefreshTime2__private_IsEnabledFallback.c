/*
 * XREFs of Feature_VRRSurfaceSyncRefreshTime2__private_IsEnabledFallback @ 0x1400984B4
 * Callers:
 *     Feature_VRRSurfaceSyncRefreshTime2__private_IsEnabledDeviceUsageNoInline @ 0x14009847C (Feature_VRRSurfaceSyncRefreshTime2__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14006164C (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_VRRSurfaceSyncRefreshTime2__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_VRRSurfaceSyncRefreshTime2__private_descriptor);
}
