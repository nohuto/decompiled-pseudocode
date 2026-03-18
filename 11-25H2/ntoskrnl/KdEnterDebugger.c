/*
 * XREFs of KdEnterDebugger @ 0x140B6A96C
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
 *     KdpSetOwedBreakpoints @ 0x140B6A7DC (KdpSetOwedBreakpoints.c)
 * Callees:
 *     VfIsVerifierEnabled @ 0x1404BD130 (VfIsVerifierEnabled.c)
 *     KeFreezeExecution @ 0x1404D6470 (KeFreezeExecution.c)
 *     KeSaveSupervisorState @ 0x1405B4AA4 (KeSaveSupervisorState.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     VfNotifyVerifierOfEvent @ 0x140B72EC0 (VfNotifyVerifierOfEvent.c)
 */

bool __fastcall KdEnterDebugger(__int64 a1)
{
  int v2; // ebx
  unsigned __int8 CurrentIrql; // bp
  bool v4; // r14
  __int64 v5; // rcx
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 Number; // rsi
  __int64 ExtendedSupervisorState; // rcx
  unsigned int *v9; // rdx
  unsigned __int64 *v10; // rcx
  unsigned __int64 v11; // rax
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
  guard_dispatch_icall_no_overrides(v5);
  CurrentPrcb = KeGetCurrentPrcb();
  Number = CurrentPrcb->Number;
  if ( (KiBugCheckActive & 3) == 0 && !PoAllProcIntrDisabled )
  {
    ExtendedSupervisorState = (__int64)CurrentPrcb->ExtendedSupervisorState;
    qword_140E3EAF8 = ~KdIgnoredSavingSupervisorXStateFeatures & (KeEnabledSupervisorXStateFeatures | 0x100);
    KeSaveSupervisorState(
      ExtendedSupervisorState,
      ~KdIgnoredSavingSupervisorXStateFeatures & (KeEnabledSupervisorXStateFeatures | 0x100));
  }
  if ( (KiBugCheckActive & 3) == 0 || (unsigned int)KiBugCheckActive >> 4 != (_DWORD)Number )
    CurrentPrcb->DebuggerSavedIRQL = CurrentIrql;
  v9 = (unsigned int *)KdLogBuffer[Number];
  if ( v9 )
  {
    v10 = (unsigned __int64 *)&v9[4 * *v9 + 4];
    v11 = __rdtsc();
    *v10 = ((unsigned __int64)HIDWORD(v11) << 32) | (unsigned int)v11;
    v10[1] = (4 * ((unsigned __int8)KdDebuggerNotPresent & 1)) | 1u;
  }
  ++KdDebuggerEnteredCount;
  result = v4;
  LOBYTE(v2) = KdPortLocked == 0;
  KdDebuggerEnteredWithoutLock += v2;
  KdEnteredDebugger = 1;
  return result;
}
