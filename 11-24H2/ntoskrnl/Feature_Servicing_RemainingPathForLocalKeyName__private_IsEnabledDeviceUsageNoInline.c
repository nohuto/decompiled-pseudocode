/*
 * XREFs of Feature_Servicing_RemainingPathForLocalKeyName__private_IsEnabledDeviceUsageNoInline @ 0x140669F44
 * Callers:
 *     CmpDoReOpenTransKey @ 0x1407E74C4 (CmpDoReOpenTransKey.c)
 * Callees:
 *     Feature_Servicing_RemainingPathForLocalKeyName__private_IsEnabledFallback @ 0x140669F7C (Feature_Servicing_RemainingPathForLocalKeyName__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_RemainingPathForLocalKeyName__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_RemainingPathForLocalKeyName__private_featureState & 0x10) != 0 )
    return Feature_Servicing_RemainingPathForLocalKeyName__private_featureState & 1;
  else
    return Feature_Servicing_RemainingPathForLocalKeyName__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_RemainingPathForLocalKeyName__private_featureState,
             3LL);
}
