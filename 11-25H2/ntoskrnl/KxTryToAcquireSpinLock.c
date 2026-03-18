/*
 * XREFs of KxTryToAcquireSpinLock @ 0x140464068
 * Callers:
 *     KdPollBreakIn @ 0x1402743F0 (KdPollBreakIn.c)
 *     KiRcuReportQuiescentState @ 0x14027BF9C (KiRcuReportQuiescentState.c)
 *     EtwpTraceStackKey @ 0x1403F5C40 (EtwpTraceStackKey.c)
 *     EtwpCovSampTryAcquireBufferLock @ 0x140457A74 (EtwpCovSampTryAcquireBufferLock.c)
 *     KeTryToAcquireSpinLockAtDpcLevel @ 0x140464050 (KeTryToAcquireSpinLockAtDpcLevel.c)
 *     EtwpGetCrimsonStackKey @ 0x1404CCBE8 (EtwpGetCrimsonStackKey.c)
 *     KeFreezeExecution @ 0x1404D6470 (KeFreezeExecution.c)
 *     KiRcuFlushCompleted @ 0x1404F7CEC (KiRcuFlushCompleted.c)
 *     HalpHandleMachineCheck @ 0x14053CF78 (HalpHandleMachineCheck.c)
 *     HalpMceHandlerCore @ 0x14053DBE8 (HalpMceHandlerCore.c)
 *     IvtHandleInterrupt @ 0x14056B880 (IvtHandleInterrupt.c)
 *     KiProcessNMI @ 0x1405B37B0 (KiProcessNMI.c)
 *     KiSrcuFlushCompleted @ 0x1405BCE34 (KiSrcuFlushCompleted.c)
 *     KiSrcuReportQuiescent @ 0x1405BD788 (KiSrcuReportQuiescent.c)
 *     PopFxComponentRelationsCleanup @ 0x1405CC2CC (PopFxComponentRelationsCleanup.c)
 *     PopFxDeviceRelationsCleanup @ 0x1405CC710 (PopFxDeviceRelationsCleanup.c)
 *     DifKeTryToAcquireSpinLockAtDpcLevelWrapper @ 0x1406253C0 (DifKeTryToAcquireSpinLockAtDpcLevelWrapper.c)
 * Callees:
 *     KiTryToAcquireSpinLockInstrumented @ 0x1404640A8 (KiTryToAcquireSpinLockInstrumented.c)
 */

char __fastcall KxTryToAcquireSpinLock(volatile signed __int32 *a1)
{
  char v1; // dl

  v1 = 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 && !PopHibernateInProgress )
    return KiTryToAcquireSpinLockInstrumented(a1, 0LL);
  if ( !_interlockedbittestandset64(a1, 0LL) )
    return 1;
  _mm_pause();
  return v1;
}
