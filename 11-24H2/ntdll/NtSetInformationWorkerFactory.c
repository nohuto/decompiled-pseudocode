/*
 * XREFs of NtSetInformationWorkerFactory @ 0x1801652A0
 * Callers:
 *     TppCleanupGroupMemberCallbackProlog @ 0x18001F970 (TppCleanupGroupMemberCallbackProlog.c)
 *     TpCallbackMayRunLong @ 0x180022040 (TpCallbackMayRunLong.c)
 *     TppWorkerThread @ 0x1800238D0 (TppWorkerThread.c)
 *     TppCallbackEpilog @ 0x1800248E0 (TppCallbackEpilog.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x1800252B4 (TppAdjustRunningThreadGoalWithLock.c)
 *     TpSetPoolMaxThreadsSoftLimit @ 0x18006A510 (TpSetPoolMaxThreadsSoftLimit.c)
 *     TpAllocTimer @ 0x18006CE10 (TpAllocTimer.c)
 *     TpAllocWait @ 0x18006E7E0 (TpAllocWait.c)
 *     TpAllocPoolInternal @ 0x1800AB494 (TpAllocPoolInternal.c)
 *     TpSetPoolThreadCpuSets @ 0x1800ABCC0 (TpSetPoolThreadCpuSets.c)
 *     TpSetPoolMaxThreads @ 0x1800ABE00 (TpSetPoolMaxThreads.c)
 *     TpSetPoolWorkerThreadIdleTimeout @ 0x1800ABE90 (TpSetPoolWorkerThreadIdleTimeout.c)
 *     TpAdjustBindingCount @ 0x1800BF960 (TpAdjustBindingCount.c)
 *     TpCallbackIndependent @ 0x1800DAD50 (TpCallbackIndependent.c)
 *     TppDestroyTimer @ 0x1800EA74C (TppDestroyTimer.c)
 *     TpSetPoolStackInformation @ 0x1800EE120 (TpSetPoolStackInformation.c)
 *     TpTrimPools @ 0x1800F57E0 (TpTrimPools.c)
 *     TpSetPoolMinThreads @ 0x180107080 (TpSetPoolMinThreads.c)
 *     TpSetPoolThreadBasePriority @ 0x18010CCD0 (TpSetPoolThreadBasePriority.c)
 * Callees:
 *     <none>
 */

__int64 NtSetInformationWorkerFactory()
{
  __int64 result; // rax

  result = 433LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
