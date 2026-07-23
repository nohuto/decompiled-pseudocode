/*
 * XREFs of Feature_Test52061194__private_IsEnabledFallback @ 0x1404F3F70
 * Callers:
 *     Feature_Test52061194__private_IsEnabledNoReportingNoInline @ 0x140435A90 (Feature_Test52061194__private_IsEnabledNoReportingNoInline.c)
 *     Feature_Test52061194__private_IsEnabledDeviceUsageNoInline @ 0x1404F3F38 (Feature_Test52061194__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1404CA820 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_Test52061194__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, (volatile signed __int32 **)&Feature_Test52061194__private_descriptor);
}
