/*
 * XREFs of NtSetInformationThread @ 0x1801601F0
 * Callers:
 *     RtlTlsFree @ 0x1800269C0 (RtlTlsFree.c)
 *     RtlReleaseSRWLockShared @ 0x18003CC80 (RtlReleaseSRWLockShared.c)
 *     TppBarrierAdjust @ 0x18003E750 (TppBarrierAdjust.c)
 *     LdrpCallTlsInitializers @ 0x18003F930 (LdrpCallTlsInitializers.c)
 *     LdrpAddUnicodeStringToSnapsBuffer @ 0x180040ED0 (LdrpAddUnicodeStringToSnapsBuffer.c)
 *     RtlEnterCriticalSection @ 0x1800412F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800413F0 (RtlLeaveCriticalSection.c)
 *     RtlpxLookupFunctionTable @ 0x1800430E0 (RtlpxLookupFunctionTable.c)
 *     LdrpFindLoadedDllByName @ 0x180044B80 (LdrpFindLoadedDllByName.c)
 *     RtlpAbFreeKernelEntry @ 0x180046770 (RtlpAbFreeKernelEntry.c)
 *     TppCleanupGroupMemberCallbackProlog @ 0x18004C370 (TppCleanupGroupMemberCallbackProlog.c)
 *     RtlpTpWaitCallback @ 0x18004CF30 (RtlpTpWaitCallback.c)
 *     LdrpThreadTokenSetImpersonationToken @ 0x18004EC5C (LdrpThreadTokenSetImpersonationToken.c)
 *     TppWorkCallbackPrologRelease @ 0x18004ECC0 (TppWorkCallbackPrologRelease.c)
 *     TppWorkerFindTask @ 0x18004FB00 (TppWorkerFindTask.c)
 *     TppWorkerThread @ 0x1800502D0 (TppWorkerThread.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x180051880 (TppCallbackCheckThreadAfterCallback.c)
 *     TppAlpcpExecuteCallback @ 0x1800522C0 (TppAlpcpExecuteCallback.c)
 *     RtlSleepConditionVariableSRW @ 0x18005FA90 (RtlSleepConditionVariableSRW.c)
 *     RtlpHpSegPageRangeShrink @ 0x18006A080 (RtlpHpSegPageRangeShrink.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     RtlDeleteTimer @ 0x180087440 (RtlDeleteTimer.c)
 *     RtlpTpRevertCapture @ 0x180089880 (RtlpTpRevertCapture.c)
 *     RtlpTpTimerCallback @ 0x180089C30 (RtlpTpTimerCallback.c)
 *     RtlQueueWorkItem @ 0x18008A2C0 (RtlQueueWorkItem.c)
 *     RtlRegisterWait @ 0x18008A7E0 (RtlRegisterWait.c)
 *     RtlDeregisterWaitEx @ 0x18008AB90 (RtlDeregisterWaitEx.c)
 *     RtlpTpResumeImpersonation @ 0x18008AD58 (RtlpTpResumeImpersonation.c)
 *     RtlpTpImpersonate @ 0x18008BBF0 (RtlpTpImpersonate.c)
 *     RtlpTpWorkCallback @ 0x18008C070 (RtlpTpWorkCallback.c)
 *     RtlTryEnterCriticalSection @ 0x1800A09E0 (RtlTryEnterCriticalSection.c)
 *     EtwpLogger @ 0x1800A9700 (EtwpLogger.c)
 *     RtlAbPostRelease @ 0x1800CEFC0 (RtlAbPostRelease.c)
 *     TpWorkOnBehalfSetTicket @ 0x1800D4E40 (TpWorkOnBehalfSetTicket.c)
 *     RtlSetThreadWorkOnBehalfTicket @ 0x1800D6C10 (RtlSetThreadWorkOnBehalfTicket.c)
 *     RtlClearThreadWorkOnBehalfTicket @ 0x1800DF150 (RtlClearThreadWorkOnBehalfTicket.c)
 *     RtlAcquirePrivilege @ 0x1800E4740 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x1800E4A90 (RtlImpersonateSelfEx.c)
 *     TppCritSetThread @ 0x1800EA0B0 (TppCritSetThread.c)
 *     LdrpAcquireSchedulerSharedDataSlot @ 0x1800EBDA4 (LdrpAcquireSchedulerSharedDataSlot.c)
 *     RtlReleasePrivilege @ 0x1800F2570 (RtlReleasePrivilege.c)
 *     TppCritResetThread @ 0x1800F2C18 (TppCritResetThread.c)
 *     RtlSetThreadIsCritical @ 0x18010B250 (RtlSetThreadIsCritical.c)
 *     RtlWow64SetThreadContext @ 0x1801305C0 (RtlWow64SetThreadContext.c)
 *     RtlDisableThreadProfiling @ 0x180130A80 (RtlDisableThreadProfiling.c)
 *     RtlEnableThreadProfiling @ 0x180130AF0 (RtlEnableThreadProfiling.c)
 *     WerReportExceptionWorker @ 0x1801329A0 (WerReportExceptionWorker.c)
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
