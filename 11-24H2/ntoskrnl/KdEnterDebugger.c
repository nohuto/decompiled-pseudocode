/*
 * XREFs of KdEnterDebugger @ 0x140B7A96C
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
 *     KdpSetOwedBreakpoints @ 0x140B7A7DC (KdpSetOwedBreakpoints.c)
 * Callees:
 *     VfIsVerifierEnabled @ 0x1404BC290 (VfIsVerifierEnabled.c)
 *     KeFreezeExecution @ 0x1404D5B60 (KeFreezeExecution.c)
 *     KeSaveSupervisorState @ 0x1405B8864 (KeSaveSupervisorState.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     VfNotifyVerifierOfEvent @ 0x140B82EA0 (VfNotifyVerifierOfEvent.c)
 */

bool __fastcall KdEnterDebugger(__int64 a1)
{
  int v2; // ebx
  unsigned __int8 CurrentIrql; // bp
  bool v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 Number; // rsi
  __int64 ExtendedSupervisorState; // rcx
  unsigned int *v12; // rdx
  unsigned __int64 *v13; // rcx
  unsigned __int64 v14; // rax
  bool result; // al

  v2 = 0;
  if ( (unsigned int)VfIsVerifierEnabled() )
    VfNotifyVerifierOfEvent(3LL);
  if ( a1 )
  {
    KdTimerStop = __rdtsc();
    KdTimerDifference = KdTimerStop - KdTimerStart;
  }
  else
  {
    KdTimerStop = 0LL;
  }
  CurrentIrql = KeGetCurrentIrql();
  v4 = KeFreezeExecution();
  guard_dispatch_icall_no_overrides(v6, v5, v7, v8);
  CurrentPrcb = KeGetCurrentPrcb();
  Number = CurrentPrcb->Number;
  if ( (KiBugCheckActive & 3) == 0 && !PoAllProcIntrDisabled )
  {
    ExtendedSupervisorState = (__int64)CurrentPrcb->ExtendedSupervisorState;
    qword_140E3ED38 = ~KdIgnoredSavingSupervisorXStateFeatures & (KeEnabledSupervisorXStateFeatures | 0x100);
    KeSaveSupervisorState(
      ExtendedSupervisorState,
      ~KdIgnoredSavingSupervisorXStateFeatures & (KeEnabledSupervisorXStateFeatures | 0x100));
  }
  if ( (KiBugCheckActive & 3) == 0 || (unsigned int)KiBugCheckActive >> 4 != (_DWORD)Number )
    CurrentPrcb->DebuggerSavedIRQL = CurrentIrql;
  v12 = (unsigned int *)KdLogBuffer[Number];
  if ( v12 )
  {
    v13 = (unsigned __int64 *)&v12[4 * *v12 + 4];
    v14 = __rdtsc();
    *v13 = ((unsigned __int64)HIDWORD(v14) << 32) | (unsigned int)v14;
    v13[1] = (4 * ((unsigned __int8)KdDebuggerNotPresent & 1)) | 1u;
  }
  ++KdDebuggerEnteredCount;
  result = v4;
  LOBYTE(v2) = KdPortLocked == 0;
  KdDebuggerEnteredWithoutLock += v2;
  KdEnteredDebugger = 1;
  return result;
}
