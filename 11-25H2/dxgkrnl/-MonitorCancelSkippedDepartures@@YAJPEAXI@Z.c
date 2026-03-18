/*
 * XREFs of ?MonitorCancelSkippedDepartures@@YAJPEAXI@Z @ 0x1403D1ED4
 * Callers:
 *     DpiPdoHandleChildConnectionChange @ 0x1404092C8 (DpiPdoHandleChildConnectionChange.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400294B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_CancelSkippedDepartures@MONITOR_MGR@@QEAAJI@Z @ 0x1403D1FA8 (-_CancelSkippedDepartures@MONITOR_MGR@@QEAAJI@Z.c)
 */

__int64 __fastcall MonitorCancelSkippedDepartures(PERESOURCE *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v6; // rax
  PERESOURCE v7; // rax
  MONITOR_MGR *Blink; // rcx

  v4 = (unsigned int)a2;
  v6 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v6 + 24) = v4;
  *(_QWORD *)(v6 + 32) = this;
  WdLogGlobalForLineNumber = 889;
  if ( !this || (_DWORD)v4 == -1 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 907;
  }
  v7 = this[390];
  if ( !v7 )
  {
    WdLogSingleEntry1(2LL, this);
    WdLogGlobalForLineNumber = 911;
    return 3221225485LL;
  }
  Blink = (MONITOR_MGR *)v7[1].SystemResourcesList.Blink;
  if ( !Blink )
  {
    WdLogSingleEntry1(2LL, this);
    WdLogGlobalForLineNumber = 924;
    return 3221225485LL;
  }
  return MONITOR_MGR::_CancelSkippedDepartures(Blink, v4);
}
