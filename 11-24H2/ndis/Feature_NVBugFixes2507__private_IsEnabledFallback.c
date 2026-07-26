/*
 * XREFs of Feature_NVBugFixes2507__private_IsEnabledFallback @ 0x140095974
 * Callers:
 *     Feature_NVBugFixes2507__private_IsEnabledDeviceUsageNoInline @ 0x14009593C (Feature_NVBugFixes2507__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140090368 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_NVBugFixes2507__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, (volatile signed __int32 **)&Feature_NVBugFixes2507__private_descriptor);
}
