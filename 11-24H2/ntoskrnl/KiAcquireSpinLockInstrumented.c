/*
 * XREFs of KiAcquireSpinLockInstrumented @ 0x140254BA0
 * Callers:
 *     KeSynchronizeExecution @ 0x1402539F0 (KeSynchronizeExecution.c)
 *     IopQueueThreadIrp @ 0x140253C60 (IopQueueThreadIrp.c)
 *     IopDequeueIrpFromThread @ 0x1402541C0 (IopDequeueIrpFromThread.c)
 *     KiInsertQueueDpc @ 0x140254310 (KiInsertQueueDpc.c)
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
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
 *     KxWaitForSpinLockAndAcquire @ 0x140254C70 (KxWaitForSpinLockAndAcquire.c)
 *     PerfLogSpinLockAcquire @ 0x14040D6FC (PerfLogSpinLockAcquire.c)
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
