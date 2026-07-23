/*
 * XREFs of NtSetInformationWorkerFactory @ 0x180166830
 * Callers:
 *     TpAllocPoolInternal @ 0x18003A970 (TpAllocPoolInternal.c)
 *     TpSetPoolThreadCpuSets @ 0x18003B1A0 (TpSetPoolThreadCpuSets.c)
 *     TpAdjustBindingCount @ 0x18003B580 (TpAdjustBindingCount.c)
 *     TpAllocWait @ 0x18003CCE0 (TpAllocWait.c)
 *     TppCleanupGroupMemberCallbackProlog @ 0x180040C30 (TppCleanupGroupMemberCallbackProlog.c)
 *     TpCallbackMayRunLong @ 0x180043D00 (TpCallbackMayRunLong.c)
 *     TpAllocTimer @ 0x1800461E0 (TpAllocTimer.c)
 *     TppWorkerThread @ 0x18007DCB0 (TppWorkerThread.c)
 *     TppCallbackEpilog @ 0x18007ECC0 (TppCallbackEpilog.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x18007F694 (TppAdjustRunningThreadGoalWithLock.c)
 *     TpCallbackIndependent @ 0x1800D80E0 (TpCallbackIndependent.c)
 *     TppDestroyTimer @ 0x1800EBB9C (TppDestroyTimer.c)
 *     TpSetPoolStackInformation @ 0x1800F0F30 (TpSetPoolStackInformation.c)
 *     TpTrimPools @ 0x1800F7360 (TpTrimPools.c)
 *     TpSetPoolMaxThreads @ 0x1800FA0A0 (TpSetPoolMaxThreads.c)
 *     TpSetPoolMinThreads @ 0x180109990 (TpSetPoolMinThreads.c)
 *     TpSetPoolMaxThreadsSoftLimit @ 0x18010B540 (TpSetPoolMaxThreadsSoftLimit.c)
 *     TpSetPoolWorkerThreadIdleTimeout @ 0x18010C7B0 (TpSetPoolWorkerThreadIdleTimeout.c)
 *     TpSetPoolThreadBasePriority @ 0x18010ED20 (TpSetPoolThreadBasePriority.c)
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
