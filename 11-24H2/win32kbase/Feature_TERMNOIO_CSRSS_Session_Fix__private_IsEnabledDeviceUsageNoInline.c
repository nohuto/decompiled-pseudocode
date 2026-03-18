/*
 * XREFs of Feature_TERMNOIO_CSRSS_Session_Fix__private_IsEnabledDeviceUsageNoInline @ 0x1401A7B28
 * Callers:
 *     ?ClearDTEThread@tagTERMINAL@@QEAAXXZ @ 0x140162680 (-ClearDTEThread@tagTERMINAL@@QEAAXXZ.c)
 *     ?SetDTEThread@tagTERMINAL@@QEAAXXZ @ 0x1401626B0 (-SetDTEThread@tagTERMINAL@@QEAAXXZ.c)
 * Callees:
 *     Feature_TERMNOIO_CSRSS_Session_Fix__private_IsEnabledFallback @ 0x1401A7B60 (Feature_TERMNOIO_CSRSS_Session_Fix__private_IsEnabledFallback.c)
 */

__int64 Feature_TERMNOIO_CSRSS_Session_Fix__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_TERMNOIO_CSRSS_Session_Fix__private_featureState & 0x10) != 0 )
    return Feature_TERMNOIO_CSRSS_Session_Fix__private_featureState & 1;
  else
    return Feature_TERMNOIO_CSRSS_Session_Fix__private_IsEnabledFallback(
             (unsigned int)Feature_TERMNOIO_CSRSS_Session_Fix__private_featureState,
             3LL);
}
