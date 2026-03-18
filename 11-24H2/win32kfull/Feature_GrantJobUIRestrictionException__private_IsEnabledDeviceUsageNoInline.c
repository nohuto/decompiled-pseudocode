/*
 * XREFs of Feature_GrantJobUIRestrictionException__private_IsEnabledDeviceUsageNoInline @ 0x14029257C
 * Callers:
 *     NtUserGrantJobUIRestrictionException @ 0x140298200 (NtUserGrantJobUIRestrictionException.c)
 * Callees:
 *     Feature_GrantJobUIRestrictionException__private_IsEnabledFallback @ 0x1402925B4 (Feature_GrantJobUIRestrictionException__private_IsEnabledFallback.c)
 */

__int64 Feature_GrantJobUIRestrictionException__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_GrantJobUIRestrictionException__private_featureState & 0x10) != 0 )
    return Feature_GrantJobUIRestrictionException__private_featureState & 1;
  else
    return Feature_GrantJobUIRestrictionException__private_IsEnabledFallback(
             (unsigned int)Feature_GrantJobUIRestrictionException__private_featureState,
             3LL);
}
