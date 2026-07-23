/*
 * XREFs of NtSetThreadExecutionState @ 0x140AC4920
 * Callers:
 *     <none>
 * Callees:
 *     SessionIsInteractive @ 0x1402B9CEC (SessionIsInteractive.c)
 *     PopPowerRequestCreateCommon @ 0x1402BAAB0 (PopPowerRequestCreateCommon.c)
 *     PoDestroyReasonContext @ 0x1402BC528 (PoDestroyReasonContext.c)
 *     PoCaptureReasonContext @ 0x1402BC6B8 (PoCaptureReasonContext.c)
 *     PsGetSessionIdEx @ 0x14030CBE0 (PsGetSessionIdEx.c)
 *     PopApplyLegacyPowerRequestFlags @ 0x140464798 (PopApplyLegacyPowerRequestFlags.c)
 *     PopGetLegacyPowerRequestFlags @ 0x140477B10 (PopGetLegacyPowerRequestFlags.c)
 *     SSHSupportIsPlatformAoAc @ 0x14048B408 (SSHSupportIsPlatformAoAc.c)
 *     _tlgDefineProvider_annotation__TlgMiTraceHandleProv @ 0x1404AEC10 (_tlgDefineProvider_annotation__TlgMiTraceHandleProv.c)
 *     Feature_ExpandSTEIgnoreReasons__private_IsEnabledDeviceUsageNoInline @ 0x1405CA558 (Feature_ExpandSTEIgnoreReasons__private_IsEnabledDeviceUsageNoInline.c)
 *     PopGetCurrentPdcPhase @ 0x1405D5E10 (PopGetCurrentPdcPhase.c)
 *     PoEnergyContextUpdateComponentPower @ 0x14099B564 (PoEnergyContextUpdateComponentPower.c)
 *     PopAdaptiveGetBootIsSystemInitiated @ 0x1409A17BC (PopAdaptiveGetBootIsSystemInitiated.c)
 *     PopNotifyConsoleUserPresent @ 0x1409A1CB0 (PopNotifyConsoleUserPresent.c)
 *     PopDiagTraceSetThreadExecutionState @ 0x140AC4EB8 (PopDiagTraceSetThreadExecutionState.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
 */

NTSTATUS __cdecl NtSetThreadExecutionState(EXECUTION_STATE NewFlags, EXECUTION_STATE *PreviousFlags)
{
  EXECUTION_STATE *v2; // r12
  EXECUTION_STATE v4; // esi
  unsigned int v5; // r13d
  NTSTATUS v6; // ebx
  struct _KTHREAD *CurrentThread; // r14
  __int64 v8; // rcx
  struct _LIST_ENTRY *Blink; // rbx
  _QWORD *v10; // r14
  char LegacyPowerRequestFlags; // al
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int SessionId; // eax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  bool v37; // bl
  unsigned int v38; // eax
  __int64 v40; // [rsp+20h] [rbp-48h]
  struct _LIST_ENTRY *v41; // [rsp+30h] [rbp-38h] BYREF
  struct _KTHREAD *v42; // [rsp+38h] [rbp-30h]
  EXECUTION_STATE v43; // [rsp+80h] [rbp+18h] BYREF
  PVOID P; // [rsp+88h] [rbp+20h] BYREF

  v2 = PreviousFlags;
  v43 = 0;
  P = 0LL;
  LOBYTE(PreviousFlags) = KeGetCurrentThread()->PreviousMode;
  v4 = 0;
  v5 = 0;
  if ( !(_BYTE)PreviousFlags )
    return -1073741637;
  CurrentThread = KeGetCurrentThread();
  v42 = CurrentThread;
  if ( (NewFlags & 0x7FFFFFBC) != 0 || (NewFlags & 0x80000040) == 0x40 )
    return -1073741811;
  v8 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)v2 < 0x7FFFFFFF0000LL )
    v8 = (__int64)v2;
  *(_DWORD *)v8 = *(_DWORD *)v8;
  Blink = CurrentThread[1].ApcState.ApcListHead[1].Blink;
  v41 = Blink;
  if ( Blink || (NewFlags & 0x80000000) == 0 )
  {
LABEL_15:
    LegacyPowerRequestFlags = PopGetLegacyPowerRequestFlags(Blink, NewFlags, (int *)&v43);
    *v2 = v43;
    if ( (NewFlags & 0x80000000) != 0 )
    {
      PopApplyLegacyPowerRequestFlags(Blink, NewFlags, LegacyPowerRequestFlags);
      return 0;
    }
    if ( !(unsigned int)Feature_ExpandSTEIgnoreReasons__private_IsEnabledDeviceUsageNoInline() )
    {
LABEL_29:
      PopDiagTraceSetThreadExecutionState(CurrentThread, NewFlags, v4, v5);
      if ( (unsigned int)Feature_ExpandSTEIgnoreReasons__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( (v4 & 1) != 0 )
        {
          PopAcquirePolicyLock(v19, v18);
          tlgDefineProvider_annotation__TlgMiTraceHandleProv();
          PopReleasePolicyLock(v21, v20, v22, v23, v40);
        }
        if ( (v4 & 2) == 0 )
          return 0;
        PoEnergyContextUpdateComponentPower((__int64)KeGetCurrentThread()->ApcState.Process, 12, 3LL);
        SessionId = PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        if ( !SessionIsInteractive(SessionId) )
          return 0;
      }
      else
      {
        if ( (NewFlags & 1) != 0 )
        {
          PopAcquirePolicyLock(v19, v18);
          tlgDefineProvider_annotation__TlgMiTraceHandleProv();
          PopReleasePolicyLock(v28, v27, v29, v30, v40);
        }
        if ( (NewFlags & 2) == 0 )
          return 0;
        PoEnergyContextUpdateComponentPower((__int64)KeGetCurrentThread()->ApcState.Process, 12, 3LL);
        PopAcquirePolicyLock(v32, v31);
        v37 = SSHSupportIsPlatformAoAc() && !PopLidOpened && !PopConsoleExternalDisplayConnected
           || PopAdaptiveGetBootIsSystemInitiated();
        PopReleasePolicyLock(v34, v33, v35, v36, v40);
        v38 = PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        if ( !SessionIsInteractive(v38) || v37 )
          return 0;
      }
      LOBYTE(v25) = 1;
      PopNotifyConsoleUserPresent(v25, 8u, v26);
      return 0;
    }
    v4 = NewFlags;
    if ( (int)PopGetCurrentPdcPhase() >= 2 )
    {
      v5 = 1;
      v4 = NewFlags & 0xFFFFFFFC;
      goto LABEL_29;
    }
    if ( (NewFlags & 2) == 0 )
      goto LABEL_29;
    PopAcquirePolicyLock(v13, v12);
    if ( !SSHSupportIsPlatformAoAc() || PopLidOpened || PopConsoleExternalDisplayConnected )
    {
      if ( !PopAdaptiveGetBootIsSystemInitiated() )
      {
LABEL_28:
        PopReleasePolicyLock(v15, v14, v16, v17, v40);
        goto LABEL_29;
      }
      v5 = 3;
    }
    else
    {
      v5 = 2;
    }
    v4 = NewFlags & 0xFFFFFFFD;
    goto LABEL_28;
  }
  v6 = PoCaptureReasonContext(0LL, (__int64)PreviousFlags, 0LL, 1, 0LL, &P);
  if ( v6 < 0 )
    return v6;
  v10 = P;
  v6 = PopPowerRequestCreateCommon(P, 0, &v41);
  if ( v6 >= 0 )
  {
    Blink = v41;
    CurrentThread = v42;
    v42[1].ApcState.ApcListHead[1].Blink = v41;
    goto LABEL_15;
  }
  if ( v10 )
    PoDestroyReasonContext(v10);
  return v6;
}
