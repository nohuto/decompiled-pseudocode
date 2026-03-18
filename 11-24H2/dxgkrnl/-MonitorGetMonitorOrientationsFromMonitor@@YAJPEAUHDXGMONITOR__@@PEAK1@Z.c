/*
 * XREFs of ?MonitorGetMonitorOrientationsFromMonitor@@YAJPEAUHDXGMONITOR__@@PEAK1@Z @ 0x140378C18
 * Callers:
 *     _lambda_eeea5582e93711493668b9eafd12873f_::operator() @ 0x1401C21B0 (_lambda_eeea5582e93711493668b9eafd12873f_--operator().c)
 *     _lambda_ef85c4d3ba2b9aeb28478c22401d75d8_::operator() @ 0x1401C2A10 (_lambda_ef85c4d3ba2b9aeb28478c22401d75d8_--operator().c)
 *     DxgkGetMonitorInternalInfo @ 0x140413FF0 (DxgkGetMonitorInternalInfo.c)
 * Callees:
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x140034BE4 (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z @ 0x140036210 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z.c)
 *     ?_GetMonitorOrientation@DXGMONITOR@@QEBAJPEAK0@Z @ 0x140378CC0 (-_GetMonitorOrientation@DXGMONITOR@@QEBAJPEAK0@Z.c)
 */

__int64 __fastcall MonitorGetMonitorOrientationsFromMonitor(
        struct HDXGMONITOR__ *a1,
        unsigned int *a2,
        unsigned int *a3)
{
  unsigned int MonitorOrientation; // ebx
  DXGMONITOR *v7[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( a1 )
  {
    MONITOR_MGR::AcquireMonitorShared(v7, (__int64)a1);
    if ( v7[0] )
    {
      MonitorOrientation = DXGMONITOR::_GetMonitorOrientation(v7[0], a2, a3);
    }
    else
    {
      MonitorOrientation = -1073741275;
      WdLogSingleEntry1(2LL, -1073741275LL);
      WdLogGlobalForLineNumber = 3455;
    }
    CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v7);
  }
  else
  {
    MonitorOrientation = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 3452;
  }
  return MonitorOrientation;
}
