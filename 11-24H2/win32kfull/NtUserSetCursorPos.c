/*
 * XREFs of NtUserSetCursorPos @ 0x140092730
 * Callers:
 *     <none>
 * Callees:
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x14004A50C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     UserGetLastError @ 0x1400841A4 (UserGetLastError.c)
 *     ?zzzSetCursorPos@@YA_NHH@Z @ 0x1400928F0 (-zzzSetCursorPos@@YA_NHH@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x140092D78 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x140092DD0 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140189210 (WPP_RECORDER_AND_TRACE_SF_d.c)
 */

_BOOL8 __fastcall NtUserSetCursorPos(__int64 a1, __int64 a2)
{
  int v2; // ebp
  int v3; // r14d
  char v4; // di
  bool v5; // bl
  bool v6; // si
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  bool v10; // al
  _BOOL8 v11; // rbp
  bool v13; // si
  char LastError; // bl
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  int v18; // r8d
  int v19; // edx
  __int64 *v20; // [rsp+90h] [rbp+18h] BYREF

  v2 = a2;
  v3 = a1;
  v4 = 1;
  v5 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v6 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    LOBYTE(v8) = v6;
    LOBYTE(v9) = v5;
    WPP_RECORDER_AND_TRACE_SF_Dd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v9,
      v8,
      *(_QWORD *)(UserSessionState + 69416),
      4,
      20,
      49,
      (__int64)&WPP_50f270925f983674ef77b34f83514a3b_Traceguids,
      v3,
      v2);
  }
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v20, "SetCursorPos", 0LL);
  EnterCrit(0LL, 0LL);
  v10 = zzzSetCursorPos(v3, v2);
  v11 = v10;
  if ( !v10 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
    {
      v4 = 0;
    }
    v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LastError = UserGetLastError();
      v17 = W32GetUserSessionState(v16, v15);
      LOBYTE(v18) = v13;
      LOBYTE(v19) = v4;
      WPP_RECORDER_AND_TRACE_SF_d(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v19,
        v18,
        *(_QWORD *)(v17 + 69416),
        2,
        20,
        50,
        (__int64)&WPP_50f270925f983674ef77b34f83514a3b_Traceguids,
        LastError);
    }
  }
  UserSessionSwitchLeaveCrit();
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v20);
  return v11;
}
