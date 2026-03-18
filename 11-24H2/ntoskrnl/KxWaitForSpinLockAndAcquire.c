/*
 * XREFs of KxWaitForSpinLockAndAcquire @ 0x140254C70
 * Callers:
 *     KeSynchronizeExecution @ 0x1402539F0 (KeSynchronizeExecution.c)
 *     IopQueueThreadIrp @ 0x140253C60 (IopQueueThreadIrp.c)
 *     IopDequeueIrpFromThread @ 0x1402541C0 (IopDequeueIrpFromThread.c)
 *     KiInsertQueueDpc @ 0x140254310 (KiInsertQueueDpc.c)
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiAcquireSpinLockInstrumented @ 0x140254BA0 (KiAcquireSpinLockInstrumented.c)
 *     KiExecuteAllDpcs @ 0x1402552D0 (KiExecuteAllDpcs.c)
 *     HalpPCIAcquireConfigSpaceLock @ 0x140266168 (HalpPCIAcquireConfigSpaceLock.c)
 *     IoRemoveIoCompletion @ 0x1402A4220 (IoRemoveIoCompletion.c)
 *     ExpSetTimerObject @ 0x1403329C0 (ExpSetTimerObject.c)
 *     KiCallInterruptServiceRoutine @ 0x14033B0A0 (KiCallInterruptServiceRoutine.c)
 *     PpmUpdatePerformanceFeedback @ 0x1403505D0 (PpmUpdatePerformanceFeedback.c)
 *     KeIntSteerSnapPerf @ 0x140353E60 (KeIntSteerSnapPerf.c)
 *     KiTimer2Expiration @ 0x1403C1420 (KiTimer2Expiration.c)
 *     KeSetTimer2 @ 0x1403C20A0 (KeSetTimer2.c)
 *     KiAcquireTimer2CollectionLockIfInserted @ 0x1403C259C (KiAcquireTimer2CollectionLockIfInserted.c)
 *     EtwpApcPoolThunk @ 0x1403ED870 (EtwpApcPoolThunk.c)
 *     EtwpTraceStackKey @ 0x1403EE6C0 (EtwpTraceStackKey.c)
 *     EtwpLockBufferList @ 0x1403EEC80 (EtwpLockBufferList.c)
 *     PsGetThreadProperty @ 0x14040CD40 (PsGetThreadProperty.c)
 *     IopCancelIrpsInFileObjectList @ 0x140418C10 (IopCancelIrpsInFileObjectList.c)
 *     ExGenRandom @ 0x14041A540 (ExGenRandom.c)
 *     IopFreeWaitCompletionPacket @ 0x14041BD10 (IopFreeWaitCompletionPacket.c)
 *     ExpUpdateTimerResolution @ 0x14041D4F0 (ExpUpdateTimerResolution.c)
 *     PsGetJobProperty @ 0x140428800 (PsGetJobProperty.c)
 *     IopSetLockOperationProcess @ 0x14042AC50 (IopSetLockOperationProcess.c)
 *     PfSnActiveTraceGetNext @ 0x140434970 (PfSnActiveTraceGetNext.c)
 *     KeAcquireInterruptSpinLock @ 0x1404451E0 (KeAcquireInterruptSpinLock.c)
 *     BgpFwAcquireLock @ 0x1404A9CA4 (BgpFwAcquireLock.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall KxWaitForSpinLockAndAcquire(volatile signed __int32 *a1)
{
  unsigned int v2; // ebx

  v2 = 0;
  do
  {
    if ( (++v2 & HvlLongSpinCountMask) == 0
      && (HvlEnlightenments & 0x40) != 0
      && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
    {
      HvlNotifyLongSpinWait(v2);
    }
    else
    {
      _mm_pause();
    }
  }
  while ( *(_QWORD *)a1 || _interlockedbittestandset64(a1, 0LL) );
  return v2;
}
