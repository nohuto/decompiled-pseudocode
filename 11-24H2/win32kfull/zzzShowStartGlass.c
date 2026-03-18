/*
 * XREFs of zzzShowStartGlass @ 0x1402883D4
 * Callers:
 *     NtUserShowStartGlass @ 0x1402A0F90 (NtUserShowStartGlass.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400A5B9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     zzzCalcStartCursorHide @ 0x14023E640 (zzzCalcStartCursorHide.c)
 */

__int64 __fastcall zzzShowStartGlass(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 CurrentProcessWin32Process; // rax
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 UserSessionState; // rax
  __int64 v7; // rdx
  bool v8; // di
  bool v9; // si
  __int64 v10; // rax
  int v11; // r8d
  int v12; // edx
  bool v13; // di
  bool v14; // si
  __int64 v15; // rax
  int v16; // r8d
  int v17; // edx

  v1 = a1;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v4 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v3 = -*(_QWORD *)CurrentProcessWin32Process;
    v4 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  }
  v5 = *(unsigned int *)(v4 + 12);
  if ( (v5 & 0x400) != 0 )
  {
    UserSessionState = W32GetUserSessionState(v5, v3);
    *(_DWORD *)(UserSessionState + 67056) |= 0x8000000u;
    v8 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v10 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v7);
      LOBYTE(v11) = v9;
      LOBYTE(v12) = v8;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v12,
        v11,
        *(_QWORD *)(v10 + 69416),
        4,
        2,
        21,
        (__int64)&WPP_097ed2134af63c79f9965b85d38c414a_Traceguids);
    }
    v5 = *(unsigned int *)(v4 + 12);
    LODWORD(v5) = v5 | 0x100;
    *(_DWORD *)(v4 + 12) = v5;
    v13 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v14 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v13 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v15 = W32GetUserSessionState(v5, *(_QWORD *)&WPP_GLOBAL_Control);
      LOBYTE(v16) = v14;
      LOBYTE(v17) = v13;
      WPP_RECORDER_AND_TRACE_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v17,
        v16,
        *(_QWORD *)(v15 + 69416),
        4,
        2,
        22,
        (__int64)&WPP_097ed2134af63c79f9965b85d38c414a_Traceguids,
        v4);
      LODWORD(v5) = *(_DWORD *)(v4 + 12);
    }
  }
  *(_DWORD *)(v4 + 12) = v5 | 0x400;
  zzzCalcStartCursorHide(v4, v1);
  return 1LL;
}
