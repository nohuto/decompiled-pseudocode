/*
 * XREFs of NtSetInformationThread @ 0x1801633C0
 * Callers:
 *     RtlpHpSegPageRangeShrink @ 0x1800100E0 (RtlpHpSegPageRangeShrink.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlDeleteTimer @ 0x18003B680 (RtlDeleteTimer.c)
 *     RtlpTpRevertCapture @ 0x18003B900 (RtlpTpRevertCapture.c)
 *     RtlQueueWorkItem @ 0x18003BEE0 (RtlQueueWorkItem.c)
 *     RtlRegisterWait @ 0x18003C400 (RtlRegisterWait.c)
 *     RtlDeregisterWaitEx @ 0x18003C7B0 (RtlDeregisterWaitEx.c)
 *     RtlpTpResumeImpersonation @ 0x18003C978 (RtlpTpResumeImpersonation.c)
 *     RtlpTpWorkCallback @ 0x18003D6C0 (RtlpTpWorkCallback.c)
 *     RtlpTpImpersonate @ 0x18003DE10 (RtlpTpImpersonate.c)
 *     RtlpTpTimerCallback @ 0x18003E090 (RtlpTpTimerCallback.c)
 *     TppCleanupGroupMemberCallbackProlog @ 0x180040C30 (TppCleanupGroupMemberCallbackProlog.c)
 *     TppBarrierAdjust @ 0x180041550 (TppBarrierAdjust.c)
 *     RtlpTpWaitCallback @ 0x180041F40 (RtlpTpWaitCallback.c)
 *     TppWorkCallbackPrologRelease @ 0x180043350 (TppWorkCallbackPrologRelease.c)
 *     RtlpAbFreeKernelEntry @ 0x180047D90 (RtlpAbFreeKernelEntry.c)
 *     RtlReleaseSRWLockShared @ 0x18004F120 (RtlReleaseSRWLockShared.c)
 *     RtlTryEnterCriticalSection @ 0x180057970 (RtlTryEnterCriticalSection.c)
 *     LdrpThreadTokenSetImpersonationToken @ 0x18006FA38 (LdrpThreadTokenSetImpersonationToken.c)
 *     LdrpCallTlsInitializers @ 0x180074330 (LdrpCallTlsInitializers.c)
 *     RtlpxLookupFunctionTable @ 0x1800787D0 (RtlpxLookupFunctionTable.c)
 *     LdrpFindLoadedDllByName @ 0x18007A380 (LdrpFindLoadedDllByName.c)
 *     LdrpAddUnicodeStringToSnapsBuffer @ 0x18007BAE0 (LdrpAddUnicodeStringToSnapsBuffer.c)
 *     RtlEnterCriticalSection @ 0x18007BF00 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 *     TppWorkerFindTask @ 0x18007D4E0 (TppWorkerFindTask.c)
 *     TppWorkerThread @ 0x18007DCB0 (TppWorkerThread.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x18007F260 (TppCallbackCheckThreadAfterCallback.c)
 *     TppAlpcpExecuteCallback @ 0x18007FCA0 (TppAlpcpExecuteCallback.c)
 *     RtlSleepConditionVariableSRW @ 0x18009DB90 (RtlSleepConditionVariableSRW.c)
 *     RtlAbPostRelease @ 0x1800A0360 (RtlAbPostRelease.c)
 *     EtwpLogger @ 0x1800B6AE0 (EtwpLogger.c)
 *     RtlTlsFree @ 0x1800B8370 (RtlTlsFree.c)
 *     TpWorkOnBehalfSetTicket @ 0x1800D7B80 (TpWorkOnBehalfSetTicket.c)
 *     RtlSetThreadWorkOnBehalfTicket @ 0x1800DB230 (RtlSetThreadWorkOnBehalfTicket.c)
 *     RtlClearThreadWorkOnBehalfTicket @ 0x1800E0830 (RtlClearThreadWorkOnBehalfTicket.c)
 *     RtlAcquirePrivilege @ 0x1800EA3C0 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x1800EA710 (RtlImpersonateSelfEx.c)
 *     TppCritSetThread @ 0x1800F06E0 (TppCritSetThread.c)
 *     LdrpAcquireSchedulerSharedDataSlot @ 0x1800F2C94 (LdrpAcquireSchedulerSharedDataSlot.c)
 *     RtlReleasePrivilege @ 0x1800F9660 (RtlReleasePrivilege.c)
 *     TppCritResetThread @ 0x1800F9C38 (TppCritResetThread.c)
 *     RtlSetThreadIsCritical @ 0x180112F20 (RtlSetThreadIsCritical.c)
 *     RtlWow64SetThreadContext @ 0x180133E70 (RtlWow64SetThreadContext.c)
 *     RtlDisableThreadProfiling @ 0x180134330 (RtlDisableThreadProfiling.c)
 *     RtlEnableThreadProfiling @ 0x1801343A0 (RtlEnableThreadProfiling.c)
 *     WerReportExceptionWorker @ 0x180136020 (WerReportExceptionWorker.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtSetInformationThread(
        HANDLE ThreadHandle,
        THREADINFOCLASS ThreadInformationClass,
        PVOID ThreadInformation,
        ULONG ThreadInformationLength)
{
  NTSTATUS result; // eax

  result = 13;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
