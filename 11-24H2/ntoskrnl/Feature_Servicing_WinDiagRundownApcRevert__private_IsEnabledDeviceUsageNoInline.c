/*
 * XREFs of Feature_Servicing_WinDiagRundownApcRevert__private_IsEnabledDeviceUsageNoInline @ 0x140650BC8
 * Callers:
 *     EtwpTraceThreadRundownWithStack @ 0x140650A6C (EtwpTraceThreadRundownWithStack.c)
 * Callees:
 *     Feature_Servicing_WinDiagRundownApcRevert__private_IsEnabledFallback @ 0x140650C00 (Feature_Servicing_WinDiagRundownApcRevert__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_WinDiagRundownApcRevert__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_WinDiagRundownApcRevert__private_featureState & 0x10) != 0 )
    return Feature_Servicing_WinDiagRundownApcRevert__private_featureState & 1;
  else
    return Feature_Servicing_WinDiagRundownApcRevert__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_WinDiagRundownApcRevert__private_featureState,
             3LL);
}
