/*
 * XREFs of Feature_MinifloatTolerableDelayEncoding__private_IsEnabledNoReportingNoInline @ 0x1405C1FC4
 * Callers:
 *     KeSetCoalescableTimer @ 0x1402BE6B0 (KeSetCoalescableTimer.c)
 *     KiDecodeTolerableDelayValue @ 0x14046BE58 (KiDecodeTolerableDelayValue.c)
 * Callees:
 *     Feature_MinifloatTolerableDelayEncoding__private_IsEnabledFallback @ 0x1405C1FA8 (Feature_MinifloatTolerableDelayEncoding__private_IsEnabledFallback.c)
 */

__int64 Feature_MinifloatTolerableDelayEncoding__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_MinifloatTolerableDelayEncoding__private_featureState & 2) != 0 )
    return Feature_MinifloatTolerableDelayEncoding__private_featureState & 1;
  else
    return Feature_MinifloatTolerableDelayEncoding__private_IsEnabledFallback(
             (unsigned int)Feature_MinifloatTolerableDelayEncoding__private_featureState,
             0);
}
