/*
 * XREFs of Feature_Servicing_Alpc_LockOrdering__private_IsEnabledDeviceUsageNoInline @ 0x1405C9A5C
 * Callers:
 *     AlpcpCancelMessagesByRequestor @ 0x14088F9F0 (AlpcpCancelMessagesByRequestor.c)
 * Callees:
 *     Feature_Servicing_Alpc_LockOrdering__private_IsEnabledFallback @ 0x1405C9A94 (Feature_Servicing_Alpc_LockOrdering__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_Alpc_LockOrdering__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_Alpc_LockOrdering__private_featureState & 0x10) != 0 )
    return Feature_Servicing_Alpc_LockOrdering__private_featureState & 1;
  else
    return Feature_Servicing_Alpc_LockOrdering__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_Alpc_LockOrdering__private_featureState,
             3LL);
}
