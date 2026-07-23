/*
 * XREFs of Feature_FasterCrc32__private_IsEnabledFallback @ 0x18011E968
 * Callers:
 *     Feature_FasterCrc32__private_IsEnabledDeviceUsageNoInline @ 0x18011B210 (Feature_FasterCrc32__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Feature_FasterCrc32__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_FasterCrc32__private_descriptor);
}
