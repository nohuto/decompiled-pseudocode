/*
 * XREFs of Feature_IMRespectWTDToggle__private_IsEnabledFallback @ 0x1C0139E34
 * Callers:
 *     Feature_IMRespectWTDToggle__private_IsEnabledDeviceUsage @ 0x1C0139DFC (Feature_IMRespectWTDToggle__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1C01392B4 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_IMRespectWTDToggle__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_IMRespectWTDToggle__private_descriptor);
}
