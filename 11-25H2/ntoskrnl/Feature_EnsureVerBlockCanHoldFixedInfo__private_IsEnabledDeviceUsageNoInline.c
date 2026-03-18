/*
 * XREFs of Feature_EnsureVerBlockCanHoldFixedInfo__private_IsEnabledDeviceUsageNoInline @ 0x14068B860
 * Callers:
 *     AslpFileGetVersionBlock @ 0x1407FEA10 (AslpFileGetVersionBlock.c)
 * Callees:
 *     Feature_EnsureVerBlockCanHoldFixedInfo__private_IsEnabledFallback @ 0x14068B898 (Feature_EnsureVerBlockCanHoldFixedInfo__private_IsEnabledFallback.c)
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
