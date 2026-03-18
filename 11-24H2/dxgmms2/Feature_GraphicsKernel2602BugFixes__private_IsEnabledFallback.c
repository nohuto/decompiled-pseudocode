/*
 * XREFs of Feature_GraphicsKernel2602BugFixes__private_IsEnabledFallback @ 0x1400509A4
 * Callers:
 *     Feature_GraphicsKernel2602BugFixes__private_IsEnabledDeviceUsageNoInline @ 0x14005096C (Feature_GraphicsKernel2602BugFixes__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14004CE2C (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_GraphicsKernel2602BugFixes__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_GraphicsKernel2602BugFixes__private_descriptor);
}
