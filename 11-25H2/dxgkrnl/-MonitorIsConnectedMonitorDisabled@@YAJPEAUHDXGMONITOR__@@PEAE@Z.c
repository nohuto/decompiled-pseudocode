/*
 * XREFs of ?MonitorIsConnectedMonitorDisabled@@YAJPEAUHDXGMONITOR__@@PEAE@Z @ 0x1402EBA8C
 * Callers:
 *     ?IsConnectedMonitorDisabled@DMMVIDEOPRESENTTARGET@@QEBAJAEAE@Z @ 0x1402EBA28 (-IsConnectedMonitorDisabled@DMMVIDEOPRESENTTARGET@@QEBAJAEAE@Z.c)
 * Callees:
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x140034CB0 (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z @ 0x140036128 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z.c)
 *     ?_IsMonitorDisabled@DXGMONITOR@@QEBA_NXZ @ 0x1402EBB14 (-_IsMonitorDisabled@DXGMONITOR@@QEBA_NXZ.c)
 */

__int64 __fastcall MonitorIsConnectedMonitorDisabled(struct HDXGMONITOR__ *a1, unsigned __int8 *a2)
{
  DXGMONITOR *v4[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  *a2 = 0;
  MONITOR_MGR::AcquireMonitorShared(v4, (__int64)a1);
  if ( v4[0] )
  {
    *a2 = DXGMONITOR::_IsMonitorDisabled(v4[0]);
    CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v4);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741275LL);
    WdLogGlobalForLineNumber = 3601;
    CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v4);
    return 3221226021LL;
  }
}
