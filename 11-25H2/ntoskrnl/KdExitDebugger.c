/*
 * XREFs of KdExitDebugger @ 0x140B65008
 * Callers:
 *     KdRefreshDebuggerNotPresent @ 0x1404AEB30 (KdRefreshDebuggerNotPresent.c)
 *     KdpReport @ 0x1404D58C4 (KdpReport.c)
 *     KiTpWriteMemory @ 0x1405C506C (KiTpWriteMemory.c)
 *     KdpCloseRemoteFile @ 0x140B666D0 (KdpCloseRemoteFile.c)
 *     KdpCreateRemoteFile @ 0x140B66920 (KdpCreateRemoteFile.c)
 *     KdpReadRemoteFile @ 0x140B66D18 (KdpReadRemoteFile.c)
 *     KdSendTraceData @ 0x140B66F48 (KdSendTraceData.c)
 *     KdpCommandString @ 0x140B68E2C (KdpCommandString.c)
 *     KdpPrint @ 0x140B68F08 (KdpPrint.c)
 *     KdpPrompt @ 0x140B690AC (KdpPrompt.c)
 *     KdpSymbol @ 0x140B69220 (KdpSymbol.c)
 *     KdpSendWaitContinue @ 0x140B6A32C (KdpSendWaitContinue.c)
 *     KdpSetOwedBreakpoints @ 0x140B6A7DC (KdpSetOwedBreakpoints.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 *     PoIsHibernateInProgress @ 0x14044CA60 (PoIsHibernateInProgress.c)
 *     VfIsVerifierEnabled @ 0x1404BD130 (VfIsVerifierEnabled.c)
 *     KeThawExecution @ 0x1404F0C00 (KeThawExecution.c)
 *     KeRestoreSupervisorState @ 0x1405B4A20 (KeRestoreSupervisorState.c)
 *     ExQueueDebuggerWorker @ 0x14064C4B8 (ExQueueDebuggerWorker.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     VfNotifyVerifierOfEvent @ 0x140B72EC0 (VfNotifyVerifierOfEvent.c)
 */

__int64 __fastcall KdExitDebugger(__int64 a1)
{
  __int64 v1; // rax
  char v2; // bl
  _DWORD *v3; // r9
  __int64 v4; // r10
  unsigned __int64 v5; // rax
  __int64 result; // rax

  KdEnteredDebugger = 0;
  v2 = a1;
  if ( !(_BYTE)KdDebuggerNotPresent )
    KdDebuggerWasEverPresent = 1;
  LODWORD(v1) = KeGetPcr()->Prcb.Number;
  v3 = (_DWORD *)KdLogBuffer[v1];
  if ( v3 )
  {
    v4 = (unsigned int)*v3;
    v5 = __rdtsc();
    a1 = v3[4 * v4 + 6] & 4;
    *(_QWORD *)&v3[4 * v4 + 6] = a1 | (2 * ((unsigned __int8)KdDebuggerNotPresent & 1)) | 1u | ((((unsigned __int64)HIDWORD(v5) << 32) | (unsigned int)v5)
                                                                                              - *(_QWORD *)&v3[4 * v4 + 4]) & 0xFFFFFFFFFFFFFFF1uLL;
    if ( (_DWORD)v4 == 254 )
      *v3 = 0;
    else
      *v3 = v4 + 1;
  }
  guard_dispatch_icall_no_overrides(a1);
  if ( (KiBugCheckActive & 3) == 0 && !PoAllProcIntrDisabled )
  {
    KeRestoreSupervisorState((__int64)KeGetCurrentPrcb()->ExtendedSupervisorState, qword_140E3EAF8);
    qword_140E3EAF8 = 0LL;
  }
  KeThawExecution(v2);
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
