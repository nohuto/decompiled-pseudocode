/*
 * XREFs of KxTryToAcquireSpinLock @ 0x140459EB8
 * Callers:
 *     KdPollBreakIn @ 0x1402ABAA0 (KdPollBreakIn.c)
 *     KiRcuReportQuiescentState @ 0x14031C844 (KiRcuReportQuiescentState.c)
 *     KiRcuFlushCompleted @ 0x14031C9F0 (KiRcuFlushCompleted.c)
 *     EtwpTraceStackKey @ 0x1403DE5B0 (EtwpTraceStackKey.c)
 *     EtwpCovSampTryAcquireBufferLock @ 0x14044D7F4 (EtwpCovSampTryAcquireBufferLock.c)
 *     KeTryToAcquireSpinLockAtDpcLevel @ 0x140459EA0 (KeTryToAcquireSpinLockAtDpcLevel.c)
 *     EtwpGetCrimsonStackKey @ 0x1404C5C9C (EtwpGetCrimsonStackKey.c)
 *     KeFreezeExecution @ 0x1404CEFB0 (KeFreezeExecution.c)
 *     HalpHandleMachineCheck @ 0x14053D0A8 (HalpHandleMachineCheck.c)
 *     HalpMceHandlerCore @ 0x14053DD18 (HalpMceHandlerCore.c)
 *     IvtHandleInterrupt @ 0x14056C010 (IvtHandleInterrupt.c)
 *     KiProcessNMI @ 0x1405B4C40 (KiProcessNMI.c)
 *     KiSrcuFlushCompleted @ 0x1405BE474 (KiSrcuFlushCompleted.c)
 *     KiSrcuReportQuiescent @ 0x1405BEDC8 (KiSrcuReportQuiescent.c)
 *     PopFxComponentRelationsCleanup @ 0x1405CE13C (PopFxComponentRelationsCleanup.c)
 *     PopFxDeviceRelationsCleanup @ 0x1405CE5DC (PopFxDeviceRelationsCleanup.c)
 *     DifKeTryToAcquireSpinLockAtDpcLevelWrapper @ 0x14062F940 (DifKeTryToAcquireSpinLockAtDpcLevelWrapper.c)
 * Callees:
 *     KiTryToAcquireSpinLockInstrumented @ 0x140459EF8 (KiTryToAcquireSpinLockInstrumented.c)
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
