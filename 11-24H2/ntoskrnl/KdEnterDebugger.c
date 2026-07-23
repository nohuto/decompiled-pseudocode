/*
 * XREFs of KdEnterDebugger @ 0x140B7C96C
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
 *     KdpSetOwedBreakpoints @ 0x140B7C7DC (KdpSetOwedBreakpoints.c)
 * Callees:
 *     VfIsVerifierEnabled @ 0x1404B71A0 (VfIsVerifierEnabled.c)
 *     KeFreezeExecution @ 0x1404CEFB0 (KeFreezeExecution.c)
 *     KeSaveSupervisorState @ 0x1405B5EA4 (KeSaveSupervisorState.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     VfNotifyVerifierOfEvent @ 0x140B84EA0 (VfNotifyVerifierOfEvent.c)
 */

bool __fastcall KdEnterDebugger(__int64 a1)
{
  int v2; // ebx
  unsigned __int8 CurrentIrql; // bp
  bool v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 Number; // rsi
  __int64 ExtendedSupervisorState; // rcx
  unsigned int *v10; // rdx
  unsigned __int64 *v11; // rcx
  unsigned __int64 v12; // rax
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
  guard_dispatch_icall_no_overrides(v6, v5);
  CurrentPrcb = KeGetCurrentPrcb();
  Number = CurrentPrcb->Number;
  if ( (KiBugCheckActive & 3) == 0 && !PoAllProcIntrDisabled )
  {
    ExtendedSupervisorState = (__int64)CurrentPrcb->ExtendedSupervisorState;
    qword_140E5EE80 = ~KdIgnoredSavingSupervisorXStateFeatures & (KeEnabledSupervisorXStateFeatures | 0x100);
    KeSaveSupervisorState(
      ExtendedSupervisorState,
      ~KdIgnoredSavingSupervisorXStateFeatures & (KeEnabledSupervisorXStateFeatures | 0x100));
  }
  if ( (KiBugCheckActive & 3) == 0 || (unsigned int)KiBugCheckActive >> 4 != (_DWORD)Number )
    CurrentPrcb->DebuggerSavedIRQL = CurrentIrql;
  v10 = (unsigned int *)KdLogBuffer[Number];
  if ( v10 )
  {
    v11 = (unsigned __int64 *)&v10[4 * *v10 + 4];
    v12 = __rdtsc();
    *v11 = ((unsigned __int64)HIDWORD(v12) << 32) | (unsigned int)v12;
    v11[1] = (4 * ((unsigned __int8)KdDebuggerNotPresent & 1)) | 1u;
  }
  ++KdDebuggerEnteredCount;
  result = v4;
  LOBYTE(v2) = KdPortLocked == 0;
  KdDebuggerEnteredWithoutLock += v2;
  KdEnteredDebugger = 1;
  return result;
}
