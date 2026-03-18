/*
 * XREFs of Feature_FixDPIRecursionDoubleFault__private_IsEnabledFallback @ 0x140280CF8
 * Callers:
 *     Feature_FixDPIRecursionDoubleFault__private_IsEnabledDeviceUsageNoInline @ 0x140280CC0 (Feature_FixDPIRecursionDoubleFault__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1402677D8 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_FixDPIRecursionDoubleFault__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_FixDPIRecursionDoubleFault__private_descriptor);
}
