/*
 * XREFs of ?MonitorGetNumConnectedMonitor@@YAJPEAXPEAI@Z @ 0x14018AC88
 * Callers:
 *     ?GetNumTargetsWithMonitorObjects@VIDPN_MGR@@QEBA_KXZ @ 0x1400635B8 (-GetNumTargetsWithMonitorObjects@VIDPN_MGR@@QEBA_KXZ.c)
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE@Z @ 0x140310544 (-CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_D.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MonitorGetNumConnectedMonitor(_QWORD *a1, unsigned int *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v8; // rax

  *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2, a3, a4) + 24) = a1;
  WdLogGlobalForLineNumber = 504;
  if ( !a1 || !a2 )
    return 3221225485LL;
  v6 = a1[390];
  if ( !v6 )
  {
    WdLogSingleEntry1(2LL, a1);
    WdLogGlobalForLineNumber = 526;
    return 3221225485LL;
  }
  v8 = *(_QWORD *)(v6 + 112);
  if ( !v8 )
  {
    WdLogSingleEntry1(2LL, a1);
    WdLogGlobalForLineNumber = 539;
    return 3221225485LL;
  }
  *a2 = *(_DWORD *)(v8 + 32);
  return 0LL;
}
