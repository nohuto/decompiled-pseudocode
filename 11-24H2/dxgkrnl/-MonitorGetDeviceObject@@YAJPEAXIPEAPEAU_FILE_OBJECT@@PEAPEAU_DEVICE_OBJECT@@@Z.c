/*
 * XREFs of ?MonitorGetDeviceObject@@YAJPEAXIPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z @ 0x140307DC0
 * Callers:
 *     ?DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z @ 0x140307950 (-DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z @ 0x140031240 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z.c)
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x140034BE4 (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?GetDeviceObject@MonitorPnpState@DxgMonitor@@QEBAJPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z @ 0x140307EB0 (-GetDeviceObject@MonitorPnpState@DxgMonitor@@QEBAJPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z.c)
 */

__int64 __fastcall MonitorGetDeviceObject(__int64 a1, __int64 a2, struct _FILE_OBJECT **a3, struct _DEVICE_OBJECT **a4)
{
  __int64 v5; // rbx
  __int64 v8; // rax
  unsigned int DeviceObject; // ebx
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  v5 = (unsigned int)a2;
  v8 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  *(_QWORD *)(v8 + 24) = v5;
  *(_QWORD *)(v8 + 32) = a1;
  WdLogGlobalForLineNumber = 2578;
  if ( !a1 || (_DWORD)v5 == -1 )
  {
    DeviceObject = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 2587;
  }
  else
  {
    MONITOR_MGR::AcquireMonitorShared(v11, a1, v5, 1u);
    if ( v11[0] )
    {
      DeviceObject = DxgMonitor::MonitorPnpState::GetDeviceObject(
                       *(DxgMonitor::MonitorPnpState **)(v11[0] + 200LL),
                       a3,
                       a4);
    }
    else
    {
      DeviceObject = -1073741275;
      WdLogSingleEntry1(2LL, -1073741275LL);
      WdLogGlobalForLineNumber = 2593;
    }
    CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v11);
  }
  return DeviceObject;
}
