/*
 * XREFs of Feature_SetPciLinkBandwidthIoctl__private_IsEnabledFallback @ 0x14005662C
 * Callers:
 *     Feature_SetPciLinkBandwidthIoctl__private_IsEnabledDeviceUsageNoInline @ 0x1400565F4 (Feature_SetPciLinkBandwidthIoctl__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140068770 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_SetPciLinkBandwidthIoctl__private_IsEnabledFallback(__int64 a1, __int64 a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_SetPciLinkBandwidthIoctl__private_descriptor);
}
