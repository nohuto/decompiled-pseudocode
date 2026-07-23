/*
 * XREFs of Feature_EnsureVerBlockCanHoldFixedInfo__private_IsEnabledDeviceUsageNoInline @ 0x140697C80
 * Callers:
 *     AslpFileGetVersionBlock @ 0x14080ECC0 (AslpFileGetVersionBlock.c)
 * Callees:
 *     Feature_EnsureVerBlockCanHoldFixedInfo__private_IsEnabledFallback @ 0x140697CB8 (Feature_EnsureVerBlockCanHoldFixedInfo__private_IsEnabledFallback.c)
 */

__int64 Feature_EnsureVerBlockCanHoldFixedInfo__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_EnsureVerBlockCanHoldFixedInfo__private_featureState & 0x10) != 0 )
    return Feature_EnsureVerBlockCanHoldFixedInfo__private_featureState & 1;
  else
    return Feature_EnsureVerBlockCanHoldFixedInfo__private_IsEnabledFallback(
             (unsigned int)Feature_EnsureVerBlockCanHoldFixedInfo__private_featureState,
             3LL);
}
