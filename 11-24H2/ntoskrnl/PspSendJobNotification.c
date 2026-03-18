/*
 * XREFs of PspSendJobNotification @ 0x140493C70
 * Callers:
 *     PspCompleteServerSiloShutdownDeferred @ 0x140772600 (PspCompleteServerSiloShutdownDeferred.c)
 *     PsReportProcessMemoryLimitViolation @ 0x1407772E0 (PsReportProcessMemoryLimitViolation.c)
 *     PspRemoveProcessFromJobChain @ 0x1408A9078 (PspRemoveProcessFromJobChain.c)
 *     PspValidateJobAssignmentProcessLimits @ 0x1408E79CC (PspValidateJobAssignmentProcessLimits.c)
 *     PspIncrementJobChainProcessCounts @ 0x1408E7CD8 (PspIncrementJobChainProcessCounts.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x1408E84D0 (PspChangeJobMemoryUsageByProcess.c)
 *     PspSendProcessNotificationToJobChain @ 0x1408EA780 (PspSendProcessNotificationToJobChain.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1408ECC80 (PspEnforceLimitsJobPostCallback.c)
 *     PspAssociateCompletionPortCallback @ 0x140A6C5F0 (PspAssociateCompletionPortCallback.c)
 * Callees:
 *     IoSetIoCompletion @ 0x1409F4980 (IoSetIoCompletion.c)
 */

__int64 __fastcall PspSendJobNotification(__int64 a1, __int64 a2, int a3, char a4)
{
  __int64 result; // rax

  result = IoSetIoCompletion(*(_QWORD *)(a1 + 552), *(_QWORD *)(a1 + 560), a3, 0, a2, a4);
  if ( (int)result >= 0 )
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 568));
  return result;
}
