/*
 * XREFs of Win32kBaseUserInitialize @ 0x140167110
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?UserInitialize@@YAJXZ @ 0x14013264C (-UserInitialize@@YAJXZ.c)
 *     InitializeGreCSRSS @ 0x14015573C (InitializeGreCSRSS.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 *     InitializePowerRequestList @ 0x1402E5290 (InitializePowerRequestList.c)
 */

__int64 __fastcall Win32kBaseUserInitialize(HANDLE Handle, __int64 a2)
{
  char v4; // bl
  bool v5; // di
  bool v6; // si
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // esi
  bool v13; // di
  __int64 v14; // rax
  int v15; // edx
  int v16; // r8d
  int (*v17)(void); // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int8 (*v24)(void); // rax
  ULONG_PTR CurrentProcess; // rax
  __int64 result; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  int (*v30)(void); // rax
  __int64 v31; // rdx
  __int64 (__fastcall *v32)(__int64); // rax
  __int64 v33; // rcx
  __int64 UserGdiSessionState; // rax
  __int64 ProcessWin32Process; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rcx
  char BugCheckParameter4; // [rsp+20h] [rbp-38h]
  __int16 v44; // [rsp+30h] [rbp-28h]

  v4 = 1;
  v5 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(Handle);
    LOBYTE(v8) = v6;
    LOBYTE(v9) = v5;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v9,
      v8,
      *(_QWORD *)(UserSessionState + 69400),
      4,
      14,
      30,
      (__int64)&WPP_c6ad2250ef6e3ae3eb9ff75238ab5e56_Traceguids);
  }
  v12 = W32RegisterSessionProcess();
  if ( (v12 & 0x80000000) != 0 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v4 = 0;
    }
    v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v4 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v12;
    v14 = W32GetUserSessionState(v11);
    v44 = 31;
    BugCheckParameter4 = 2;
LABEL_43:
    LOBYTE(v16) = v13;
    LOBYTE(v15) = v4;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v15,
      v16,
      *(_QWORD *)(v14 + 69400),
      BugCheckParameter4,
      14,
      v44,
      (__int64)&WPP_c6ad2250ef6e3ae3eb9ff75238ab5e56_Traceguids);
    return v12;
  }
  v17 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v11, v10) + 48) + 3488LL);
  if ( v17 )
  {
    if ( v17() >= 0 )
    {
      v21 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v19, v18) + 48);
      v24 = *(unsigned __int8 (**)(void))(v21 + 3496);
      if ( !v24 || !v24() )
      {
        CurrentProcess = PsGetCurrentProcess(v21, v20, v22, v23);
        KeBugCheckEx(0x91u, 0LL, 0LL, 0LL, CurrentProcess);
      }
    }
  }
  result = InitializePowerRequestList(Handle);
  if ( (int)result >= 0 )
  {
    v29 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v28, v27) + 48);
    v30 = *(int (**)(void))(v29 + 3504);
    if ( v30 && v30() >= 0 )
    {
      v32 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v29, v31) + 48) + 3512LL);
      if ( !v32 )
        return 3221225659LL;
      result = v32(a2);
      if ( (int)result < 0 )
        return result;
    }
    *(_BYTE *)(W32GetUserSessionState(v29) + 604) = 0;
    if ( !(unsigned int)InitializeGreCSRSS() )
      return 3221225473LL;
    UserGdiSessionState = W32GetUserGdiSessionState(v33);
    ProcessWin32Process = PsGetProcessWin32Process(*(_QWORD *)(UserGdiSessionState + 40));
    if ( ProcessWin32Process )
    {
      v36 = -*(_QWORD *)ProcessWin32Process;
      ProcessWin32Process &= -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL);
    }
    *(_DWORD *)(ProcessWin32Process + 12) |= 0x40010u;
    v37 = W32GetUserGdiSessionState(v36);
    v38 = PsGetProcessWin32Process(*(_QWORD *)(v37 + 40));
    if ( v38 )
    {
      v39 = -*(_QWORD *)v38;
      v38 &= -(__int64)(*(_QWORD *)v38 != 0LL);
    }
    *(_QWORD *)(v38 + 816) |= 0x400000uLL;
    v40 = W32GetUserGdiSessionState(v39);
    v41 = PsGetProcessWin32Process(*(_QWORD *)(v40 + 40));
    if ( v41 )
      v41 &= -(__int64)(*(_QWORD *)v41 != 0LL);
    *(_DWORD *)(v41 + 268) = 18;
    v12 = UserInitialize();
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    {
      v4 = 0;
    }
    v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v4 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v12;
    v14 = W32GetUserSessionState(v42);
    v44 = 32;
    BugCheckParameter4 = 4;
    goto LABEL_43;
  }
  return result;
}
