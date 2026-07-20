/*
 * XREFs of Feature_DriverStore_EnumerateBlockedDrivers__private_IsEnabledFallback @ 0x140019D48
 * Callers:
 *     Feature_DriverStore_EnumerateBlockedDrivers__private_IsEnabledDeviceUsageNoInline @ 0x140019D18 (Feature_DriverStore_EnumerateBlockedDrivers__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Feature_DriverStore_EnumerateBlockedDrivers__private_IsEnabledFallback(__int64 a1, __int64 a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_DriverStore_EnumerateBlockedDrivers__private_descriptor);
}
