/*
 * XREFs of KiAcquireSpinLockInstrumented @ 0x1402851B0
 * Callers:
 *     KeSynchronizeExecution @ 0x140284000 (KeSynchronizeExecution.c)
 *     IopQueueThreadIrp @ 0x140284270 (IopQueueThreadIrp.c)
 *     IopDequeueIrpFromThread @ 0x1402847D0 (IopDequeueIrpFromThread.c)
 *     KiInsertQueueDpc @ 0x140284920 (KiInsertQueueDpc.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
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
 *     KxWaitForSpinLockAndAcquire @ 0x140285280 (KxWaitForSpinLockAndAcquire.c)
 *     PerfLogSpinLockAcquire @ 0x14040594C (PerfLogSpinLockAcquire.c)
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
