/*
 * XREFs of KxTryToAcquireSpinLock @ 0x1404633C8
 * Callers:
 *     KdPollBreakIn @ 0x14029CFB0 (KdPollBreakIn.c)
 *     KiRcuReportQuiescentState @ 0x14033D364 (KiRcuReportQuiescentState.c)
 *     KiRcuFlushCompleted @ 0x14033D510 (KiRcuFlushCompleted.c)
 *     EtwpTraceStackKey @ 0x1403EE6C0 (EtwpTraceStackKey.c)
 *     EtwpCovSampTryAcquireBufferLock @ 0x1404584E4 (EtwpCovSampTryAcquireBufferLock.c)
 *     KeTryToAcquireSpinLockAtDpcLevel @ 0x1404633B0 (KeTryToAcquireSpinLockAtDpcLevel.c)
 *     EtwpGetCrimsonStackKey @ 0x1404CC8C8 (EtwpGetCrimsonStackKey.c)
 *     KeFreezeExecution @ 0x1404D5B60 (KeFreezeExecution.c)
 *     HalpHandleMachineCheck @ 0x14053F7A8 (HalpHandleMachineCheck.c)
 *     HalpMceHandlerCore @ 0x140540418 (HalpMceHandlerCore.c)
 *     IvtHandleInterrupt @ 0x14056EB80 (IvtHandleInterrupt.c)
 *     KiProcessNMI @ 0x1405B7670 (KiProcessNMI.c)
 *     KiSrcuFlushCompleted @ 0x1405C0EA4 (KiSrcuFlushCompleted.c)
 *     KiSrcuReportQuiescent @ 0x1405C17F8 (KiSrcuReportQuiescent.c)
 *     PopFxComponentRelationsCleanup @ 0x1405D0A1C (PopFxComponentRelationsCleanup.c)
 *     PopFxDeviceRelationsCleanup @ 0x1405D0EBC (PopFxDeviceRelationsCleanup.c)
 *     DifKeTryToAcquireSpinLockAtDpcLevelWrapper @ 0x140631380 (DifKeTryToAcquireSpinLockAtDpcLevelWrapper.c)
 * Callees:
 *     KiTryToAcquireSpinLockInstrumented @ 0x140463408 (KiTryToAcquireSpinLockInstrumented.c)
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
