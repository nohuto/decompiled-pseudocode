/*
 * XREFs of PspSendJobNotification @ 0x140495070
 * Callers:
 *     PspCompleteServerSiloShutdownDeferred @ 0x140762C40 (PspCompleteServerSiloShutdownDeferred.c)
 *     PsReportProcessMemoryLimitViolation @ 0x14076788C (PsReportProcessMemoryLimitViolation.c)
 *     PspValidateJobAssignmentProcessLimits @ 0x1408D8794 (PspValidateJobAssignmentProcessLimits.c)
 *     PspIncrementJobChainProcessCounts @ 0x1408D8AA0 (PspIncrementJobChainProcessCounts.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x1408D9260 (PspChangeJobMemoryUsageByProcess.c)
 *     PspSendProcessNotificationToJobChain @ 0x1408DB3B0 (PspSendProcessNotificationToJobChain.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1408DD910 (PspEnforceLimitsJobPostCallback.c)
 *     PspRemoveProcessFromJobChain @ 0x1408E09E4 (PspRemoveProcessFromJobChain.c)
 *     PspAssociateCompletionPortCallback @ 0x140A69FC0 (PspAssociateCompletionPortCallback.c)
 * Callees:
 *     IoSetIoCompletion @ 0x1409F4FE0 (IoSetIoCompletion.c)
 */

__int64 __fastcall PspSendJobNotification(__int64 a1, __int64 a2, int a3, char a4)
{
  __int64 result; // rax

  result = IoSetIoCompletion(*(_QWORD *)(a1 + 552), *(_QWORD *)(a1 + 560), a3, 0, a2, a4);
  if ( (int)result >= 0 )
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 568));
  return result;
}
