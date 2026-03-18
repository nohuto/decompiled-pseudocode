/*
 * XREFs of Feature_RestrictKernelAddressLeaks__private_IsEnabledFallback @ 0x1404FB4B0
 * Callers:
 *     Feature_RestrictKernelAddressLeaks__private_IsEnabledDeviceUsageNoInline @ 0x140485DF8 (Feature_RestrictKernelAddressLeaks__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1404D17E0 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_RestrictKernelAddressLeaks__private_IsEnabledFallback(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_RestrictKernelAddressLeaks__private_descriptor,
           a4);
}
