/*
 * XREFs of Feature_RebaseTimersAfterTimeAdjustments__private_IsEnabledNoReportingNoInline @ 0x1405C2018
 * Callers:
 *     KiComputeDueTime @ 0x140316E40 (KiComputeDueTime.c)
 *     KiTimerWaitTest @ 0x140317320 (KiTimerWaitTest.c)
 *     KiAdjustTimerDueTimes @ 0x1404E0430 (KiAdjustTimerDueTimes.c)
 * Callees:
 *     Feature_RebaseTimersAfterTimeAdjustments__private_IsEnabledFallback @ 0x1405C1FFC (Feature_RebaseTimersAfterTimeAdjustments__private_IsEnabledFallback.c)
 */

__int64 Feature_RebaseTimersAfterTimeAdjustments__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_RebaseTimersAfterTimeAdjustments__private_featureState & 2) != 0 )
    return Feature_RebaseTimersAfterTimeAdjustments__private_featureState & 1;
  else
    return Feature_RebaseTimersAfterTimeAdjustments__private_IsEnabledFallback(
             (unsigned int)Feature_RebaseTimersAfterTimeAdjustments__private_featureState,
             0);
}
