/*
 * XREFs of ZwTerminateProcess @ 0x1801605D0
 * Callers:
 *     RtlpWaitOnCriticalSection @ 0x18002F5F0 (RtlpWaitOnCriticalSection.c)
 *     LdrpInitializeThread @ 0x18003F210 (LdrpInitializeThread.c)
 *     RtlpAcquireSRWLockSharedContended @ 0x180044840 (RtlpAcquireSRWLockSharedContended.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x180060050 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlUserThreadStart @ 0x1800AAD40 (RtlUserThreadStart.c)
 *     RtlExitUserProcess @ 0x1800AAE10 (RtlExitUserProcess.c)
 *     LdrpLoadShimEngine @ 0x1800AD9B0 (LdrpLoadShimEngine.c)
 *     LdrpInitializeShimDllDependencies @ 0x1800ADD0C (LdrpInitializeShimDllDependencies.c)
 *     _LdrpInitialize @ 0x1800AEAE4 (_LdrpInitialize.c)
 *     RtlAssert @ 0x1800ED1D0 (RtlAssert.c)
 *     WerpBreakIntoDebuggerIfPresent @ 0x18010B594 (WerpBreakIntoDebuggerIfPresent.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1801111B0 (LdrAppxHandleIntegrityFailure.c)
 *     RtlReportFatalFailure @ 0x18011215C (RtlReportFatalFailure.c)
 *     LdrpGenericExceptionFilter @ 0x180113530 (LdrpGenericExceptionFilter.c)
 *     __raise_securityfailure @ 0x18011EAB8 (__raise_securityfailure.c)
 *     __report_gsfailure @ 0x18011EAE0 (__report_gsfailure.c)
 *     RtlpProcessReflectionStartup @ 0x1801316E0 (RtlpProcessReflectionStartup.c)
 *     UninitUser32Proc @ 0x180132490 (UninitUser32Proc.c)
 *     RtlReportExceptionEx @ 0x180132500 (RtlReportExceptionEx.c)
 *     TppTerminateProcess @ 0x18015ABA0 (TppTerminateProcess.c)
 *     LdrpFatalExceptionFilter @ 0x18015C750 (LdrpFatalExceptionFilter.c)
 *     LdrpCompleteProcessCloning @ 0x18015EF08 (LdrpCompleteProcessCloning.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwTerminateProcess(HANDLE ProcessHandle, NTSTATUS ExitStatus)
{
  NTSTATUS result; // eax

  result = 44;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
