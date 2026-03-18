/*
 * XREFs of Feature_Servicing_WinDiagCyberEO__private_IsEnabledDeviceUsageNoInline @ 0x140650450
 * Callers:
 *     EtwpDequeueFreeBuffer @ 0x1404EF438 (EtwpDequeueFreeBuffer.c)
 *     EtwpBufferingModeFlush @ 0x140832840 (EtwpBufferingModeFlush.c)
 * Callees:
 *     Feature_Servicing_WinDiagCyberEO__private_IsEnabledFallback @ 0x140650488 (Feature_Servicing_WinDiagCyberEO__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_WinDiagCyberEO__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_WinDiagCyberEO__private_featureState & 0x10) != 0 )
    return Feature_Servicing_WinDiagCyberEO__private_featureState & 1;
  else
    return Feature_Servicing_WinDiagCyberEO__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_WinDiagCyberEO__private_featureState,
             3LL);
}
