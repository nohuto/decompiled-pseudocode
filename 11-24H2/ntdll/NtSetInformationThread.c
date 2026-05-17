/*
 * XREFs of NtSetInformationThread @ 0x180161E30
 * Callers:
 *     RtlReleaseSRWLockShared @ 0x180010280 (RtlReleaseSRWLockShared.c)
 *     TppBarrierAdjust @ 0x180011D50 (TppBarrierAdjust.c)
 *     LdrpCallTlsInitializers @ 0x180012F30 (LdrpCallTlsInitializers.c)
 *     LdrpAddUnicodeStringToSnapsBuffer @ 0x1800144D0 (LdrpAddUnicodeStringToSnapsBuffer.c)
 *     RtlEnterCriticalSection @ 0x1800148F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     RtlpxLookupFunctionTable @ 0x1800166E0 (RtlpxLookupFunctionTable.c)
 *     LdrpFindLoadedDllByName @ 0x180018180 (LdrpFindLoadedDllByName.c)
 *     RtlpAbFreeKernelEntry @ 0x180019D70 (RtlpAbFreeKernelEntry.c)
 *     TppCleanupGroupMemberCallbackProlog @ 0x18001F970 (TppCleanupGroupMemberCallbackProlog.c)
 *     RtlpTpWaitCallback @ 0x180020530 (RtlpTpWaitCallback.c)
 *     LdrpThreadTokenSetImpersonationToken @ 0x18002225C (LdrpThreadTokenSetImpersonationToken.c)
 *     TppWorkCallbackPrologRelease @ 0x1800222C0 (TppWorkCallbackPrologRelease.c)
 *     TppWorkerFindTask @ 0x180023100 (TppWorkerFindTask.c)
 *     TppWorkerThread @ 0x1800238D0 (TppWorkerThread.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x180024E80 (TppCallbackCheckThreadAfterCallback.c)
 *     TppAlpcpExecuteCallback @ 0x1800258C0 (TppAlpcpExecuteCallback.c)
 *     RtlTryEnterCriticalSection @ 0x18002EEA0 (RtlTryEnterCriticalSection.c)
 *     RtlSleepConditionVariableSRW @ 0x180049EB0 (RtlSleepConditionVariableSRW.c)
 *     RtlpHpSegPageRangeShrink @ 0x1800544A0 (RtlpHpSegPageRangeShrink.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlDeleteTimer @ 0x18006AB60 (RtlDeleteTimer.c)
 *     RtlpTpRevertCapture @ 0x18006CFA0 (RtlpTpRevertCapture.c)
 *     RtlpTpTimerCallback @ 0x18006D350 (RtlpTpTimerCallback.c)
 *     RtlQueueWorkItem @ 0x18006D9E0 (RtlQueueWorkItem.c)
 *     RtlRegisterWait @ 0x18006DF00 (RtlRegisterWait.c)
 *     RtlDeregisterWaitEx @ 0x18006E2B0 (RtlDeregisterWaitEx.c)
 *     RtlpTpResumeImpersonation @ 0x18006E478 (RtlpTpResumeImpersonation.c)
 *     RtlpTpImpersonate @ 0x18006F310 (RtlpTpImpersonate.c)
 *     RtlpTpWorkCallback @ 0x18006F790 (RtlpTpWorkCallback.c)
 *     EtwpLogger @ 0x18008DC40 (EtwpLogger.c)
 *     RtlTlsFree @ 0x18008EFF0 (RtlTlsFree.c)
 *     RtlAbPostRelease @ 0x1800D3C50 (RtlAbPostRelease.c)
 *     TpWorkOnBehalfSetTicket @ 0x1800D9AD0 (TpWorkOnBehalfSetTicket.c)
 *     RtlSetThreadWorkOnBehalfTicket @ 0x1800DBB30 (RtlSetThreadWorkOnBehalfTicket.c)
 *     RtlClearThreadWorkOnBehalfTicket @ 0x1800E3B80 (RtlClearThreadWorkOnBehalfTicket.c)
 *     RtlAcquirePrivilege @ 0x1800E9050 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x1800E93A0 (RtlImpersonateSelfEx.c)
 *     TppCritSetThread @ 0x1800EEED0 (TppCritSetThread.c)
 *     LdrpAcquireSchedulerSharedDataSlot @ 0x1800F1124 (LdrpAcquireSchedulerSharedDataSlot.c)
 *     RtlReleasePrivilege @ 0x1800F7A00 (RtlReleasePrivilege.c)
 *     TppCritResetThread @ 0x1800F80A8 (TppCritResetThread.c)
 *     RtlSetThreadIsCritical @ 0x1801101B0 (RtlSetThreadIsCritical.c)
 *     RtlWow64SetThreadContext @ 0x180132390 (RtlWow64SetThreadContext.c)
 *     RtlDisableThreadProfiling @ 0x180132850 (RtlDisableThreadProfiling.c)
 *     RtlEnableThreadProfiling @ 0x1801328C0 (RtlEnableThreadProfiling.c)
 *     WerReportExceptionWorker @ 0x180134770 (WerReportExceptionWorker.c)
 * Callees:
 *     <none>
 */

__int64 NtSetInformationThread()
{
  __int64 result; // rax

  result = 13LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
