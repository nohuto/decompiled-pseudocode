/*
 * XREFs of PsInvokeWin32Callout @ 0x140961150
 * Callers:
 *     SeCaptureAtomTableCallout @ 0x140479248 (SeCaptureAtomTableCallout.c)
 *     PspJobDelete @ 0x1404EB860 (PspJobDelete.c)
 *     PspSetProcessTimerDelayForWin32 @ 0x1405D9C88 (PspSetProcessTimerDelayForWin32.c)
 *     KiSystemCall64 @ 0x1406B2B40 (KiSystemCall64.c)
 *     PspEnsureGuiThreadAndBatchFlush @ 0x140761908 (PspEnsureGuiThreadAndBatchFlush.c)
 *     PspShutdownCsrProcess @ 0x1407635E4 (PspShutdownCsrProcess.c)
 *     PspQueryProcessInterferenceCountCallback @ 0x140767FC0 (PspQueryProcessInterferenceCountCallback.c)
 *     NtSetSystemInformation @ 0x1408E97E0 (NtSetSystemInformation.c)
 *     ExpWin32DeleteProcedure @ 0x14091DA30 (ExpWin32DeleteProcedure.c)
 *     ExpWin32OpenProcedure @ 0x14091DB20 (ExpWin32OpenProcedure.c)
 *     PopInvokeWin32CalloutWithWatchdog @ 0x140962B30 (PopInvokeWin32CalloutWithWatchdog.c)
 *     PspAssignProcessToJob @ 0x140A0E960 (PspAssignProcessToJob.c)
 *     NtSetInformationJobObject @ 0x140AC4C00 (NtSetInformationJobObject.c)
 *     PspChangeProcessExecutionState @ 0x140AC7CBC (PspChangeProcessExecutionState.c)
 * Callees:
 *     ExReferenceCallBackBlock @ 0x140326780 (ExReferenceCallBackBlock.c)
 *     ExDereferenceCallBackBlock @ 0x1404482A0 (ExDereferenceCallBackBlock.c)
 *     PsSessionGetWin32Callouts @ 0x14047422C (PsSessionGetWin32Callouts.c)
 *     PspUpdateCalloutParameters @ 0x1404EBC50 (PspUpdateCalloutParameters.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PsInvokeWin32Callout(int a1, __int128 *a2, int a3, __int64 a4)
{
  __int128 *v4; // rbx
  _RTL_RUN_ONCE *Win32Callouts; // rsi
  struct _EX_RUNDOWN_REF *v6; // rdi
  unsigned int v7; // ebx
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF

  DWORD2(v9) = 0;
  v4 = a2;
  *(_QWORD *)&v9 = 0LL;
  if ( !a2 )
  {
    v4 = &v9;
    v9 = 0LL;
  }
  if ( !(unsigned int)PspUpdateCalloutParameters(a1, (__int64)v4, a3, a4) )
    return 3221225485LL;
  Win32Callouts = PsSessionGetWin32Callouts();
  v6 = ExReferenceCallBackBlock((signed __int64 *)Win32Callouts);
  if ( v6 )
  {
    v7 = guard_dispatch_icall_no_overrides(v6[2].Count);
    ExDereferenceCallBackBlock((signed __int64 *)Win32Callouts, v6);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v7;
}
