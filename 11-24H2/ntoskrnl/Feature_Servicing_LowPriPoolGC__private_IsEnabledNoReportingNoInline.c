/*
 * XREFs of Feature_Servicing_LowPriPoolGC__private_IsEnabledNoReportingNoInline @ 0x140658BB0
 * Callers:
 *     ExpHpGCTimerCallback @ 0x1403AE280 (ExpHpGCTimerCallback.c)
 * Callees:
 *     Feature_Servicing_LowPriPoolGC__private_IsEnabledFallback @ 0x140658B94 (Feature_Servicing_LowPriPoolGC__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_LowPriPoolGC__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_Servicing_LowPriPoolGC__private_featureState & 2) != 0 )
    return Feature_Servicing_LowPriPoolGC__private_featureState & 1;
  else
    return Feature_Servicing_LowPriPoolGC__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_LowPriPoolGC__private_featureState,
             0);
}
