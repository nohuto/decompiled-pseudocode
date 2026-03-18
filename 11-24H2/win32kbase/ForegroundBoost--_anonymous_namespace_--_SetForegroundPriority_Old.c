/*
 * XREFs of ForegroundBoost::_anonymous_namespace_::_SetForegroundPriority_Old @ 0x1401AD1B0
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
 *     ForegroundBoost::_anonymous_namespace_::CanAdjustPriority @ 0x1401ABFF4 (ForegroundBoost--_anonymous_namespace_--CanAdjustPriority.c)
 *     ForegroundBoost::_anonymous_namespace_::SetForegroundPriorityProcess @ 0x1401AC8F8 (ForegroundBoost--_anonymous_namespace_--SetForegroundPriorityProcess.c)
 */

void __fastcall ForegroundBoost::_anonymous_namespace_::_SetForegroundPriority_Old(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4)
{
  unsigned int v4; // esi
  __int64 v5; // rdi
  char v7; // r14
  int v8; // ebp
  struct W32_PUSH_LOCK *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  int ProcessPriorityByClass; // r13d
  char v13; // r12
  __int64 UserSessionState; // rax
  __int64 v15; // rdx
  int v16; // ebp
  char v17; // r12
  int v18; // edi
  __int64 v19; // rax
  bool v20; // zf
  int v21; // [rsp+20h] [rbp-78h]
  char v23; // [rsp+B0h] [rbp+18h]

  v4 = 0;
  v5 = a2;
  v7 = 1;
  if ( a3 == 1 )
    v8 = ((*(_DWORD *)(a1 + 12) & 0x800) != 0) + 1;
  else
    v8 = 0;
  v9 = (struct W32_PUSH_LOCK *)(W32GetUserSessionState(a1) + 18912);
  W32AcquirePushLockExclusiveEx(v9, 0);
  ProcessPriorityByClass = ForegroundBoost::_anonymous_namespace_::GetProcessPriorityByClass(a1, v10);
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) == 0
    || (v13 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v13 = 0;
  }
  v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(v11);
    WPP_RECORDER_AND_TRACE_SF_dDdd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v13,
      v23,
      *(_QWORD *)(UserSessionState + 69400),
      v21,
      0xDu,
      0x12u,
      (__int64)&WPP_1d51b6299ead376684ffd9d69d49bf5d_Traceguids);
    v5 = a2;
  }
  if ( v5 && !ForegroundBoost::_anonymous_namespace_::CanAdjustPriority(v5) )
  {
    W32ReleasePushLockExclusiveEx(v9, 0LL);
    return;
  }
  ForegroundBoost::_anonymous_namespace_::SetForegroundPriorityProcess(a1, v8, a4);
  v16 = ForegroundBoost::_anonymous_namespace_::GetProcessPriorityByClass(a1, v15);
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v7 = 0;
  }
  v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v18 = *(_DWORD *)(a1 + 56);
    v19 = W32GetUserSessionState(&WPP_GLOBAL_Control);
    WPP_RECORDER_AND_TRACE_SF_Dd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v7,
      v17,
      *(_QWORD *)(v19 + 69400),
      4u,
      0xDu,
      0x13u,
      (__int64)&WPP_1d51b6299ead376684ffd9d69d49bf5d_Traceguids,
      v18,
      v16);
  }
  W32ReleasePushLockExclusiveEx(v9, 0LL);
  if ( v16 != ProcessPriorityByClass )
  {
    v20 = v16 == 0;
    if ( v16 )
    {
      if ( ProcessPriorityByClass )
        return;
      v20 = v16 == 0;
    }
    LOBYTE(v4) = !v20;
    ApiSetEditionProcessForegroundPriorityChanged(a1, v4);
  }
}
