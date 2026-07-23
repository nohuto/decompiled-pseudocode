/*
 * XREFs of ZwTerminateProcess @ 0x1801637A0
 * Callers:
 *     RtlpWaitOnCriticalSection @ 0x180005E10 (RtlpWaitOnCriticalSection.c)
 *     RtlUserThreadStart @ 0x180008D70 (RtlUserThreadStart.c)
 *     RtlExitUserProcess @ 0x180008E40 (RtlExitUserProcess.c)
 *     LdrpInitializeThread @ 0x180073EB0 (LdrpInitializeThread.c)
 *     RtlpAcquireSRWLockSharedContended @ 0x18007A040 (RtlpAcquireSRWLockSharedContended.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18009E150 (RtlpAcquireSRWLockExclusiveContended.c)
 *     WerpBreakIntoDebuggerIfPresent @ 0x1800CF0F4 (WerpBreakIntoDebuggerIfPresent.c)
 *     LdrpLoadShimEngine @ 0x1800D1760 (LdrpLoadShimEngine.c)
 *     LdrpInitializeShimDllDependencies @ 0x1800D1ABC (LdrpInitializeShimDllDependencies.c)
 *     _LdrpInitialize @ 0x1800D2584 (_LdrpInitialize.c)
 *     RtlAssert @ 0x1800F4450 (RtlAssert.c)
 *     LdrAppxHandleIntegrityFailure @ 0x180118F10 (LdrAppxHandleIntegrityFailure.c)
 *     RtlReportFatalFailure @ 0x18011A3AC (RtlReportFatalFailure.c)
 *     LdrpGenericExceptionFilter @ 0x18011B640 (LdrpGenericExceptionFilter.c)
 *     UninitUser32Proc @ 0x180122050 (UninitUser32Proc.c)
 *     __raise_securityfailure @ 0x180122368 (__raise_securityfailure.c)
 *     __report_gsfailure @ 0x180122390 (__report_gsfailure.c)
 *     RtlpProcessReflectionStartup @ 0x180134F90 (RtlpProcessReflectionStartup.c)
 *     RtlReportExceptionEx @ 0x180135B80 (RtlReportExceptionEx.c)
 *     TppTerminateProcess @ 0x18015DD40 (TppTerminateProcess.c)
 *     LdrpFatalExceptionFilter @ 0x18015F850 (LdrpFatalExceptionFilter.c)
 *     LdrpCompleteProcessCloning @ 0x1801620DC (LdrpCompleteProcessCloning.c)
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
