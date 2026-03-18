/*
 * XREFs of ?MonitorAcquireMonitorPendingEvent@@YAJPEAXPEAPEAU_MONITOR_PENDING_EVENT@@@Z @ 0x1403D01A8
 * Callers:
 *     ?PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403CA6BC (-PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCEN.c)
 *     ?PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403CB400 (-PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B150 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140031C38 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 */

__int64 __fastcall MonitorAcquireMonitorPendingEvent(
        DXGADAPTER *this,
        struct _MONITOR_PENDING_EVENT **a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v6; // ebx
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rax
  struct _MONITOR_PENDING_EVENT *v10; // rcx
  __int64 result; // rax

  v6 = 0;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  WdLogGlobalForLineNumber = 4822;
  if ( !this || !a2 )
    return 3221225485LL;
  *a2 = 0LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4845;
  }
  v7 = *((_QWORD *)this + 390);
  if ( !v7 )
  {
    WdLogSingleEntry1(2LL, this);
    result = 3221225659LL;
    WdLogGlobalForLineNumber = 4849;
    return result;
  }
  v8 = *(_QWORD *)(v7 + 112);
  if ( !v8 )
  {
    WdLogSingleEntry1(2LL, this);
    WdLogGlobalForLineNumber = 4862;
    return 3221225485LL;
  }
  if ( !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(*(ADAPTER_DISPLAY **)(v8 + 24)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 839;
  }
  v9 = *(_QWORD *)(v8 + 688);
  if ( v9 )
  {
    if ( *(int *)(v9 + 16) <= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 848;
    }
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v8 + 688) + 16LL));
  }
  v10 = *(struct _MONITOR_PENDING_EVENT **)(v8 + 688);
  *a2 = v10;
  if ( !v10 )
    return (unsigned int)-1073741823;
  return v6;
}
