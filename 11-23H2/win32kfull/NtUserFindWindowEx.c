/*
 * XREFs of NtUserFindWindowEx @ 0x1C003B4B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FindWindowEx@@YAPEAUtagWND@@PEAU1@0GPEBG@Z @ 0x1C003B7D0 (-_FindWindowEx@@YAPEAUtagWND@@PEAU1@0GPEBG@Z.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C003B918 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     ?EnforceConsistency@AtomicExecutionCheck@@AEAAXXZ @ 0x1C00F6584 (-EnforceConsistency@AtomicExecutionCheck@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall NtUserFindWindowEx(__int64 a1, __int64 a2, ULONG64 a3, ULONG64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rbx
  AtomicExecutionCheck *v12; // rcx
  __int64 CurrentThreadWin32Thread; // rax
  struct tagWND *v14; // rdi
  struct tagWND *v15; // r14
  int v16; // r8d
  const unsigned __int16 *v17; // rdx
  int v18; // ecx
  const unsigned __int16 *v19; // rsi
  ULONG64 v20; // r9
  ULONG64 v21; // r8
  struct tagWND *Window; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  struct tagTHREADINFO *v29; // rax
  __int64 v30; // rax
  unsigned __int16 Atom; // [rsp+20h] [rbp-298h]
  unsigned __int16 v32[256]; // [rsp+70h] [rbp-248h] BYREF

  v11 = 0LL;
  if ( (unsigned __int8)ShouldRunShared(1LL) )
    EnterSharedCrit(v9, v8, v10);
  else
    EnterCrit(0LL, 1LL);
  AtomicExecutionCheck::EnforceConsistency(v12);
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
  ++*(_DWORD *)(CurrentThreadWin32Thread + 48);
  if ( a1 == -3 )
  {
    v14 = 0LL;
    v29 = PtiCurrentShared();
    if ( v29 )
    {
      v30 = *((_QWORD *)v29 + 57);
      if ( v30 )
        v14 = *(struct tagWND **)(v30 + 104);
    }
  }
  else if ( a1 )
  {
    v14 = (struct tagWND *)ValidateHwnd(a1);
    if ( !v14 )
      goto LABEL_43;
  }
  else
  {
    v14 = 0LL;
  }
  if ( a2 )
  {
    v15 = (struct tagWND *)ValidateHwnd(a2);
    if ( !v15 )
      goto LABEL_43;
  }
  else
  {
    v15 = 0LL;
  }
  Atom = 0;
  if ( a3 >= MmUserProbeAddress )
    a3 = MmUserProbeAddress;
  v16 = *(_DWORD *)a3;
  v17 = *(const unsigned __int16 **)(a3 + 8);
  if ( a4 >= MmUserProbeAddress )
    a4 = MmUserProbeAddress;
  v18 = *(_DWORD *)a4;
  v19 = *(const unsigned __int16 **)(a4 + 8);
  if ( ((unsigned __int64)v17 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( ((unsigned __int8)v17 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v20 = (ULONG64)v17 + (unsigned __int16)v16 + 2;
    if ( v20 <= (unsigned __int64)v17 || v20 >= MmUserProbeAddress )
      ExRaiseAccessViolation();
    if ( (unsigned __int16)v16 > (unsigned __int16)HIWORD(*(_DWORD *)a3) || (v16 & 1) != 0 )
    {
      if ( (v16 & 1) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 9730LL);
      ExRaiseAccessViolation();
    }
  }
  if ( ((unsigned __int8)v19 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v21 = (ULONG64)v19 + (unsigned __int16)v18 + 2;
  if ( v21 <= (unsigned __int64)v19 || v21 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( (unsigned __int16)v18 > (unsigned __int16)HIWORD(*(_DWORD *)a4) )
  {
    if ( (v18 & 1) == 0 )
      goto LABEL_39;
    goto LABEL_38;
  }
  if ( (v18 & 1) != 0 )
  {
LABEL_38:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 9731LL);
LABEL_39:
    ExRaiseAccessViolation();
  }
  if ( !v17 || ((unsigned __int64)v17 & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    Window = _FindWindowEx(v14, v15, (unsigned __int16)v17, v19);
LABEL_41:
    if ( Window )
      v11 = *(_QWORD *)Window;
    goto LABEL_43;
  }
  if ( RtlStringCchCopyW(v32, 0x100uLL, v17) >= 0 )
    Atom = UserFindAtom(v32);
  if ( Atom )
  {
    Window = _FindWindowEx(v14, v15, Atom, v19);
    goto LABEL_41;
  }
LABEL_43:
  v23 = PsGetCurrentThreadWin32Thread();
  --*(_DWORD *)(v23 + 48);
  UserSessionSwitchLeaveCrit(v25, v24, v26, v27);
  return v11;
}
