/*
 * XREFs of Feature_Servicing_Kernel_ServerTimerDeadlineCancelFix__private_IsEnabledNoReportingNoInline @ 0x1405B8ECC
 * Callers:
 *     KePrepareClockTimerForIdle @ 0x1405B911C (KePrepareClockTimerForIdle.c)
 * Callees:
 *     Feature_Servicing_Kernel_ServerTimerDeadlineCancelFix__private_IsEnabledFallback @ 0x1405B8EB0 (Feature_Servicing_Kernel_ServerTimerDeadlineCancelFix__private_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_Servicing_Kernel_ServerTimerDeadlineCancelFix__private_IsEnabledNoReportingNoInline(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  if ( (Feature_Servicing_Kernel_ServerTimerDeadlineCancelFix__private_featureState & 2) != 0 )
    return Feature_Servicing_Kernel_ServerTimerDeadlineCancelFix__private_featureState & 1;
  else
    return Feature_Servicing_Kernel_ServerTimerDeadlineCancelFix__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_Kernel_ServerTimerDeadlineCancelFix__private_featureState,
             0,
             a3,
             a4);
}
