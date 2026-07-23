/*
 * XREFs of Feature_DriverStore_EnumerateBlockedDrivers__private_IsEnabledFallback @ 0x140660A5C
 * Callers:
 *     Feature_DriverStore_EnumerateBlockedDrivers__private_IsEnabledDeviceUsageNoInline @ 0x140660A24 (Feature_DriverStore_EnumerateBlockedDrivers__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1404CA820 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_DriverStore_EnumerateBlockedDrivers__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_DriverStore_EnumerateBlockedDrivers__private_descriptor);
}
