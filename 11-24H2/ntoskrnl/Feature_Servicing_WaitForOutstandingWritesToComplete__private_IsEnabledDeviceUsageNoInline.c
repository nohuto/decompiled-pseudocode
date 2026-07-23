/*
 * XREFs of Feature_Servicing_WaitForOutstandingWritesToComplete__private_IsEnabledDeviceUsageNoInline @ 0x140666C04
 * Callers:
 *     CmpDoFileWrite @ 0x140A466A0 (CmpDoFileWrite.c)
 * Callees:
 *     Feature_Servicing_WaitForOutstandingWritesToComplete__private_IsEnabledFallback @ 0x140666C3C (Feature_Servicing_WaitForOutstandingWritesToComplete__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_WaitForOutstandingWritesToComplete__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_WaitForOutstandingWritesToComplete__private_featureState & 0x10) != 0 )
    return Feature_Servicing_WaitForOutstandingWritesToComplete__private_featureState & 1;
  else
    return Feature_Servicing_WaitForOutstandingWritesToComplete__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_WaitForOutstandingWritesToComplete__private_featureState,
             3LL);
}
