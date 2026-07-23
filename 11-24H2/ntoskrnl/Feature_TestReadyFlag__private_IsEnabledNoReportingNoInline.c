/*
 * XREFs of Feature_TestReadyFlag__private_IsEnabledNoReportingNoInline @ 0x140668C2C
 * Callers:
 *     CmFcDebugUpdateSystemInfo @ 0x140667398 (CmFcDebugUpdateSystemInfo.c)
 * Callees:
 *     Feature_TestReadyFlag__private_IsEnabledFallback @ 0x140668C10 (Feature_TestReadyFlag__private_IsEnabledFallback.c)
 */

__int64 Feature_TestReadyFlag__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_TestReadyFlag__private_featureState & 2) != 0 )
    return Feature_TestReadyFlag__private_featureState & 1;
  else
    return Feature_TestReadyFlag__private_IsEnabledFallback(
             (unsigned int)Feature_TestReadyFlag__private_featureState,
             0);
}
