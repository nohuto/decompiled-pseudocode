/*
 * XREFs of Feature_Servicing_IOCompletionPortFix__private_IsEnabledDeviceUsageNoInline @ 0x1405925D4
 * Callers:
 *     IopCompleteRequest @ 0x14029FD20 (IopCompleteRequest.c)
 * Callees:
 *     Feature_Servicing_IOCompletionPortFix__private_IsEnabledFallback @ 0x14059260C (Feature_Servicing_IOCompletionPortFix__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_IOCompletionPortFix__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_IOCompletionPortFix__private_featureState & 0x10) != 0 )
    return Feature_Servicing_IOCompletionPortFix__private_featureState & 1;
  else
    return Feature_Servicing_IOCompletionPortFix__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_IOCompletionPortFix__private_featureState,
             3LL);
}
