/*
 * XREFs of ?UpdatePnPDeviceProperties@MonitorPnpState@DxgMonitor@@AEAAJXZ @ 0x14028C00C
 * Callers:
 *     ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@@Z @ 0x14028C2B0 (-_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?SetPnpDeviceProperty@MonitorPnpState@DxgMonitor@@QEAAJPEBU_DEVPROPKEY@@KKPEAX@Z @ 0x1403ECD24 (-SetPnpDeviceProperty@MonitorPnpState@DxgMonitor@@QEAAJPEBU_DEVPROPKEY@@KKPEAX@Z.c)
 */

__int64 __fastcall DxgMonitor::MonitorPnpState::UpdatePnPDeviceProperties(DxgMonitor::MonitorPnpState *this)
{
  int v2; // eax
  bool v3; // zf
  NTSTATUS v4; // ebx
  int v6; // eax
  int v7; // [rsp+50h] [rbp+8h] BYREF
  char Data; // [rsp+58h] [rbp+10h] BYREF

  (*(void (__fastcall **)(_QWORD, char *))(**(_QWORD **)this + 8LL))(*(_QWORD *)this, &Data);
  v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
  v3 = *((_BYTE *)this + 16) == 0;
  v7 = v2;
  if ( v3 )
  {
    v4 = -1073741275;
    goto LABEL_3;
  }
  v4 = IoSetDevicePropertyData(*((PDEVICE_OBJECT *)this + 1), &DEVPKEY_Monitor_AdapterLuid, 0, 0, 8u, 8u, &Data);
  if ( v4 < 0 )
  {
LABEL_3:
    WdLogSingleEntry1(2LL, v4);
    WdLogGlobalForLineNumber = 280;
    return (unsigned int)v4;
  }
  v6 = DxgMonitor::MonitorPnpState::SetPnpDeviceProperty(this, &DEVPKEY_Monitor_TargetId, 7u, 4u, &v7);
  v4 = v6;
  if ( v6 < 0 )
  {
    WdLogSingleEntry1(2LL, v6);
    WdLogGlobalForLineNumber = 281;
    return (unsigned int)v4;
  }
  return 0LL;
}
