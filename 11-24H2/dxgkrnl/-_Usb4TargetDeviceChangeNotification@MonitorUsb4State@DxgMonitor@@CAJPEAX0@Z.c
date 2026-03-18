/*
 * XREFs of ?_Usb4TargetDeviceChangeNotification@MonitorUsb4State@DxgMonitor@@CAJPEAX0@Z @ 0x140279250
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?DestroyPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAX_N@Z @ 0x14042E7C4 (-DestroyPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAX_N@Z.c)
 *     ?SetupPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14042E900 (-SetupPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAJPEAU_DXGK_DISPLAY_SCENARIO_.c)
 */

__int64 __fastcall DxgMonitor::MonitorUsb4State::_Usb4TargetDeviceChangeNotification(
        char *NotificationStructure,
        DxgMonitor::MonitorUsb4State *Context,
        __int64 a3)
{
  unsigned int v5; // edi
  __int64 v6; // rax
  bool v7; // dl
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  int v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+28h] [rbp-20h]
  char v15; // [rsp+30h] [rbp-18h]

  v13 = -1;
  v14 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v15 = 1;
    v13 = 7063;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)NotificationStructure, (__int64)&EventProfilerEnter, a3, 7063);
  }
  else
  {
    v15 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v13, 7063);
  v5 = 0;
  v6 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1;
  if ( !v6 )
    v6 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4;
  if ( !v6 )
  {
    v7 = 1;
LABEL_17:
    DxgMonitor::MonitorUsb4State::DestroyPowerConnectionWithUsb4Stack(Context, v7);
    goto LABEL_19;
  }
  v8 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1;
  if ( !v8 )
    v8 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data4;
  if ( v8 )
  {
    v9 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1;
    if ( !v9 )
      v9 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4;
    if ( v9 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 1197;
      v5 = -1073741811;
      goto LABEL_19;
    }
    v7 = 0;
    goto LABEL_17;
  }
  v5 = DxgMonitor::MonitorUsb4State::SetupPowerConnectionWithUsb4Stack(Context, 0LL);
LABEL_19:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v13);
  if ( v15 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v10, (__int64)&EventProfilerExit, v11, v13);
  return v5;
}
