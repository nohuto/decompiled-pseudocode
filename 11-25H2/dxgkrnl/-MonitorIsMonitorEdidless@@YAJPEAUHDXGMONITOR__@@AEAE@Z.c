/*
 * XREFs of ?MonitorIsMonitorEdidless@@YAJPEAUHDXGMONITOR__@@AEAE@Z @ 0x1403F2FD0
 * Callers:
 *     DxgkGetMonitorInternalInfo @ 0x140419880 (DxgkGetMonitorInternalInfo.c)
 * Callees:
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x140034CB0 (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z @ 0x140036128 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z.c)
 */

__int64 __fastcall MonitorIsMonitorEdidless(struct HDXGMONITOR__ *a1, bool *a2)
{
  unsigned int v3; // ebx
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( a1 )
  {
    MONITOR_MGR::AcquireMonitorShared(v5, (__int64)a1);
    if ( v5[0] )
    {
      *a2 = *(_QWORD *)(*(_QWORD *)(v5[0] + 216LL) + 128LL) == 0LL;
      v3 = 0;
    }
    else
    {
      v3 = -1073741275;
      WdLogSingleEntry1(2LL, -1073741275LL);
      WdLogGlobalForLineNumber = 3468;
    }
    CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v5);
  }
  else
  {
    v3 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 3465;
  }
  return v3;
}
