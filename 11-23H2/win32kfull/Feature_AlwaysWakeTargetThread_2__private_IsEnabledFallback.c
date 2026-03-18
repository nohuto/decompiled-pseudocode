/*
 * XREFs of Feature_AlwaysWakeTargetThread_2__private_IsEnabledFallback @ 0x1C0139DE0
 * Callers:
 *     Feature_AlwaysWakeTargetThread_2__private_IsEnabledDeviceUsage @ 0x1C0139DA8 (Feature_AlwaysWakeTargetThread_2__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1C01392B4 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_AlwaysWakeTargetThread_2__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_AlwaysWakeTargetThread_2__private_descriptor);
}
