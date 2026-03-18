/*
 * XREFs of PsInvokeWin32Callout @ 0x1409BADD0
 * Callers:
 *     SeCaptureAtomTableCallout @ 0x14047A560 (SeCaptureAtomTableCallout.c)
 *     PspJobDelete @ 0x1404EE9D0 (PspJobDelete.c)
 *     PspSetProcessTimerDelayForWin32 @ 0x1405E5E58 (PspSetProcessTimerDelayForWin32.c)
 *     KiSystemCall64 @ 0x1406BDE40 (KiSystemCall64.c)
 *     PspEnsureGuiThreadAndBatchFlush @ 0x1407712C8 (PspEnsureGuiThreadAndBatchFlush.c)
 *     PspShutdownCsrProcess @ 0x140772FB4 (PspShutdownCsrProcess.c)
 *     PspQueryProcessInterferenceCountCallback @ 0x140777AA0 (PspQueryProcessInterferenceCountCallback.c)
 *     PspSetUILimitJobObject @ 0x1407785C8 (PspSetUILimitJobObject.c)
 *     ExpWin32DeleteProcedure @ 0x140934D90 (ExpWin32DeleteProcedure.c)
 *     ExpWin32OpenProcedure @ 0x140934E80 (ExpWin32OpenProcedure.c)
 *     PopInvokeWin32CalloutWithWatchdog @ 0x1409BB330 (PopInvokeWin32CalloutWithWatchdog.c)
 *     PspAssignProcessToJob @ 0x140A173D0 (PspAssignProcessToJob.c)
 *     PspChangeProcessExecutionState @ 0x140AD16D4 (PspChangeProcessExecutionState.c)
 *     NtSetSystemInformation @ 0x140AE1300 (NtSetSystemInformation.c)
 * Callees:
 *     ExReferenceCallBackBlock @ 0x140279300 (ExReferenceCallBackBlock.c)
 *     ExDereferenceCallBackBlock @ 0x1404459D0 (ExDereferenceCallBackBlock.c)
 *     PsSessionGetWin32Callouts @ 0x14046B2A0 (PsSessionGetWin32Callouts.c)
 *     PspUpdateCalloutParameters @ 0x1404EEDCC (PspUpdateCalloutParameters.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PsInvokeWin32Callout(int a1, __int128 *a2, int a3, __int64 a4)
{
  __int64 v4; // rbp
  __int128 *v5; // rbx
  union _RTL_RUN_ONCE *Win32Callouts; // rsi
  struct _EX_RUNDOWN_REF *v7; // rdi
  __int64 v8; // r9
  unsigned int v9; // ebx
  __int128 v11; // [rsp+20h] [rbp-18h] BYREF

  v4 = a1;
  DWORD2(v11) = 0;
  v5 = a2;
  *(_QWORD *)&v11 = 0LL;
  if ( !a2 )
  {
    v5 = &v11;
    v11 = 0LL;
  }
  if ( !(unsigned int)PspUpdateCalloutParameters(a1, (__int64)v5, a3, a4) )
    return 3221225485LL;
  Win32Callouts = PsSessionGetWin32Callouts();
  v7 = ExReferenceCallBackBlock((signed __int64 *)Win32Callouts);
  if ( v7 )
  {
    v9 = guard_dispatch_icall_no_overrides(v7[2].Count, v4, v5, v8);
    ExDereferenceCallBackBlock((signed __int64 *)Win32Callouts, v7);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v9;
}
