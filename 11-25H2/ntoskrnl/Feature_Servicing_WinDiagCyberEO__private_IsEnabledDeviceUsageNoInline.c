/*
 * XREFs of Feature_Servicing_WinDiagCyberEO__private_IsEnabledDeviceUsageNoInline @ 0x140644440
 * Callers:
 *     EtwpDequeueFreeBuffer @ 0x1403E4D34 (EtwpDequeueFreeBuffer.c)
 *     EtwpBufferingModeFlush @ 0x1408931C4 (EtwpBufferingModeFlush.c)
 * Callees:
 *     Feature_Servicing_WinDiagCyberEO__private_IsEnabledFallback @ 0x140644478 (Feature_Servicing_WinDiagCyberEO__private_IsEnabledFallback.c)
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
