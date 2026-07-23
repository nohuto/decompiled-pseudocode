/*
 * XREFs of KxWaitForSpinLockAndAcquire @ 0x140285280
 * Callers:
 *     KeSynchronizeExecution @ 0x140284000 (KeSynchronizeExecution.c)
 *     IopQueueThreadIrp @ 0x140284270 (IopQueueThreadIrp.c)
 *     IopDequeueIrpFromThread @ 0x1402847D0 (IopDequeueIrpFromThread.c)
 *     KiInsertQueueDpc @ 0x140284920 (KiInsertQueueDpc.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiAcquireSpinLockInstrumented @ 0x1402851B0 (KiAcquireSpinLockInstrumented.c)
 *     KiExecuteAllDpcs @ 0x1402858E0 (KiExecuteAllDpcs.c)
 *     KeIntSteerSnapPerf @ 0x1402B1C30 (KeIntSteerSnapPerf.c)
 *     ExpSetTimerObject @ 0x1402BD850 (ExpSetTimerObject.c)
 *     IoRemoveIoCompletion @ 0x1402D3950 (IoRemoveIoCompletion.c)
 *     PfSnActiveTraceGetNext @ 0x1402F4C40 (PfSnActiveTraceGetNext.c)
 *     KiCallInterruptServiceRoutine @ 0x14031A580 (KiCallInterruptServiceRoutine.c)
 *     PpmUpdatePerformanceFeedback @ 0x14036EAB0 (PpmUpdatePerformanceFeedback.c)
 *     HalpPCIAcquireConfigSpaceLock @ 0x1403AB24C (HalpPCIAcquireConfigSpaceLock.c)
 *     KiTimer2Expiration @ 0x1403AFFE0 (KiTimer2Expiration.c)
 *     KeSetTimer2 @ 0x1403B0C60 (KeSetTimer2.c)
 *     KiAcquireTimer2CollectionLockIfInserted @ 0x1403B115C (KiAcquireTimer2CollectionLockIfInserted.c)
 *     EtwpApcPoolThunk @ 0x1403DD840 (EtwpApcPoolThunk.c)
 *     EtwpTraceStackKey @ 0x1403DE5B0 (EtwpTraceStackKey.c)
 *     EtwpLockBufferList @ 0x1403E1714 (EtwpLockBufferList.c)
 *     PsGetThreadProperty @ 0x1404053D0 (PsGetThreadProperty.c)
 *     IopCancelIrpsInFileObjectList @ 0x1404089C0 (IopCancelIrpsInFileObjectList.c)
 *     ExGenRandom @ 0x14040A540 (ExGenRandom.c)
 *     IopFreeWaitCompletionPacket @ 0x14040F850 (IopFreeWaitCompletionPacket.c)
 *     ExpUpdateTimerResolution @ 0x1404110E0 (ExpUpdateTimerResolution.c)
 *     PsGetJobProperty @ 0x14041C780 (PsGetJobProperty.c)
 *     IopSetLockOperationProcess @ 0x14041DE90 (IopSetLockOperationProcess.c)
 *     KeAcquireInterruptSpinLock @ 0x14043D390 (KeAcquireInterruptSpinLock.c)
 *     BgpFwAcquireLock @ 0x1404A3F74 (BgpFwAcquireLock.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall KxWaitForSpinLockAndAcquire(volatile signed __int32 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx

  v5 = 0;
  do
  {
    if ( (++v5 & HvlLongSpinCountMask) == 0
      && (HvlEnlightenments & 0x40) != 0
      && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1, a2, a3, a4) )
    {
      HvlNotifyLongSpinWait(v5);
    }
    else
    {
      _mm_pause();
    }
  }
  while ( *(_QWORD *)a1 || _interlockedbittestandset64(a1, 0LL) );
  return v5;
}
