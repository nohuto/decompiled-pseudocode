/*
 * XREFs of ?BeginApplyWindowAction@CRecalcProp@@QEAA_NPEAUtagWND@@@Z @ 0x1402C20DC
 * Callers:
 *     ?BeginApplyWindowAction@DesktopRecalc@@YA_NPEAUtagWND@@@Z @ 0x1402C2260 (-BeginApplyWindowAction@DesktopRecalc@@YA_NPEAUtagWND@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400A5B9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 */

bool __fastcall CRecalcProp::BeginApplyWindowAction(CRecalcProp *this, struct tagWND *a2)
{
  char v3; // si
  bool v4; // bp
  bool v5; // r14
  __int64 v6; // rbx
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  bool v10; // bl
  __int64 v11; // rax
  int v12; // r8d
  int v13; // edx
  bool result; // al
  __int64 v15; // rcx

  v3 = 1;
  v4 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v5 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v6 = *(_QWORD *)a2;
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
    LOBYTE(v8) = v5;
    LOBYTE(v9) = v4;
    WPP_RECORDER_AND_TRACE_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v9,
      v8,
      *(_QWORD *)(UserSessionState + 69416),
      4,
      7,
      93,
      (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
      v6);
  }
  if ( *((_DWORD *)this + 6) == 1 )
  {
    result = 1;
    *(_QWORD *)(*((_QWORD *)this + 4) + 8LL) = *((_QWORD *)this + 5);
    v15 = *((_QWORD *)this + 4);
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = v15;
    *((_DWORD *)this + 6) = 2;
  }
  else
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
    {
      v3 = 0;
    }
    v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v3 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v11 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
      LOBYTE(v12) = v10;
      LOBYTE(v13) = v3;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v13,
        v12,
        *(_QWORD *)(v11 + 69416),
        3,
        7,
        94,
        (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids);
    }
    return 0;
  }
  return result;
}
