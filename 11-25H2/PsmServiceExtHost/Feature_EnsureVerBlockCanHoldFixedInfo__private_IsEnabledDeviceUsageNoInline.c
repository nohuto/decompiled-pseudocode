/*
 * XREFs of Feature_EnsureVerBlockCanHoldFixedInfo__private_IsEnabledDeviceUsageNoInline @ 0x1800A386C
 * Callers:
 *     AslpFileGetVersionBlock @ 0x1800A1994 (AslpFileGetVersionBlock.c)
 * Callees:
 *     <none>
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
