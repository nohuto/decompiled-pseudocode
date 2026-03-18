/*
 * XREFs of Feature_Servicing_UmfdDeadlockFix__private_IsEnabledFallback @ 0x14031D4CC
 * Callers:
 *     Feature_Servicing_UmfdDeadlockFix__private_IsEnabledDeviceUsageNoInline @ 0x14031D494 (Feature_Servicing_UmfdDeadlockFix__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1402677D8 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_Servicing_UmfdDeadlockFix__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_Servicing_UmfdDeadlockFix__private_descriptor);
}
