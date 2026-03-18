/*
 * XREFs of Feature_FixMoveSizeNoFullDragDpiChangeBug3__private_IsEnabledFallback @ 0x14021F40C
 * Callers:
 *     Feature_FixMoveSizeNoFullDragDpiChangeBug3__private_IsEnabledDeviceUsageNoInline @ 0x14021F3D4 (Feature_FixMoveSizeNoFullDragDpiChangeBug3__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140135FE4 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_FixMoveSizeNoFullDragDpiChangeBug3__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_FixMoveSizeNoFullDragDpiChangeBug3__private_descriptor);
}
