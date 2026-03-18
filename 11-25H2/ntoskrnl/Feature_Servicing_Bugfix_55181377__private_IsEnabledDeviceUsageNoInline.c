/*
 * XREFs of Feature_Servicing_Bugfix_55181377__private_IsEnabledDeviceUsageNoInline @ 0x140560B30
 * Callers:
 *     IommuMapDevice @ 0x140561BE0 (IommuMapDevice.c)
 * Callees:
 *     Feature_Servicing_Bugfix_55181377__private_IsEnabledFallback @ 0x140560B68 (Feature_Servicing_Bugfix_55181377__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_Bugfix_55181377__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_Bugfix_55181377__private_featureState & 0x10) != 0 )
    return Feature_Servicing_Bugfix_55181377__private_featureState & 1;
  else
    return Feature_Servicing_Bugfix_55181377__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_Bugfix_55181377__private_featureState,
             3LL);
}
