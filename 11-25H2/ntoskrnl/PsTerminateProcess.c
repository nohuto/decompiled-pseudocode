/*
 * XREFs of PsTerminateProcess @ 0x14091F3D4
 * Callers:
 *     MiReAcquireCommitFailWorker @ 0x14065E730 (MiReAcquireCommitFailWorker.c)
 *     PspShutdownCsrProcess @ 0x1407635E4 (PspShutdownCsrProcess.c)
 *     PsShutdownSystem @ 0x140768C94 (PsShutdownSystem.c)
 *     PsCreateMinimalProcess @ 0x140769B14 (PsCreateMinimalProcess.c)
 *     RtlpTerminateCurrentProcess @ 0x140772C84 (RtlpTerminateCurrentProcess.c)
 *     WheaTerminateProcess @ 0x1407B7FB0 (WheaTerminateProcess.c)
 *     DbgkpCloseObject @ 0x1408E0060 (DbgkpCloseObject.c)
 *     PspRemoveProcessFromJobChain @ 0x1408E09E4 (PspRemoveProcessFromJobChain.c)
 *     KiSchedulerApcTerminate @ 0x1408F47B0 (KiSchedulerApcTerminate.c)
 *     PspCallProcessNotifyRoutines @ 0x14091F098 (PspCallProcessNotifyRoutines.c)
 *     NtCreateUserProcess @ 0x1409BC1D0 (NtCreateUserProcess.c)
 *     PspProcessClose @ 0x1409F2500 (PspProcessClose.c)
 *     MiForceCrashForInvalidAccess @ 0x140AB2078 (MiForceCrashForInvalidAccess.c)
 *     ExpDebuggerWorker @ 0x140B69F70 (ExpDebuggerWorker.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     PspTerminateProcess @ 0x14091D668 (PspTerminateProcess.c)
 */

__int64 __fastcall PsTerminateProcess(volatile signed __int32 *a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v3; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = PspTerminateProcess(a1, (struct _EX_RUNDOWN_REF *)CurrentThread, a2, 1u);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v3;
}
