/*
 * XREFs of ?DeboostAllProcesses@ForegroundBoost@@YAXXZ @ 0x1401AC0F4
 * Callers:
 *     ?ClearPolicy@tagWINDOWSTATION@@QEAAXW4WindowStationPolicy@@@Z @ 0x1401A7A30 (-ClearPolicy@tagWINDOWSTATION@@QEAAXW4WindowStationPolicy@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140069000 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C0560 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ApiSetEditionProcessForegroundPriorityChanged @ 0x14011C0BC (ApiSetEditionProcessForegroundPriorityChanged.c)
 */

void __fastcall ForegroundBoost::DeboostAllProcesses(ForegroundBoost *this)
{
  struct W32_PUSH_LOCK *v1; // rbx
  CTouchProcessor *v2; // rcx
  char v3; // bp
  bool v4; // di
  bool v5; // si
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx
  __int64 i; // rsi
  char v10; // r14
  char v11; // r15
  int v12; // edi
  __int64 v13; // rax
  bool v14; // di
  __int64 v15; // rax
  int v16; // r8d
  int v17; // edx
  __int64 v18; // [rsp+40h] [rbp-28h]

  v1 = (struct W32_PUSH_LOCK *)(W32GetUserSessionState(this) + 18912);
  W32AcquirePushLockSharedEx(v1, 0);
  v2 = WPP_GLOBAL_Control;
  v3 = 1;
  v4 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) != 0
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
      20,
      (__int64)&WPP_1d51b6299ead376684ffd9d69d49bf5d_Traceguids);
  }
  for ( i = *(_QWORD *)(W32GetUserSessionState(v2) + 36432); i; i = *(_QWORD *)(i + 1120) )
  {
    v10 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = *(_DWORD *)(i + 56);
      v13 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LODWORD(v18) = v12;
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v10,
        v11,
        *(_QWORD *)(v13 + 69400),
        4u,
        0xDu,
        0x15u,
        (__int64)&WPP_1d51b6299ead376684ffd9d69d49bf5d_Traceguids,
        v18);
    }
    PsSetProcessPriorityByClass(*(_QWORD *)i, 0LL);
    ApiSetEditionProcessForegroundPriorityChanged(i, 0LL);
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v3 = 0;
  }
  v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v15 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v16) = v14;
    LOBYTE(v17) = v3;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v17,
      v16,
      *(_QWORD *)(v15 + 69400),
      4,
      13,
      22,
      (__int64)&WPP_1d51b6299ead376684ffd9d69d49bf5d_Traceguids);
  }
  ExReleasePushLockSharedEx(v1, 0LL);
  KeLeaveCriticalRegion();
}
