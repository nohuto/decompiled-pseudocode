/*
 * XREFs of PsTerminateProcess @ 0x1408F32A4
 * Callers:
 *     MiReAcquireCommitFailWorker @ 0x14066B420 (MiReAcquireCommitFailWorker.c)
 *     PspShutdownCsrProcess @ 0x1407731D4 (PspShutdownCsrProcess.c)
 *     PsShutdownSystem @ 0x140778A44 (PsShutdownSystem.c)
 *     PsCreateMinimalProcess @ 0x1407798C4 (PsCreateMinimalProcess.c)
 *     RtlpTerminateCurrentProcess @ 0x140781E5C (RtlpTerminateCurrentProcess.c)
 *     WheaTerminateProcess @ 0x1407C7C20 (WheaTerminateProcess.c)
 *     DbgkpCloseObject @ 0x140860C60 (DbgkpCloseObject.c)
 *     PspCallProcessNotifyRoutines @ 0x1408F2F68 (PspCallProcessNotifyRoutines.c)
 *     KiSchedulerApcTerminate @ 0x1408FDDD0 (KiSchedulerApcTerminate.c)
 *     PspRemoveProcessFromJobChain @ 0x1408FF2D8 (PspRemoveProcessFromJobChain.c)
 *     PspProcessClose @ 0x1409E5850 (PspProcessClose.c)
 *     MiForceCrashForInvalidAccess @ 0x140AB11E8 (MiForceCrashForInvalidAccess.c)
 *     NtCreateUserProcess @ 0x140AC9930 (NtCreateUserProcess.c)
 *     ExpDebuggerWorker @ 0x140B7BF70 (ExpDebuggerWorker.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     PspTerminateProcess @ 0x1408F4E40 (PspTerminateProcess.c)
 */

__int64 __fastcall PsTerminateProcess(void *a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v2; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v2 = PspTerminateProcess(a1);
  KeLeaveCriticalRegionThread();
  return v2;
}
