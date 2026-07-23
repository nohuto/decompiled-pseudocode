/*
 * XREFs of PspSendJobNotification @ 0x14048E6FC
 * Callers:
 *     PspCompleteServerSiloShutdownDeferred @ 0x140772820 (PspCompleteServerSiloShutdownDeferred.c)
 *     PsReportProcessMemoryLimitViolation @ 0x140777500 (PsReportProcessMemoryLimitViolation.c)
 *     PspSendProcessNotificationToJobChain @ 0x14085BFB0 (PspSendProcessNotificationToJobChain.c)
 *     PspEnforceLimitsJobPostCallback @ 0x14085E4B0 (PspEnforceLimitsJobPostCallback.c)
 *     PspValidateJobAssignmentProcessLimits @ 0x1408D8210 (PspValidateJobAssignmentProcessLimits.c)
 *     PspIncrementJobChainProcessCounts @ 0x1408D851C (PspIncrementJobChainProcessCounts.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x1408D8CB0 (PspChangeJobMemoryUsageByProcess.c)
 *     PspRemoveProcessFromJobChain @ 0x1408FF2D8 (PspRemoveProcessFromJobChain.c)
 *     PspAssociateCompletionPortCallback @ 0x140A65B50 (PspAssociateCompletionPortCallback.c)
 * Callees:
 *     IoSetIoCompletion @ 0x1409E8CE0 (IoSetIoCompletion.c)
 */

__int64 __fastcall PspSendJobNotification(__int64 a1, __int64 a2, int a3, char a4)
{
  __int64 result; // rax

  result = IoSetIoCompletion(*(_QWORD *)(a1 + 552), *(_QWORD *)(a1 + 560), a3, 0, a2, a4);
  if ( (int)result >= 0 )
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 568));
  return result;
}
