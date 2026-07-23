/*
 * XREFs of KdExitDebugger @ 0x140B77008
 * Callers:
 *     KdRefreshDebuggerNotPresent @ 0x1404AA3C0 (KdRefreshDebuggerNotPresent.c)
 *     KdpReport @ 0x1404CE548 (KdpReport.c)
 *     KiTpWriteMemory @ 0x1405C6DC8 (KiTpWriteMemory.c)
 *     KdpCloseRemoteFile @ 0x140B786D0 (KdpCloseRemoteFile.c)
 *     KdpCreateRemoteFile @ 0x140B78920 (KdpCreateRemoteFile.c)
 *     KdpReadRemoteFile @ 0x140B78D18 (KdpReadRemoteFile.c)
 *     KdSendTraceData @ 0x140B78F48 (KdSendTraceData.c)
 *     KdpCommandString @ 0x140B7AE2C (KdpCommandString.c)
 *     KdpPrint @ 0x140B7AF08 (KdpPrint.c)
 *     KdpPrompt @ 0x140B7B0AC (KdpPrompt.c)
 *     KdpSymbol @ 0x140B7B220 (KdpSymbol.c)
 *     KdpSendWaitContinue @ 0x140B7C32C (KdpSendWaitContinue.c)
 *     KdpSetOwedBreakpoints @ 0x140B7C7DC (KdpSetOwedBreakpoints.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     PoIsHibernateInProgress @ 0x140425540 (PoIsHibernateInProgress.c)
 *     VfIsVerifierEnabled @ 0x1404B71A0 (VfIsVerifierEnabled.c)
 *     KeThawExecution @ 0x1404F23F0 (KeThawExecution.c)
 *     KeRestoreSupervisorState @ 0x1405B5E20 (KeRestoreSupervisorState.c)
 *     ExQueueDebuggerWorker @ 0x140656B18 (ExQueueDebuggerWorker.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     VfNotifyVerifierOfEvent @ 0x140B84EA0 (VfNotifyVerifierOfEvent.c)
 */

__int64 __fastcall KdExitDebugger(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  char v3; // bl
  _DWORD *v4; // r9
  __int64 v5; // r10
  unsigned __int64 v6; // rax
  __int64 result; // rax

  KdEnteredDebugger = 0;
  v3 = a1;
  if ( !(_BYTE)KdDebuggerNotPresent )
    LOWORD(KdDebuggerNotPresent) = 256;
  LODWORD(v2) = KeGetPcr()->Prcb.Number;
  v4 = (_DWORD *)KdLogBuffer[v2];
  if ( v4 )
  {
    v5 = (unsigned int)*v4;
    v6 = __rdtsc();
    a2 = (unsigned __int64)HIDWORD(v6) << 32;
    a1 = v4[4 * v5 + 6] & 4;
    *(_QWORD *)&v4[4 * v5 + 6] = a1 | (2 * ((unsigned __int8)KdDebuggerNotPresent & 1)) | 1u | ((a2 | (unsigned int)v6)
                                                                                              - *(_QWORD *)&v4[4 * v5 + 4]) & 0xFFFFFFFFFFFFFFF1uLL;
    if ( (_DWORD)v5 == 254 )
      *v4 = 0;
    else
      *v4 = v5 + 1;
  }
  guard_dispatch_icall_no_overrides(a1, a2);
  if ( (KiBugCheckActive & 3) == 0 && !PoAllProcIntrDisabled )
  {
    KeRestoreSupervisorState((__int64)KeGetCurrentPrcb()->ExtendedSupervisorState, qword_140E5EE80);
    qword_140E5EE80 = 0LL;
  }
  KeThawExecution(v3);
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
