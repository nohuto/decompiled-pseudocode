/*
 * XREFs of PpmPerfAction @ 0x1403B0150
 * Callers:
 *     KiExecuteAllDpcs @ 0x140254370 (KiExecuteAllDpcs.c)
 * Callees:
 *     PpmPerfSnapDeliveredPerformance @ 0x1403B0220 (PpmPerfSnapDeliveredPerformance.c)
 *     PpmParkReportUnparkedCore @ 0x1403B0910 (PpmParkReportUnparkedCore.c)
 *     PpmCheckContinueExecution @ 0x1403B099C (PpmCheckContinueExecution.c)
 *     PpmParkReportParkedCore @ 0x1403B0AB8 (PpmParkReportParkedCore.c)
 *     PpmParkReportSoftParkChange @ 0x1403DFE2C (PpmParkReportSoftParkChange.c)
 *     PpmPerfApplyProcessorState @ 0x1403E8944 (PpmPerfApplyProcessorState.c)
 *     PpmParkReportForceParkChange @ 0x1405D5E54 (PpmParkReportForceParkChange.c)
 */

void __fastcall PpmPerfAction(
        struct _KDPC *Dpc,
        volatile __int32 *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  volatile __int32 *v4; // rbx
  char v5; // di
  __int64 v6; // rax

  v4 = DeferredContext;
  v5 = _InterlockedExchange(DeferredContext + 8806, 0);
  if ( (v5 & 1) != 0 )
    PpmPerfSnapDeliveredPerformance(DeferredContext + 8812, 0LL, 0LL);
  if ( (v5 & 2) != 0 )
    PpmParkReportUnparkedCore(v4, DeferredContext, SystemArgument1, SystemArgument2);
  if ( (v5 & 4) != 0 )
  {
    v6 = *((_QWORD *)v4 + 4407);
    if ( *(_BYTE *)(v6 + 140) )
    {
      LOBYTE(DeferredContext) = 1;
      *(_BYTE *)(v6 + 140) = 0;
      PpmPerfApplyProcessorState(v4, DeferredContext, SystemArgument1, SystemArgument2);
    }
    PpmPerfApplyProcessorState(v4, 0LL, SystemArgument1, SystemArgument2);
  }
  if ( (v5 & 8) != 0 )
    PpmParkReportParkedCore(v4, DeferredContext, SystemArgument1, SystemArgument2);
  if ( (v5 & 0x20) != 0 )
    PpmParkReportForceParkChange(v4, DeferredContext, SystemArgument1, SystemArgument2);
  if ( (v5 & 0x10) != 0 )
    PpmParkReportSoftParkChange(v4, DeferredContext, SystemArgument1, SystemArgument2);
  if ( _InterlockedExchangeAdd(&PpmCheckCount, 0xFFFFFFFF) == 1 )
    PpmCheckContinueExecution(Dpc, DeferredContext, SystemArgument1, SystemArgument2);
}
