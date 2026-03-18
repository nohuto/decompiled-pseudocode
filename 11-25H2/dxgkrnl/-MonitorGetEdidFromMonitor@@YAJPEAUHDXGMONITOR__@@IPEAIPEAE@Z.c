/*
 * XREFs of ?MonitorGetEdidFromMonitor@@YAJPEAUHDXGMONITOR__@@IPEAIPEAE@Z @ 0x1403244C4
 * Callers:
 *     ?DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z @ 0x1403249F0 (-DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z.c)
 * Callees:
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x140034CB0 (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z @ 0x140036128 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?GetEdidDescriptorRaw@MonitorDescriptorState@DxgMonitor@@QEBAJIPEAIPEAE@Z @ 0x1403241F4 (-GetEdidDescriptorRaw@MonitorDescriptorState@DxgMonitor@@QEBAJIPEAIPEAE@Z.c)
 */

__int64 __fastcall MonitorGetEdidFromMonitor(
        struct HDXGMONITOR__ *a1,
        unsigned int a2,
        unsigned int *a3,
        unsigned __int8 *a4)
{
  unsigned int EdidDescriptorRaw; // ebx
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF

  *a3 = 0;
  if ( a2 )
    memset(a4, 0, a2);
  if ( a1 )
  {
    MONITOR_MGR::AcquireMonitorShared(v10, (__int64)a1);
    if ( v10[0] )
    {
      EdidDescriptorRaw = DxgMonitor::MonitorDescriptorState::GetEdidDescriptorRaw(
                            *(DxgMonitor::MonitorDescriptorState **)(v10[0] + 216LL),
                            a2,
                            a3,
                            a4);
    }
    else
    {
      EdidDescriptorRaw = -1073741275;
      WdLogSingleEntry1(2LL, -1073741275LL);
      WdLogGlobalForLineNumber = 3516;
    }
    CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v10);
  }
  else
  {
    EdidDescriptorRaw = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 3513;
  }
  return EdidDescriptorRaw;
}
