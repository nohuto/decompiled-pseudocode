/*
 * XREFs of Feature_Servicing_ReferSymbolicLinkFlagGlobal__private_IsEnabledDeviceUsageNoInline @ 0x1405C7D1C
 * Callers:
 *     ObpCreateSymbolicLinkName @ 0x140AC15D4 (ObpCreateSymbolicLinkName.c)
 * Callees:
 *     Feature_Servicing_ReferSymbolicLinkFlagGlobal__private_IsEnabledFallback @ 0x1405C7D54 (Feature_Servicing_ReferSymbolicLinkFlagGlobal__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_ReferSymbolicLinkFlagGlobal__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_ReferSymbolicLinkFlagGlobal__private_featureState & 0x10) != 0 )
    return Feature_Servicing_ReferSymbolicLinkFlagGlobal__private_featureState & 1;
  else
    return Feature_Servicing_ReferSymbolicLinkFlagGlobal__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_ReferSymbolicLinkFlagGlobal__private_featureState,
             3LL);
}
