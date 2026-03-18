/*
 * XREFs of Feature_Servicing_IntgrSched_Sleep_Enlightenment__private_IsEnabledNoReportingNoInline @ 0x1405448DC
 * Callers:
 *     HalpShutdown @ 0x140544D7C (HalpShutdown.c)
 * Callees:
 *     Feature_Servicing_IntgrSched_Sleep_Enlightenment__private_IsEnabledFallback @ 0x1405448C0 (Feature_Servicing_IntgrSched_Sleep_Enlightenment__private_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_Servicing_IntgrSched_Sleep_Enlightenment__private_IsEnabledNoReportingNoInline(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  if ( (Feature_Servicing_IntgrSched_Sleep_Enlightenment__private_featureState & 2) != 0 )
    return Feature_Servicing_IntgrSched_Sleep_Enlightenment__private_featureState & 1;
  else
    return Feature_Servicing_IntgrSched_Sleep_Enlightenment__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_IntgrSched_Sleep_Enlightenment__private_featureState,
             0,
             a3,
             a4);
}
