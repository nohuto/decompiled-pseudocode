/*
 * XREFs of Feature_RestrictKernelAddressLeaks__private_IsEnabledDeviceUsageNoInline @ 0x1404F1E08
 * Callers:
 *     ExIsRestrictedCaller @ 0x140A0AFF8 (ExIsRestrictedCaller.c)
 *     ExpGetProcessInformation @ 0x140AD0210 (ExpGetProcessInformation.c)
 * Callees:
 *     Feature_RestrictKernelAddressLeaks__private_IsEnabledFallback @ 0x1404F8E14 (Feature_RestrictKernelAddressLeaks__private_IsEnabledFallback.c)
 */

__int64 Feature_RestrictKernelAddressLeaks__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_RestrictKernelAddressLeaks__private_featureState & 0x10) != 0 )
    return Feature_RestrictKernelAddressLeaks__private_featureState & 1;
  else
    return Feature_RestrictKernelAddressLeaks__private_IsEnabledFallback(
             (unsigned int)Feature_RestrictKernelAddressLeaks__private_featureState,
             3LL);
}
