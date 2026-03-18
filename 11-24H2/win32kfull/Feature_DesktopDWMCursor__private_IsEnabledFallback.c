/*
 * XREFs of Feature_DesktopDWMCursor__private_IsEnabledFallback @ 0x1402677BC
 * Callers:
 *     Feature_DesktopDWMCursor__private_IsEnabledDeviceUsageNoInline @ 0x14026B4C0 (Feature_DesktopDWMCursor__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1402677D8 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_DesktopDWMCursor__private_IsEnabledFallback(__int64 a1, __int64 a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_DesktopDWMCursor__private_descriptor);
}
