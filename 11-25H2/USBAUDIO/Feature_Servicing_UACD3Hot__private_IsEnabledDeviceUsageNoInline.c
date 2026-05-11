/*
 * XREFs of Feature_Servicing_UACD3Hot__private_IsEnabledDeviceUsageNoInline @ 0x14000DB94
 * Callers:
 *     USBCntrlRestoreBoolean @ 0x140042CB0 (USBCntrlRestoreBoolean.c)
 * Callees:
 *     Feature_Servicing_UACD3Hot__private_IsEnabledFallback @ 0x14000DBCC (Feature_Servicing_UACD3Hot__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_UACD3Hot__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_UACD3Hot__private_featureState & 0x10) != 0 )
    return Feature_Servicing_UACD3Hot__private_featureState & 1;
  else
    return Feature_Servicing_UACD3Hot__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_UACD3Hot__private_featureState,
             3LL);
}
