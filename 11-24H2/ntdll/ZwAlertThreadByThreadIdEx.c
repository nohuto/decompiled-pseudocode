/*
 * XREFs of ZwAlertThreadByThreadIdEx @ 0x180162AC0
 * Callers:
 *     RtlReleaseSRWLockShared @ 0x180010280 (RtlReleaseSRWLockShared.c)
 *     TppBarrierAdjust @ 0x180011D50 (TppBarrierAdjust.c)
 *     LdrpCallTlsInitializers @ 0x180012F30 (LdrpCallTlsInitializers.c)
 *     RtlpWakeByAddress @ 0x180014E60 (RtlpWakeByAddress.c)
 *     RtlpxLookupFunctionTable @ 0x1800166E0 (RtlpxLookupFunctionTable.c)
 *     LdrpFindLoadedDllByName @ 0x180018180 (LdrpFindLoadedDllByName.c)
 *     LdrpIncrementModuleLoadCount @ 0x180019B00 (LdrpIncrementModuleLoadCount.c)
 *     TppWorkerFindTask @ 0x180023100 (TppWorkerFindTask.c)
 *     LdrSetDllDirectory @ 0x180026100 (LdrSetDllDirectory.c)
 *     RtlSleepConditionVariableSRW @ 0x180049EB0 (RtlSleepConditionVariableSRW.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18004A470 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlpQueueWaitBlockToSRWLock @ 0x18004AC20 (RtlpQueueWaitBlockToSRWLock.c)
 *     RtlpHpSegPageRangeShrink @ 0x1800544A0 (RtlpHpSegPageRangeShrink.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpWakeSRWLock @ 0x1800DD340 (RtlpWakeSRWLock.c)
 *     RtlpOptimizeSRWLockList @ 0x1800E84FC (RtlpOptimizeSRWLockList.c)
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
