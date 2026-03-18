/*
 * XREFs of ForegroundBoost::_anonymous_namespace_::_SetForegroundPriority @ 0x1401ACF94
 * Callers:
 *     ?SetForegroundPriority@ForegroundBoost@@YAXPEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@W4ForegroundBoostSource@1@@Z @ 0x14006C430 (-SetForegroundPriority@ForegroundBoost@@YAXPEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@W4Fore.c)
 *     ?SetForegroundPriority@ForegroundBoost@@YAXPEAUtagPROCESSINFO@@W4ForegroundPriorityClass@1@W4ForegroundBoostSource@1@@Z @ 0x140163FE0 (-SetForegroundPriority@ForegroundBoost@@YAXPEAUtagPROCESSINFO@@W4ForegroundPriorityClass@1@W4For.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B060 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B0F4 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14009782C (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     ForegroundBoost::_anonymous_namespace_::GetProcessPriorityByClass @ 0x1400FFE90 (ForegroundBoost--_anonymous_namespace_--GetProcessPriorityByClass.c)
 *     WPP_RECORDER_AND_TRACE_SF_dDdd @ 0x14010ECE0 (WPP_RECORDER_AND_TRACE_SF_dDdd.c)
 *     ApiSetEditionProcessForegroundPriorityChanged @ 0x14011C0BC (ApiSetEditionProcessForegroundPriorityChanged.c)
 *     ForegroundBoost::_anonymous_namespace_::IsBoostAllowed @ 0x1401AC410 (ForegroundBoost--_anonymous_namespace_--IsBoostAllowed.c)
 *     ForegroundBoost::_anonymous_namespace_::SetForegroundPriorityProcess @ 0x1401AC8F8 (ForegroundBoost--_anonymous_namespace_--SetForegroundPriorityProcess.c)
 */

char __fastcall ForegroundBoost::_anonymous_namespace_::_SetForegroundPriority(__int64 a1, int a2, int a3)
{
  unsigned int v3; // esi
  char v5; // r14
  int v6; // ebp
  __int64 UserSessionState; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int ProcessPriorityByClass; // r13d
  char v11; // r12
  __int64 v12; // rax
  int v13; // edi
  __int64 v14; // rdx
  int v15; // ebp
  char v16; // r12
  int v17; // edi
  __int64 v18; // rax
  __int64 v19; // rcx
  char result; // al
  bool v21; // zf
  int v22; // [rsp+20h] [rbp-78h]
  char v23; // [rsp+A8h] [rbp+10h]

  v3 = 0;
  v5 = 1;
  if ( a2 == 1 )
    v6 = ((*(_DWORD *)(a1 + 12) & 0x800) != 0) + 1;
  else
    v6 = 0;
  UserSessionState = W32GetUserSessionState(a1);
  W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)(UserSessionState + 18912), 0);
  ProcessPriorityByClass = ForegroundBoost::_anonymous_namespace_::GetProcessPriorityByClass(a1, v8);
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) == 0
    || (v11 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v11 = 0;
  }
  v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( !v11 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v13 = a3;
  }
  else
  {
    v12 = W32GetUserSessionState(v9);
    v13 = a3;
    WPP_RECORDER_AND_TRACE_SF_dDdd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v11,
      v23,
      *(_QWORD *)(v12 + 69400),
      v22,
      0xDu,
      0x10u,
      (__int64)&WPP_1d51b6299ead376684ffd9d69d49bf5d_Traceguids);
  }
  ForegroundBoost::_anonymous_namespace_::SetForegroundPriorityProcess(a1, v6, v13);
  v15 = ForegroundBoost::_anonymous_namespace_::GetProcessPriorityByClass(a1, v14);
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v5 = 0;
  }
  v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v17 = *(_DWORD *)(a1 + 56);
    v18 = W32GetUserSessionState(&WPP_GLOBAL_Control);
    WPP_RECORDER_AND_TRACE_SF_Dd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v5,
      v16,
      *(_QWORD *)(v18 + 69400),
      4u,
      0xDu,
      0x11u,
      (__int64)&WPP_1d51b6299ead376684ffd9d69d49bf5d_Traceguids,
      v17,
      v15);
  }
  W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)(UserSessionState + 18912), 0LL);
  result = ForegroundBoost::_anonymous_namespace_::IsBoostAllowed(v19);
  if ( result && v15 != ProcessPriorityByClass )
  {
    v21 = v15 == 0;
    if ( v15 )
    {
      if ( ProcessPriorityByClass )
        return result;
      v21 = v15 == 0;
    }
    LOBYTE(v3) = !v21;
    return (unsigned __int8)ApiSetEditionProcessForegroundPriorityChanged(a1, v3);
  }
  return result;
}
