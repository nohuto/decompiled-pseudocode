/*
 * XREFs of ZwAlertThreadByThreadIdEx @ 0x180164050
 * Callers:
 *     RtlpHpSegPageRangeShrink @ 0x1800100E0 (RtlpHpSegPageRangeShrink.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     TppBarrierAdjust @ 0x180041550 (TppBarrierAdjust.c)
 *     LdrpIncrementModuleLoadCount @ 0x180047B20 (LdrpIncrementModuleLoadCount.c)
 *     RtlReleaseSRWLockShared @ 0x18004F120 (RtlReleaseSRWLockShared.c)
 *     LdrpCallTlsInitializers @ 0x180074330 (LdrpCallTlsInitializers.c)
 *     RtlpxLookupFunctionTable @ 0x1800787D0 (RtlpxLookupFunctionTable.c)
 *     LdrpFindLoadedDllByName @ 0x18007A380 (LdrpFindLoadedDllByName.c)
 *     RtlpWakeByAddress @ 0x18007C470 (RtlpWakeByAddress.c)
 *     TppWorkerFindTask @ 0x18007D4E0 (TppWorkerFindTask.c)
 *     LdrSetDllDirectory @ 0x1800804E0 (LdrSetDllDirectory.c)
 *     RtlSleepConditionVariableSRW @ 0x18009DB90 (RtlSleepConditionVariableSRW.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18009E150 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlpQueueWaitBlockToSRWLock @ 0x18009E900 (RtlpQueueWaitBlockToSRWLock.c)
 *     RtlpWakeSRWLock @ 0x1800DC1A0 (RtlpWakeSRWLock.c)
 *     RtlpOptimizeSRWLockList @ 0x1800E9ECC (RtlpOptimizeSRWLockList.c)
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
