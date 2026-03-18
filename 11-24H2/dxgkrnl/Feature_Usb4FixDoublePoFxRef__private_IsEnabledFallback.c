/*
 * XREFs of Feature_Usb4FixDoublePoFxRef__private_IsEnabledFallback @ 0x1400917F0
 * Callers:
 *     Feature_Usb4FixDoublePoFxRef__private_IsEnabledDeviceUsageNoInline @ 0x1400917B8 (Feature_Usb4FixDoublePoFxRef__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140061F08 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_Usb4FixDoublePoFxRef__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_Usb4FixDoublePoFxRef__private_descriptor);
}
