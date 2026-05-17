/*
 * XREFs of Feature_Servicing_LoaderSnapsBuffer__private_IsEnabledFallback @ 0x180110A48
 * Callers:
 *     Feature_Servicing_LoaderSnapsBuffer__private_IsEnabledDeviceUsageNoInline @ 0x18011E6D8 (Feature_Servicing_LoaderSnapsBuffer__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Feature_Servicing_LoaderSnapsBuffer__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_Servicing_LoaderSnapsBuffer__private_descriptor);
}
