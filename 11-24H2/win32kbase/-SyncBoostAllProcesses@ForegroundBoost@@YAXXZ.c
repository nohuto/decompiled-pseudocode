/*
 * XREFs of ?SyncBoostAllProcesses@ForegroundBoost@@YAXXZ @ 0x1401ACC64
 * Callers:
 *     ?SetPolicy@tagWINDOWSTATION@@QEAAXW4WindowStationPolicy@@@Z @ 0x1401A7AD0 (-SetPolicy@tagWINDOWSTATION@@QEAAXW4WindowStationPolicy@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140069000 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C0560 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ForegroundBoost::_anonymous_namespace_::GetProcessPriorityByClass @ 0x1400FFE90 (ForegroundBoost--_anonymous_namespace_--GetProcessPriorityByClass.c)
 *     ApiSetEditionProcessForegroundPriorityChanged @ 0x14011C0BC (ApiSetEditionProcessForegroundPriorityChanged.c)
 */

void __fastcall ForegroundBoost::SyncBoostAllProcesses(ForegroundBoost *this)
{
  struct W32_PUSH_LOCK *v1; // rbx
  CTouchProcessor *v2; // rcx
  char v3; // si
  bool v4; // di
  bool v5; // bp
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx
  __int64 v9; // rdx
  _QWORD *i; // r14
  char v11; // bp
  char v12; // r15
  int v13; // edi
  __int64 v14; // rax
  __int64 v15; // rdx
  char v16; // bp
  char v17; // r15
  int v18; // edi
  __int64 v19; // rax
  bool v20; // di
  __int64 v21; // rax
  int v22; // r8d
  int v23; // edx
  __int64 v24; // [rsp+40h] [rbp-38h]

  v1 = (struct W32_PUSH_LOCK *)(W32GetUserSessionState(this) + 18912);
  W32AcquirePushLockSharedEx(v1, 0);
  v2 = WPP_GLOBAL_Control;
  v3 = 1;
  v4 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && _bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xCu)
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v7) = v5;
    LOBYTE(v8) = v4;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v8,
      v7,
      *(_QWORD *)(UserSessionState + 69400),
      4,
      13,
      23,
      (__int64)&WPP_1d51b6299ead376684ffd9d69d49bf5d_Traceguids);
  }
  for ( i = *(_QWORD **)(W32GetUserSessionState(v2) + 36432); i; i = (_QWORD *)i[140] )
  {
    if ( (unsigned int)ForegroundBoost::_anonymous_namespace_::GetProcessPriorityByClass((__int64)i, v9) == 1 )
    {
      v11 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && _bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xCu)
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v13 = *((_DWORD *)i + 14);
        v14 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LODWORD(v24) = v13;
        WPP_RECORDER_AND_TRACE_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v11,
          v12,
          *(_QWORD *)(v14 + 69400),
          4u,
          0xDu,
          0x18u,
          (__int64)&WPP_1d51b6299ead376684ffd9d69d49bf5d_Traceguids,
          v24);
      }
      v15 = 1LL;
    }
    else
    {
      v16 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && _bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xCu)
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v18 = *((_DWORD *)i + 14);
        v19 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LODWORD(v24) = v18;
        WPP_RECORDER_AND_TRACE_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v16,
          v17,
          *(_QWORD *)(v19 + 69400),
          4u,
          0xDu,
          0x19u,
          (__int64)&WPP_1d51b6299ead376684ffd9d69d49bf5d_Traceguids,
          v24);
      }
      PsSetProcessPriorityByClass(*i, 1LL);
      v15 = 2LL;
    }
    PsSetProcessPriorityByClass(*i, v15);
    ApiSetEditionProcessForegroundPriorityChanged((__int64)i, 1LL);
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xCu)
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v3 = 0;
  }
  v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v21 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v22) = v20;
    LOBYTE(v23) = v3;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v23,
      v22,
      *(_QWORD *)(v21 + 69400),
      4,
      13,
      26,
      (__int64)&WPP_1d51b6299ead376684ffd9d69d49bf5d_Traceguids);
  }
  ExReleasePushLockSharedEx(v1, 0LL);
  KeLeaveCriticalRegion();
}
