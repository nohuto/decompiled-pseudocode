/*
 * XREFs of ZwAlertThreadByThreadIdEx @ 0x180160E80
 * Callers:
 *     RtlReleaseSRWLockShared @ 0x18003CC80 (RtlReleaseSRWLockShared.c)
 *     TppBarrierAdjust @ 0x18003E750 (TppBarrierAdjust.c)
 *     LdrpCallTlsInitializers @ 0x18003F930 (LdrpCallTlsInitializers.c)
 *     RtlpWakeByAddress @ 0x180041860 (RtlpWakeByAddress.c)
 *     RtlpxLookupFunctionTable @ 0x1800430E0 (RtlpxLookupFunctionTable.c)
 *     LdrpFindLoadedDllByName @ 0x180044B80 (LdrpFindLoadedDllByName.c)
 *     LdrpIncrementModuleLoadCount @ 0x180046500 (LdrpIncrementModuleLoadCount.c)
 *     TppWorkerFindTask @ 0x18004FB00 (TppWorkerFindTask.c)
 *     LdrSetDllDirectory @ 0x180052B00 (LdrSetDllDirectory.c)
 *     RtlSleepConditionVariableSRW @ 0x18005FA90 (RtlSleepConditionVariableSRW.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x180060050 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlpQueueWaitBlockToSRWLock @ 0x180060800 (RtlpQueueWaitBlockToSRWLock.c)
 *     RtlpHpSegPageRangeShrink @ 0x18006A080 (RtlpHpSegPageRangeShrink.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     RtlpWakeSRWLock @ 0x1800D84B0 (RtlpWakeSRWLock.c)
 *     RtlpOptimizeSRWLockList @ 0x1800E3BEC (RtlpOptimizeSRWLockList.c)
 * Callees:
 *     <none>
 */

__int64 ZwAlertThreadByThreadIdEx()
{
  __int64 result; // rax

  result = 114LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
