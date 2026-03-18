/*
 * XREFs of PpmPerfAction @ 0x140351770
 * Callers:
 *     KiExecuteAllDpcs @ 0x1402552D0 (KiExecuteAllDpcs.c)
 * Callees:
 *     PpmPerfApplyProcessorState @ 0x14029F124 (PpmPerfApplyProcessorState.c)
 *     PpmPerfSnapDeliveredPerformance @ 0x140351020 (PpmPerfSnapDeliveredPerformance.c)
 *     PpmCheckContinueExecution @ 0x140351834 (PpmCheckContinueExecution.c)
 *     PpmParkReportUnparkedCore @ 0x140351950 (PpmParkReportUnparkedCore.c)
 *     PpmParkReportParkedCore @ 0x1403519DC (PpmParkReportParkedCore.c)
 *     PpmParkReportSoftParkChange @ 0x1403E9474 (PpmParkReportSoftParkChange.c)
 *     PpmParkReportForceParkChange @ 0x1405DA8CC (PpmParkReportForceParkChange.c)
 */

void __fastcall PpmPerfAction(
        struct _KDPC *Dpc,
        struct _KPRCB *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  char v5; // di
  _PROC_PERF_CONSTRAINT *Constraint; // rax

  v5 = _InterlockedExchange(&DeferredContext->PowerState.PerfActionMask, 0);
  if ( (v5 & 1) != 0 )
    PpmPerfSnapDeliveredPerformance((__int64)&DeferredContext->PowerState.CheckContext, 0, 0);
  if ( (v5 & 2) != 0 )
    PpmParkReportUnparkedCore(DeferredContext, DeferredContext, SystemArgument1, SystemArgument2);
  if ( (v5 & 4) != 0 )
  {
    Constraint = DeferredContext->PowerState.CheckContext.Constraint;
    if ( Constraint->Force )
    {
      Constraint->Force = 0;
      PpmPerfApplyProcessorState(DeferredContext, 1u);
    }
    PpmPerfApplyProcessorState(DeferredContext, 0);
  }
  if ( (v5 & 8) != 0 )
    PpmParkReportParkedCore(DeferredContext, DeferredContext, SystemArgument1, SystemArgument2);
  if ( (v5 & 0x20) != 0 )
    PpmParkReportForceParkChange(DeferredContext, DeferredContext, SystemArgument1, SystemArgument2);
  if ( (v5 & 0x10) != 0 )
    PpmParkReportSoftParkChange(DeferredContext, DeferredContext, SystemArgument1, SystemArgument2);
  if ( _InterlockedExchangeAdd(&PpmCheckCount, 0xFFFFFFFF) == 1 )
    PpmCheckContinueExecution(Dpc, DeferredContext, SystemArgument1, SystemArgument2);
}
