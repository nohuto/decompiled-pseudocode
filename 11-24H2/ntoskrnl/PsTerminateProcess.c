/*
 * XREFs of PsTerminateProcess @ 0x140938BD4
 * Callers:
 *     MiReAcquireCommitFailWorker @ 0x14066A250 (MiReAcquireCommitFailWorker.c)
 *     PspShutdownCsrProcess @ 0x140772FB4 (PspShutdownCsrProcess.c)
 *     PsShutdownSystem @ 0x140778944 (PsShutdownSystem.c)
 *     PsCreateMinimalProcess @ 0x1407797C4 (PsCreateMinimalProcess.c)
 *     RtlpTerminateCurrentProcess @ 0x140781F2C (RtlpTerminateCurrentProcess.c)
 *     WheaTerminateProcess @ 0x1407C7780 (WheaTerminateProcess.c)
 *     KiSchedulerApcTerminate @ 0x1408A7B70 (KiSchedulerApcTerminate.c)
 *     PspRemoveProcessFromJobChain @ 0x1408A9078 (PspRemoveProcessFromJobChain.c)
 *     DbgkpCloseObject @ 0x1408EF460 (DbgkpCloseObject.c)
 *     PspCallProcessNotifyRoutines @ 0x140938898 (PspCallProcessNotifyRoutines.c)
 *     PspProcessClose @ 0x1409EAF60 (PspProcessClose.c)
 *     MiForceCrashForInvalidAccess @ 0x140AB6F10 (MiForceCrashForInvalidAccess.c)
 *     NtCreateUserProcess @ 0x140ACBA80 (NtCreateUserProcess.c)
 *     ExpDebuggerWorker @ 0x140B79F70 (ExpDebuggerWorker.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     PspTerminateProcess @ 0x140939700 (PspTerminateProcess.c)
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
