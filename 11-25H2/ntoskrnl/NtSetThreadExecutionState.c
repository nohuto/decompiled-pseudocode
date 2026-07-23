/*
 * XREFs of NtSetThreadExecutionState @ 0x140962C60
 * Callers:
 *     <none>
 * Callees:
 *     PsGetSessionIdEx @ 0x140246440 (PsGetSessionIdEx.c)
 *     PoCaptureReasonContext @ 0x140425AF8 (PoCaptureReasonContext.c)
 *     PopPowerRequestCreateCommon @ 0x140425C44 (PopPowerRequestCreateCommon.c)
 *     SessionIsInteractive @ 0x140426478 (SessionIsInteractive.c)
 *     PopApplyLegacyPowerRequestFlags @ 0x14046D188 (PopApplyLegacyPowerRequestFlags.c)
 *     PopGetLegacyPowerRequestFlags @ 0x14047BA48 (PopGetLegacyPowerRequestFlags.c)
 *     SSHSupportIsPlatformAoAc @ 0x140491754 (SSHSupportIsPlatformAoAc.c)
 *     _tlgDefineProvider_annotation__TlgMiTraceHandleProv @ 0x1404B4AB0 (_tlgDefineProvider_annotation__TlgMiTraceHandleProv.c)
 *     PoDestroyReasonContext @ 0x1404E90C0 (PoDestroyReasonContext.c)
 *     PopDiagTraceSetThreadExecutionState @ 0x140962EB0 (PopDiagTraceSetThreadExecutionState.c)
 *     PoEnergyContextUpdateComponentPower @ 0x140962FE8 (PoEnergyContextUpdateComponentPower.c)
 *     PopAdaptiveGetBootIsSystemInitiated @ 0x140963574 (PopAdaptiveGetBootIsSystemInitiated.c)
 *     PopNotifyConsoleUserPresent @ 0x1409638B0 (PopNotifyConsoleUserPresent.c)
 *     PopAcquirePolicyLock @ 0x140B57E80 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B57ED0 (PopReleasePolicyLock.c)
 */

NTSTATUS __cdecl NtSetThreadExecutionState(EXECUTION_STATE NewFlags, EXECUTION_STATE *PreviousFlags)
{
  char PreviousMode; // dl
  struct _KTHREAD *CurrentThread; // r15
  __int64 v6; // rcx
  struct _LIST_ENTRY *Blink; // rbx
  char LegacyPowerRequestFlags; // al
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  bool v21; // bl
  unsigned int SessionId; // eax
  __int64 v23; // rcx
  NTSTATUS v24; // ebx
  _QWORD *v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // [rsp+20h] [rbp-48h]
  struct _LIST_ENTRY *v31; // [rsp+30h] [rbp-38h] BYREF
  EXECUTION_STATE v32; // [rsp+80h] [rbp+18h] BYREF
  PVOID P; // [rsp+88h] [rbp+20h] BYREF

  v32 = 0;
  P = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !PreviousMode )
    return -1073741637;
  CurrentThread = KeGetCurrentThread();
  if ( (NewFlags & 0x7FFFFFBC) != 0 || (NewFlags & 0x40) != 0 && (NewFlags & 0x80000000) == 0 )
    return -1073741811;
  v6 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)PreviousFlags < 0x7FFFFFFF0000LL )
    v6 = (__int64)PreviousFlags;
  *(_DWORD *)v6 = *(_DWORD *)v6;
  Blink = CurrentThread[1].ApcState.ApcListHead[1].Blink;
  v31 = Blink;
  if ( Blink || (NewFlags & 0x80000000) == 0 )
    goto LABEL_7;
  v24 = PoCaptureReasonContext(0LL, PreviousMode, 0LL, 1, 0LL, (__int64 *)&P);
  if ( v24 < 0 )
    return v24;
  v26 = P;
  v24 = PopPowerRequestCreateCommon(P, 0, &v31);
  if ( v24 >= 0 )
  {
    Blink = v31;
    CurrentThread[1].ApcState.ApcListHead[1].Blink = v31;
LABEL_7:
    LegacyPowerRequestFlags = PopGetLegacyPowerRequestFlags(Blink, NewFlags, (int *)&v32);
    *PreviousFlags = v32;
    if ( (NewFlags & 0x80000000) != 0 )
    {
      PopApplyLegacyPowerRequestFlags(Blink, NewFlags, LegacyPowerRequestFlags);
    }
    else
    {
      PopDiagTraceSetThreadExecutionState(CurrentThread, NewFlags);
      if ( (NewFlags & 1) != 0 )
      {
        PopAcquirePolicyLock(v10, v9);
        tlgDefineProvider_annotation__TlgMiTraceHandleProv();
        PopReleasePolicyLock(v12, v11, v13, v14, v30);
      }
      if ( (NewFlags & 2) != 0 )
      {
        PoEnergyContextUpdateComponentPower(KeGetCurrentThread()->ApcState.Process, 12LL);
        PopAcquirePolicyLock(v16, v15);
        v21 = SSHSupportIsPlatformAoAc() && !PopLidOpened && !PopConsoleExternalDisplayConnected
           || (unsigned __int8)PopAdaptiveGetBootIsSystemInitiated() != 0;
        PopReleasePolicyLock(v18, v17, v19, v20, v30);
        SessionId = PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        if ( SessionIsInteractive(SessionId) && !v21 )
        {
          LOBYTE(v23) = 1;
          PopNotifyConsoleUserPresent(v23, 8LL);
        }
      }
    }
    return 0;
  }
  if ( v26 )
    PoDestroyReasonContext(v26, v27, v28, v29);
  return v24;
}
