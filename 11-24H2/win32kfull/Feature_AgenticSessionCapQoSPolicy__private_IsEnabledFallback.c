/*
 * XREFs of Feature_AgenticSessionCapQoSPolicy__private_IsEnabledFallback @ 0x140274C10
 * Callers:
 *     Feature_AgenticSessionCapQoSPolicy__private_IsEnabledDeviceUsageNoInline @ 0x140274BD8 (Feature_AgenticSessionCapQoSPolicy__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1402677D8 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_AgenticSessionCapQoSPolicy__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_AgenticSessionCapQoSPolicy__private_descriptor);
}
