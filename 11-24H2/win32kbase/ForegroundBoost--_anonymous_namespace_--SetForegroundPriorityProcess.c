/*
 * XREFs of ForegroundBoost::_anonymous_namespace_::SetForegroundPriorityProcess @ 0x1401AC8F8
 * Callers:
 *     ?UpdateProcessPriorityForSpinning@ForegroundBoost@@YAXPEAUtagTHREADINFO@@@Z @ 0x140164430 (-UpdateProcessPriorityForSpinning@ForegroundBoost@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ForegroundBoost::_anonymous_namespace_::_SetForegroundPriority @ 0x1401ACF94 (ForegroundBoost--_anonymous_namespace_--_SetForegroundPriority.c)
 *     ForegroundBoost::_anonymous_namespace_::_SetForegroundPriority_Old @ 0x1401AD1B0 (ForegroundBoost--_anonymous_namespace_--_SetForegroundPriority_Old.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C0560 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ForegroundBoost::_anonymous_namespace_::IsProcessBackground @ 0x1400FFE74 (ForegroundBoost--_anonymous_namespace_--IsProcessBackground.c)
 *     ForegroundBoost::_anonymous_namespace_::SetProcessPriorityByClass @ 0x140164034 (ForegroundBoost--_anonymous_namespace_--SetProcessPriorityByClass.c)
 */

char __fastcall ForegroundBoost::_anonymous_namespace_::SetForegroundPriorityProcess(__int64 a1, int a2, int a3)
{
  __int64 v3; // r14
  char v4; // bl
  char v8; // di
  _UNKNOWN **v9; // rax
  char v10; // bp
  int v11; // ebx
  __int64 UserSessionState; // rax
  char v13; // bp
  char v14; // r15
  int v15; // ebx
  __int64 v16; // rax
  char ProcessPriorityClass; // al
  __int64 v18; // rdx
  __int64 v19; // rdx

  v3 = *(_QWORD *)a1;
  v4 = 0;
  if ( (*(_DWORD *)(a1 + 12) & 0x400000) != 0 )
  {
    if ( ForegroundBoost::_anonymous_namespace_::IsProcessBackground() )
    {
      v8 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v9 = &WPP_RECORDER_INITIALIZED;
      v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v11 = *(_DWORD *)(a1 + 56);
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v9) = WPP_RECORDER_AND_TRACE_SF_D(
                       *((_QWORD *)WPP_GLOBAL_Control + 3),
                       v8,
                       v10,
                       *(_QWORD *)(UserSessionState + 69400),
                       4u,
                       0xDu,
                       0xEu,
                       (__int64)&WPP_1d51b6299ead376684ffd9d69d49bf5d_Traceguids,
                       v11);
      }
      return (char)v9;
    }
    v13 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = *(_DWORD *)(a1 + 56);
      v16 = W32GetUserSessionState(WPP_GLOBAL_Control);
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v13,
        v14,
        *(_QWORD *)(v16 + 69400),
        4u,
        0xDu,
        0xFu,
        (__int64)&WPP_1d51b6299ead376684ffd9d69d49bf5d_Traceguids,
        v15);
    }
    a2 = 0;
    ProcessPriorityClass = PsGetProcessPriorityClass(v3);
    LOBYTE(v18) = 1;
    v4 = ProcessPriorityClass;
    PsSetProcessPriorityClass(v3, v18);
  }
  LOBYTE(v9) = ForegroundBoost::_anonymous_namespace_::SetProcessPriorityByClass((__int64 *)a1, a2, a3);
  if ( v4 )
  {
    LOBYTE(v19) = v4;
    LOBYTE(v9) = PsSetProcessPriorityClass(v3, v19);
  }
  return (char)v9;
}
