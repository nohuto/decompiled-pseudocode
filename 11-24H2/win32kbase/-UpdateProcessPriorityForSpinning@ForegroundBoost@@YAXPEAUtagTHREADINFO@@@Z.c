/*
 * XREFs of ?UpdateProcessPriorityForSpinning@ForegroundBoost@@YAXPEAUtagTHREADINFO@@@Z @ 0x140164430
 * Callers:
 *     <none>
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B060 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B0F4 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C0560 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ForegroundBoost::_anonymous_namespace_::IsProcessForegroundBoostedNoSpin @ 0x1400FFE58 (ForegroundBoost--_anonymous_namespace_--IsProcessForegroundBoostedNoSpin.c)
 *     ForegroundBoost::_anonymous_namespace_::IsProcessBackground @ 0x1400FFE74 (ForegroundBoost--_anonymous_namespace_--IsProcessBackground.c)
 *     ForegroundBoost::_anonymous_namespace_::GetProcessPriorityByClass @ 0x1400FFE90 (ForegroundBoost--_anonymous_namespace_--GetProcessPriorityByClass.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ForegroundBoost::_anonymous_namespace_::SetForegroundPriorityProcess @ 0x1401AC8F8 (ForegroundBoost--_anonymous_namespace_--SetForegroundPriorityProcess.c)
 */

void __fastcall ForegroundBoost::UpdateProcessPriorityForSpinning(ForegroundBoost *this, struct tagTHREADINFO *a2)
{
  struct W32_PUSH_LOCK *v3; // r12
  __int64 v4; // r14
  __int16 v5; // ax
  __int64 v6; // rcx
  int v7; // edx
  char v8; // di
  char v9; // r15
  int v10; // ebx
  __int64 UserSessionState; // rax
  __int64 i; // rcx
  __int64 v13; // rdx
  char v14; // si
  char v15; // r15
  int v16; // ebx
  __int64 v17; // rax

  v3 = (struct W32_PUSH_LOCK *)(W32GetUserSessionState(this) + 18912);
  W32AcquirePushLockExclusiveEx(v3, 0);
  v4 = *((_QWORD *)this + 58);
  v5 = _InterlockedCompareExchange((volatile signed __int32 *)this + 132, 0, 0);
  v6 = *((_QWORD *)this + 58);
  v7 = *(_DWORD *)(v6 + 12);
  if ( (v5 & 0x400) != 0 )
  {
    if ( (v7 & 0x800) == 0 )
    {
      if ( ForegroundBoost::_anonymous_namespace_::IsProcessForegroundBoostedNoSpin() )
      {
        v8 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
        v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v10 = *(_DWORD *)(v4 + 56);
          UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
          WPP_RECORDER_AND_TRACE_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v8,
            v9,
            *(_QWORD *)(UserSessionState + 69400),
            4u,
            0xDu,
            0x1Bu,
            (__int64)&WPP_1d51b6299ead376684ffd9d69d49bf5d_Traceguids,
            v10);
        }
        ForegroundBoost::_anonymous_namespace_::SetForegroundPriorityProcess(v4, 2LL, 0LL);
      }
      *(_DWORD *)(*((_QWORD *)this + 58) + 12LL) |= 0x800u;
    }
  }
  else if ( (v7 & 0x800) != 0 )
  {
    for ( i = *(_QWORD *)(v6 + 328); i; i = *(_QWORD *)(i + 704) )
    {
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)(i + 528), 0, 0) & 0x400) != 0 )
        goto LABEL_31;
    }
    if ( !ForegroundBoost::_anonymous_namespace_::IsProcessBackground() )
    {
      if ( (unsigned int)ForegroundBoost::_anonymous_namespace_::GetProcessPriorityByClass(*((_QWORD *)this + 58), v13) != 2 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 883LL);
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) == 0
        || (v14 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v14 = 0;
      }
      v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v16 = *(_DWORD *)(v4 + 56);
        v17 = W32GetUserSessionState(WPP_GLOBAL_Control);
        WPP_RECORDER_AND_TRACE_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v14,
          v15,
          *(_QWORD *)(v17 + 69400),
          4u,
          0xDu,
          0x1Cu,
          (__int64)&WPP_1d51b6299ead376684ffd9d69d49bf5d_Traceguids,
          v16);
      }
      ForegroundBoost::_anonymous_namespace_::SetForegroundPriorityProcess(v4, 1LL, 0LL);
    }
    *(_DWORD *)(*((_QWORD *)this + 58) + 12LL) &= ~0x800u;
  }
LABEL_31:
  W32ReleasePushLockExclusiveEx(v3, 0LL);
}
