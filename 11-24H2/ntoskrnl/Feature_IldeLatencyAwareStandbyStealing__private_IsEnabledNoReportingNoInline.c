/*
 * XREFs of Feature_IldeLatencyAwareStandbyStealing__private_IsEnabledNoReportingNoInline @ 0x1405B4F78
 * Callers:
 *     KiInitializeVelocity @ 0x140C2866C (KiInitializeVelocity.c)
 * Callees:
 *     Feature_IldeLatencyAwareStandbyStealing__private_IsEnabledFallback @ 0x1405B4F5C (Feature_IldeLatencyAwareStandbyStealing__private_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_IldeLatencyAwareStandbyStealing__private_IsEnabledNoReportingNoInline(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  if ( (Feature_IldeLatencyAwareStandbyStealing__private_featureState & 2) != 0 )
    return Feature_IldeLatencyAwareStandbyStealing__private_featureState & 1;
  else
    return Feature_IldeLatencyAwareStandbyStealing__private_IsEnabledFallback(
             (unsigned int)Feature_IldeLatencyAwareStandbyStealing__private_featureState,
             0,
             a3,
             a4);
}
