/*
 * XREFs of Feature_Servicing_LowPriPoolGC__private_IsEnabledNoReportingNoInline @ 0x14065A4E0
 * Callers:
 *     ExpHpGCTimerCallback @ 0x1403BF6C0 (ExpHpGCTimerCallback.c)
 * Callees:
 *     Feature_Servicing_LowPriPoolGC__private_IsEnabledFallback @ 0x14065A4C4 (Feature_Servicing_LowPriPoolGC__private_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_Servicing_LowPriPoolGC__private_IsEnabledNoReportingNoInline(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  if ( (Feature_Servicing_LowPriPoolGC__private_featureState & 2) != 0 )
    return Feature_Servicing_LowPriPoolGC__private_featureState & 1;
  else
    return Feature_Servicing_LowPriPoolGC__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_LowPriPoolGC__private_featureState,
             0,
             a3,
             a4);
}
