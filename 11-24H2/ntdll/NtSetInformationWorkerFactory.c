/*
 * XREFs of NtSetInformationWorkerFactory @ 0x180163660
 * Callers:
 *     TppCleanupGroupMemberCallbackProlog @ 0x18004C370 (TppCleanupGroupMemberCallbackProlog.c)
 *     TpCallbackMayRunLong @ 0x18004EA40 (TpCallbackMayRunLong.c)
 *     TppWorkerThread @ 0x1800502D0 (TppWorkerThread.c)
 *     TppCallbackEpilog @ 0x1800512E0 (TppCallbackEpilog.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x180051CB4 (TppAdjustRunningThreadGoalWithLock.c)
 *     TpTrimPools @ 0x18005E2D0 (TpTrimPools.c)
 *     TpAllocPoolInternal @ 0x180085914 (TpAllocPoolInternal.c)
 *     TpSetPoolThreadCpuSets @ 0x180086140 (TpSetPoolThreadCpuSets.c)
 *     TpSetPoolMaxThreads @ 0x180086280 (TpSetPoolMaxThreads.c)
 *     TpSetPoolWorkerThreadIdleTimeout @ 0x180086310 (TpSetPoolWorkerThreadIdleTimeout.c)
 *     TpSetPoolMaxThreadsSoftLimit @ 0x180086C00 (TpSetPoolMaxThreadsSoftLimit.c)
 *     TpAllocTimer @ 0x1800896F0 (TpAllocTimer.c)
 *     TpAllocWait @ 0x18008B0C0 (TpAllocWait.c)
 *     TpAdjustBindingCount @ 0x1800B7720 (TpAdjustBindingCount.c)
 *     TpCallbackIndependent @ 0x1800D52B0 (TpCallbackIndependent.c)
 *     TppDestroyTimer @ 0x1800E5FBC (TppDestroyTimer.c)
 *     TpSetPoolStackInformation @ 0x1800E9300 (TpSetPoolStackInformation.c)
 *     TpSetPoolMinThreads @ 0x180101FB0 (TpSetPoolMinThreads.c)
 *     TpSetPoolThreadBasePriority @ 0x180107A10 (TpSetPoolThreadBasePriority.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtSetInformationWorkerFactory(
        HANDLE WorkerFactoryHandle,
        WORKERFACTORYINFOCLASS WorkerFactoryInformationClass,
        PVOID WorkerFactoryInformation,
        ULONG WorkerFactoryInformationLength)
{
  NTSTATUS result; // eax

  result = 433;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
