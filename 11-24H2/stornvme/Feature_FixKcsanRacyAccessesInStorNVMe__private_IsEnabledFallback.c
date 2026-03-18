/*
 * XREFs of Feature_FixKcsanRacyAccessesInStorNVMe__private_IsEnabledFallback @ 0x140017710
 * Callers:
 *     Feature_FixKcsanRacyAccessesInStorNVMe__private_IsEnabledDeviceUsageNoInline @ 0x1400176D8 (Feature_FixKcsanRacyAccessesInStorNVMe__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140019BA8 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_FixKcsanRacyAccessesInStorNVMe__private_IsEnabledFallback(__int64 a1, __int64 a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_FixKcsanRacyAccessesInStorNVMe__private_descriptor);
}
