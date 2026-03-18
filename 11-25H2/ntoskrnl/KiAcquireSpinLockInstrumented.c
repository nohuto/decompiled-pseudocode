/*
 * XREFs of KiAcquireSpinLockInstrumented @ 0x140253620
 * Callers:
 *     IopfCompleteRequest @ 0x140251740 (IopfCompleteRequest.c)
 *     IopDequeueIrpFromThread @ 0x140252C50 (IopDequeueIrpFromThread.c)
 *     KiInsertQueueDpc @ 0x140252DA0 (KiInsertQueueDpc.c)
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     IopQueueThreadIrp @ 0x140253BB0 (IopQueueThreadIrp.c)
 *     KiExecuteAllDpcs @ 0x140254370 (KiExecuteAllDpcs.c)
 *     ExpUpdateTimerResolution @ 0x140276C80 (ExpUpdateTimerResolution.c)
 *     KiCallInterruptServiceRoutine @ 0x140279DF0 (KiCallInterruptServiceRoutine.c)
 *     NtAssociateWaitCompletionPacket @ 0x14027F510 (NtAssociateWaitCompletionPacket.c)
 *     HalpPCIAcquireConfigSpaceLock @ 0x1402833F0 (HalpPCIAcquireConfigSpaceLock.c)
 *     IoRemoveIoCompletion @ 0x14029E4A0 (IoRemoveIoCompletion.c)
 *     ExpSetTimerObject @ 0x1402EB930 (ExpSetTimerObject.c)
 *     EtwpApcPoolThunk @ 0x14030A360 (EtwpApcPoolThunk.c)
 *     PpmUpdatePerformanceFeedback @ 0x14031C3F0 (PpmUpdatePerformanceFeedback.c)
 *     KeSetTimer2 @ 0x140370EF0 (KeSetTimer2.c)
 *     KiAcquireTimer2CollectionLockIfInserted @ 0x1403713FC (KiAcquireTimer2CollectionLockIfInserted.c)
 *     KiTimer2Expiration @ 0x140372250 (KiTimer2Expiration.c)
 *     KeIntSteerSnapPerf @ 0x1403AF950 (KeIntSteerSnapPerf.c)
 *     EtwpLockBufferList @ 0x1403E4FA8 (EtwpLockBufferList.c)
 *     EtwpTraceStackKey @ 0x1403F5C40 (EtwpTraceStackKey.c)
 *     PsGetThreadProperty @ 0x1404110D0 (PsGetThreadProperty.c)
 *     KeSynchronizeExecution @ 0x14041A4F0 (KeSynchronizeExecution.c)
 *     IopCancelIrpsInFileObjectList @ 0x14041AEB0 (IopCancelIrpsInFileObjectList.c)
 *     ExGenRandom @ 0x14041CDD0 (ExGenRandom.c)
 *     IopFreeWaitCompletionPacket @ 0x14041E430 (IopFreeWaitCompletionPacket.c)
 *     IopSetLockOperationProcess @ 0x140432070 (IopSetLockOperationProcess.c)
 *     PsGetJobProperty @ 0x140436120 (PsGetJobProperty.c)
 *     PfSnActiveTraceGetNext @ 0x140438B00 (PfSnActiveTraceGetNext.c)
 *     KeAcquireInterruptSpinLock @ 0x140443990 (KeAcquireInterruptSpinLock.c)
 *     BgpFwAcquireLock @ 0x1404A8BF0 (BgpFwAcquireLock.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1402536F0 (KxWaitForSpinLockAndAcquire.c)
 *     PerfLogSpinLockAcquire @ 0x14041FC48 (PerfLogSpinLockAcquire.c)
 */

void __fastcall KiAcquireSpinLockInstrumented(volatile signed __int32 *a1)
{
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned int InterruptCount; // edi
  int v3; // esi
  int v4; // r14d
  int v5; // r9d
  char v6; // bp
  int v7; // eax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  InterruptCount = 0;
  v3 = (int)a1;
  v4 = 0;
  v5 = 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    v6 = 0;
  }
  else
  {
    v6 = 1;
    v8 = __rdtsc();
    InterruptCount = CurrentPrcb->InterruptCount;
    v4 = v8;
  }
  ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
  if ( _interlockedbittestandset64(a1, 0LL) )
  {
    v7 = KxWaitForSpinLockAndAcquire(a1);
    ++CurrentPrcb->SynchCounters.SpinLockContentionCount;
    v5 = v7;
    CurrentPrcb->SynchCounters.SpinLockSpinCount += v7;
  }
  if ( v6 )
  {
    v9 = __rdtsc();
    PerfLogSpinLockAcquire(v3, v9, v9 - v4, v5, InterruptCount, 0);
  }
}
