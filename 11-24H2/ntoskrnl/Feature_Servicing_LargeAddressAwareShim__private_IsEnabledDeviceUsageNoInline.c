/*
 * XREFs of Feature_Servicing_LargeAddressAwareShim__private_IsEnabledDeviceUsageNoInline @ 0x1405E2CE4
 * Callers:
 *     PspAllocateProcess @ 0x1409FACD0 (PspAllocateProcess.c)
 * Callees:
 *     Feature_Servicing_LargeAddressAwareShim__private_IsEnabledFallback @ 0x1405E2D1C (Feature_Servicing_LargeAddressAwareShim__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_LargeAddressAwareShim__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_LargeAddressAwareShim__private_featureState & 0x10) != 0 )
    return Feature_Servicing_LargeAddressAwareShim__private_featureState & 1;
  else
    return Feature_Servicing_LargeAddressAwareShim__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_LargeAddressAwareShim__private_featureState,
             3LL);
}
