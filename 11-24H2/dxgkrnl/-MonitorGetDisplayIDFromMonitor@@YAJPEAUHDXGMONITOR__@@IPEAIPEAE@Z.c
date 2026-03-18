/*
 * XREFs of ?MonitorGetDisplayIDFromMonitor@@YAJPEAUHDXGMONITOR__@@IPEAIPEAE@Z @ 0x140306B84
 * Callers:
 *     ?DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z @ 0x140307170 (-DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z.c)
 *     DxgkGetMonitorInternalInfo @ 0x140413FF0 (DxgkGetMonitorInternalInfo.c)
 * Callees:
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x140034BE4 (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z @ 0x140036210 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z.c)
 *     ?GetDisplayIdDescriptorRaw@MonitorDescriptorState@DxgMonitor@@QEBAJIPEAIPEAE@Z @ 0x140306A2C (-GetDisplayIdDescriptorRaw@MonitorDescriptorState@DxgMonitor@@QEBAJIPEAIPEAE@Z.c)
 */

__int64 __fastcall MonitorGetDisplayIDFromMonitor(
        struct HDXGMONITOR__ *a1,
        unsigned int a2,
        unsigned int *a3,
        unsigned __int8 *a4)
{
  unsigned int DisplayIdDescriptorRaw; // ebx
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF

  *a3 = 0;
  if ( a1 )
  {
    MONITOR_MGR::AcquireMonitorShared(v9, (__int64)a1);
    if ( v9[0] )
    {
      DisplayIdDescriptorRaw = DxgMonitor::MonitorDescriptorState::GetDisplayIdDescriptorRaw(
                                 *(DxgMonitor::MonitorDescriptorState **)(v9[0] + 216LL),
                                 a2,
                                 a3,
                                 a4);
    }
    else
    {
      DisplayIdDescriptorRaw = -1073741275;
      WdLogSingleEntry1(2LL, -1073741275LL);
      WdLogGlobalForLineNumber = 3563;
    }
    CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v9);
  }
  else
  {
    DisplayIdDescriptorRaw = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 3560;
  }
  return DisplayIdDescriptorRaw;
}
