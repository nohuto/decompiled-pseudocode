/*
 * XREFs of ZwTerminateProcess @ 0x180162210
 * Callers:
 *     WerpBreakIntoDebuggerIfPresent @ 0x180001534 (WerpBreakIntoDebuggerIfPresent.c)
 *     RtlUserThreadStart @ 0x180004250 (RtlUserThreadStart.c)
 *     RtlExitUserProcess @ 0x180004320 (RtlExitUserProcess.c)
 *     LdrpInitializeThread @ 0x180012810 (LdrpInitializeThread.c)
 *     RtlpAcquireSRWLockSharedContended @ 0x180017E40 (RtlpAcquireSRWLockSharedContended.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18004A470 (RtlpAcquireSRWLockExclusiveContended.c)
 *     LdrpLoadShimEngine @ 0x180065AE0 (LdrpLoadShimEngine.c)
 *     LdrpInitializeShimDllDependencies @ 0x180065E3C (LdrpInitializeShimDllDependencies.c)
 *     _LdrpInitialize @ 0x180066904 (_LdrpInitialize.c)
 *     RtlpWaitOnCriticalSection @ 0x18009A7A0 (RtlpWaitOnCriticalSection.c)
 *     RtlAssert @ 0x1800F28E0 (RtlAssert.c)
 *     LdrAppxHandleIntegrityFailure @ 0x180115D20 (LdrAppxHandleIntegrityFailure.c)
 *     RtlReportFatalFailure @ 0x18011716C (RtlReportFatalFailure.c)
 *     LdrpGenericExceptionFilter @ 0x1801185C0 (LdrpGenericExceptionFilter.c)
 *     __raise_securityfailure @ 0x180120888 (__raise_securityfailure.c)
 *     __report_gsfailure @ 0x1801208B0 (__report_gsfailure.c)
 *     RtlpProcessReflectionStartup @ 0x1801334B0 (RtlpProcessReflectionStartup.c)
 *     UninitUser32Proc @ 0x180134260 (UninitUser32Proc.c)
 *     RtlReportExceptionEx @ 0x1801342D0 (RtlReportExceptionEx.c)
 *     TppTerminateProcess @ 0x18015C7E0 (TppTerminateProcess.c)
 *     LdrpFatalExceptionFilter @ 0x18015E390 (LdrpFatalExceptionFilter.c)
 *     LdrpCompleteProcessCloning @ 0x180160B48 (LdrpCompleteProcessCloning.c)
 * Callees:
 *     <none>
 */

__int64 ZwTerminateProcess()
{
  __int64 result; // rax

  result = 44LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
