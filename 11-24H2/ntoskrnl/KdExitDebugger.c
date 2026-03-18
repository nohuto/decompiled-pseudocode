/*
 * XREFs of KdExitDebugger @ 0x140B75008
 * Callers:
 *     KdRefreshDebuggerNotPresent @ 0x1404AF9D0 (KdRefreshDebuggerNotPresent.c)
 *     KdpReport @ 0x1404D5270 (KdpReport.c)
 *     KiTpWriteMemory @ 0x1405C9698 (KiTpWriteMemory.c)
 *     KdpCloseRemoteFile @ 0x140B766D0 (KdpCloseRemoteFile.c)
 *     KdpCreateRemoteFile @ 0x140B76920 (KdpCreateRemoteFile.c)
 *     KdpReadRemoteFile @ 0x140B76D18 (KdpReadRemoteFile.c)
 *     KdSendTraceData @ 0x140B76F48 (KdSendTraceData.c)
 *     KdpCommandString @ 0x140B78E2C (KdpCommandString.c)
 *     KdpPrint @ 0x140B78F08 (KdpPrint.c)
 *     KdpPrompt @ 0x140B790AC (KdpPrompt.c)
 *     KdpSymbol @ 0x140B79220 (KdpSymbol.c)
 *     KdpSendWaitContinue @ 0x140B7A32C (KdpSendWaitContinue.c)
 *     KdpSetOwedBreakpoints @ 0x140B7A7DC (KdpSetOwedBreakpoints.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x1402542F0 (KeInsertQueueDpc.c)
 *     PoIsHibernateInProgress @ 0x140433400 (PoIsHibernateInProgress.c)
 *     VfIsVerifierEnabled @ 0x1404BC290 (VfIsVerifierEnabled.c)
 *     KeThawExecution @ 0x1404F4AF0 (KeThawExecution.c)
 *     KeRestoreSupervisorState @ 0x1405B87E0 (KeRestoreSupervisorState.c)
 *     ExQueueDebuggerWorker @ 0x140658418 (ExQueueDebuggerWorker.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     VfNotifyVerifierOfEvent @ 0x140B82EA0 (VfNotifyVerifierOfEvent.c)
 */

__int64 __fastcall KdExitDebugger(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  char v4; // bl
  _DWORD *v5; // r9
  __int64 v6; // r10
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 result; // rax

  KdEnteredDebugger = 0;
  v4 = a1;
  if ( !(_BYTE)KdDebuggerNotPresent )
    LOWORD(KdDebuggerNotPresent) = 256;
  LODWORD(v3) = KeGetPcr()->Prcb.Number;
  v5 = (_DWORD *)KdLogBuffer[v3];
  if ( v5 )
  {
    v6 = (unsigned int)*v5;
    a3 = 2 * (v6 + 1);
    v7 = __rdtsc();
    a2 = (unsigned __int64)HIDWORD(v7) << 32;
    a1 = v5[4 * v6 + 6] & 4;
    *(_QWORD *)&v5[4 * v6 + 6] = a1 | (2 * ((unsigned __int8)KdDebuggerNotPresent & 1)) | 1u | ((a2 | (unsigned int)v7)
                                                                                              - *(_QWORD *)&v5[4 * v6 + 4]) & 0xFFFFFFFFFFFFFFF1uLL;
    if ( (_DWORD)v6 == 254 )
      *v5 = 0;
    else
      *v5 = v6 + 1;
  }
  guard_dispatch_icall_no_overrides(a1, a2, a3, v5);
  if ( (KiBugCheckActive & 3) == 0 && !PoAllProcIntrDisabled )
  {
    KeRestoreSupervisorState((__int64)KeGetCurrentPrcb()->ExtendedSupervisorState, qword_140E3ED38);
    qword_140E3ED38 = 0LL;
  }
  KeThawExecution(v4, v8, v9, v10);
  if ( KdTimerStop )
    KdTimerStart = __rdtsc();
  else
    KdTimerStart = 0LL;
  if ( !PoIsHibernateInProgress() && (KiBugCheckActive & 3) == 0 && !KdDisableTimerReset )
  {
    if ( !_InterlockedExchange(&KdpTimeSlipPending, 2) )
      KeInsertQueueDpc(&KdpTimeSlipDpc, 0LL, 0LL);
    ExQueueDebuggerWorker();
  }
  result = VfIsVerifierEnabled();
  if ( (_DWORD)result )
    return VfNotifyVerifierOfEvent(4LL);
  return result;
}
