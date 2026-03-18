/*
 * XREFs of Feature_Servicing_Kernel_ServerTimerDeadlineCancelFix__private_IsEnabledNoReportingNoInline @ 0x1405B50A0
 * Callers:
 *     KePrepareClockTimerForIdle @ 0x1405B52DC (KePrepareClockTimerForIdle.c)
 * Callees:
 *     Feature_Servicing_Kernel_ServerTimerDeadlineCancelFix__private_IsEnabledFallback @ 0x1405B5084 (Feature_Servicing_Kernel_ServerTimerDeadlineCancelFix__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_Kernel_ServerTimerDeadlineCancelFix__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_Servicing_Kernel_ServerTimerDeadlineCancelFix__private_featureState & 2) != 0 )
    return Feature_Servicing_Kernel_ServerTimerDeadlineCancelFix__private_featureState & 1;
  else
    return Feature_Servicing_Kernel_ServerTimerDeadlineCancelFix__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_Kernel_ServerTimerDeadlineCancelFix__private_featureState,
             0);
}
