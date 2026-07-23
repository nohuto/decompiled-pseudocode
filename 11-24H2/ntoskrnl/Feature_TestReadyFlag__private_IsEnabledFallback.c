/*
 * XREFs of Feature_TestReadyFlag__private_IsEnabledFallback @ 0x140668C10
 * Callers:
 *     Feature_TestReadyFlag__private_IsEnabledNoReportingNoInline @ 0x140668C2C (Feature_TestReadyFlag__private_IsEnabledNoReportingNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1404CA820 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_TestReadyFlag__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, (volatile signed __int32 **)&Feature_TestReadyFlag__private_descriptor);
}
