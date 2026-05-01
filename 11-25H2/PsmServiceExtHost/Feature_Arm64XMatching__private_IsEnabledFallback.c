/*
 * XREFs of Feature_Arm64XMatching__private_IsEnabledFallback @ 0x1800A3814
 * Callers:
 *     Feature_Arm64XMatching__private_IsEnabledDeviceUsageNoInline @ 0x1800A37E4 (Feature_Arm64XMatching__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Feature_Arm64XMatching__private_IsEnabledFallback(__int64 a1, int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, (volatile signed __int32 **)&Feature_Arm64XMatching__private_descriptor);
}
