/*
 * XREFs of PsInvokeWin32Callout @ 0x1409A1420
 * Callers:
 *     SeCaptureAtomTableCallout @ 0x1404764B4 (SeCaptureAtomTableCallout.c)
 *     PspSetProcessTimerDelayForWin32 @ 0x1405E33F8 (PspSetProcessTimerDelayForWin32.c)
 *     KiSystemCall64 @ 0x1406BED40 (KiSystemCall64.c)
 *     PspEnsureGuiThreadAndBatchFlush @ 0x1407714E8 (PspEnsureGuiThreadAndBatchFlush.c)
 *     PspShutdownCsrProcess @ 0x1407731D4 (PspShutdownCsrProcess.c)
 *     PspQueryProcessInterferenceCountCallback @ 0x140777C60 (PspQueryProcessInterferenceCountCallback.c)
 *     ExpWin32DeleteProcedure @ 0x1408F4010 (ExpWin32DeleteProcedure.c)
 *     ExpWin32OpenProcedure @ 0x1408F4100 (ExpWin32OpenProcedure.c)
 *     PopInvokeWin32CalloutWithWatchdog @ 0x1409A1980 (PopInvokeWin32CalloutWithWatchdog.c)
 *     PsConvertToGuiThread @ 0x140AC9700 (PsConvertToGuiThread.c)
 *     PspChangeProcessExecutionState @ 0x140ACFA40 (PspChangeProcessExecutionState.c)
 *     NtSetSystemInformation @ 0x140AE2BE0 (NtSetSystemInformation.c)
 * Callees:
 *     ExReferenceCallBackBlock @ 0x14022E890 (ExReferenceCallBackBlock.c)
 *     ExDereferenceCallBackBlock @ 0x14043DD80 (ExDereferenceCallBackBlock.c)
 *     PsSessionGetWin32Callouts @ 0x140463D20 (PsSessionGetWin32Callouts.c)
 *     PspUpdateCalloutParameters @ 0x1404E64C0 (PspUpdateCalloutParameters.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PsInvokeWin32Callout(int a1, __int128 *a2, int a3, __int64 a4)
{
  __int64 v4; // rbp
  __int128 *v5; // rbx
  _RTL_RUN_ONCE *Win32Callouts; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _EX_RUNDOWN_REF *v10; // rdi
  unsigned int v11; // ebx
  __int128 v13; // [rsp+20h] [rbp-18h] BYREF

  v4 = a1;
  DWORD2(v13) = 0;
  v5 = a2;
  *(_QWORD *)&v13 = 0LL;
  if ( !a2 )
  {
    v5 = &v13;
    v13 = 0LL;
  }
  if ( !(unsigned int)PspUpdateCalloutParameters(a1, (__int64)v5, a3, a4) )
    return 3221225485LL;
  Win32Callouts = PsSessionGetWin32Callouts();
  v10 = ExReferenceCallBackBlock((signed __int64 *)Win32Callouts, v7, v8, v9);
  if ( v10 )
  {
    v11 = guard_dispatch_icall_no_overrides(v10[2].Count, v4);
    ExDereferenceCallBackBlock((signed __int64 *)Win32Callouts, v10);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v11;
}
