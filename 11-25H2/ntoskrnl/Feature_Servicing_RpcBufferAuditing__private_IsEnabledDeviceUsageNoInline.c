/*
 * XREFs of Feature_Servicing_RpcBufferAuditing__private_IsEnabledDeviceUsageNoInline @ 0x14068BC40
 * Callers:
 *     AdtpWriteToEtw @ 0x140AD5F20 (AdtpWriteToEtw.c)
 * Callees:
 *     Feature_Servicing_RpcBufferAuditing__private_IsEnabledFallback @ 0x14068BC78 (Feature_Servicing_RpcBufferAuditing__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_RpcBufferAuditing__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_RpcBufferAuditing__private_featureState & 0x10) != 0 )
    return Feature_Servicing_RpcBufferAuditing__private_featureState & 1;
  else
    return Feature_Servicing_RpcBufferAuditing__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_RpcBufferAuditing__private_featureState,
             3LL);
}
