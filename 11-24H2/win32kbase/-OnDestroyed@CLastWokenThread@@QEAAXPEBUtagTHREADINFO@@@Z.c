/*
 * XREFs of ?OnDestroyed@CLastWokenThread@@QEAAXPEBUtagTHREADINFO@@@Z @ 0x140110E88
 * Callers:
 *     xxxDestroyThreadInfo @ 0x14015F444 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B060 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B0F4 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?SetForegroundPriority@ForegroundBoost@@YAXPEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@W4ForegroundBoostSource@1@@Z @ 0x14006C430 (-SetForegroundPriority@ForegroundBoost@@YAXPEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@W4Fore.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CLastWokenThread::OnDestroyed(CLastWokenThread *this, const struct tagTHREADINFO *a2)
{
  const struct tagTHREADINFO *v4; // r9
  __int64 v5; // rcx
  __int64 v6; // rcx

  if ( (_InterlockedCompareExchange((volatile signed __int32 *)a2 + 132, 0, 0) & 1) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 95LL);
  W32AcquirePushLockExclusiveEx(this, 0);
  v4 = (const struct tagTHREADINFO *)*((_QWORD *)this + 1);
  if ( a2 == v4 )
  {
    *((_BYTE *)this + 16) = 0;
    v5 = *(_QWORD *)(*((_QWORD *)a2 + 58) + 328LL);
    if ( !v5 )
    {
      if ( *((_BYTE *)this + 17) )
      {
        ForegroundBoost::SetForegroundPriority((__int64)v4, 0, 0x10u);
        *((_BYTE *)this + 17) = 0;
        *((_QWORD *)this + 3) = 0LL;
      }
      if ( !*(_QWORD *)(W32GetUserSessionState(v5) + 18960) )
      {
        *((_QWORD *)this + 1) = 0LL;
        goto LABEL_11;
      }
      v5 = *(_QWORD *)(W32GetUserSessionState(v6) + 18960);
    }
    *((_QWORD *)this + 1) = v5;
  }
LABEL_11:
  W32ReleasePushLockExclusiveEx(this, 0LL);
}
