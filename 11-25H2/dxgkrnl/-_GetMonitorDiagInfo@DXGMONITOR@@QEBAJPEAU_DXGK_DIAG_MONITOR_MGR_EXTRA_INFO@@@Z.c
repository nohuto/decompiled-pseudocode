/*
 * XREFs of ?_GetMonitorDiagInfo@DXGMONITOR@@QEBAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x140353E40
 * Callers:
 *     ?MonitorCreatePhysicalMonitor@@YAJPEAXIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4_INFO@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402666F4 (-MonitorCreatePhysicalMonitor@@YAJPEAXIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4_INFO@@PEA.c)
 *     ?MonitorNotifyDeviceNodeReady@@YAJPEAXIPEAU_DEVICE_OBJECT@@@Z @ 0x140353960 (-MonitorNotifyDeviceNodeReady@@YAJPEAXIPEAU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     ?reset@?$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U?$default_delete@VIMonitorDriverInterface@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAVIMonitorDriverInterface@DxgMonitor@@@Z @ 0x14005287C (-reset@-$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U-$default_delete@VIMonitorDriverInterf.c)
 *     ??$?0VEdidMonitorDescriptor@DxgMonitor@@U?$default_delete@VEdidMonitorDescriptor@DxgMonitor@@@wistd@@XX@?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAA@$$QEAV?$unique_ptr@VEdidMonitorDescriptor@DxgMonitor@@U?$default_delete@VEdidMonitorDescriptor@DxgMonitor@@@wistd@@@1@@Z @ 0x140059E3C (--$-0VEdidMonitorDescriptor@DxgMonitor@@U-$default_delete@VEdidMonitorDescriptor@DxgMonitor@@@wi.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ??$DxgkSafeConvertUnicodeToAnsi@$0O@@@YAXAEAY0O@$$CBGAEAY0O@D@Z @ 0x140186F54 (--$DxgkSafeConvertUnicodeToAnsi@$0O@@@YAXAEAY0O@$$CBGAEAY0O@D@Z.c)
 *     ??$DxgkSafeConvertUnicodeToAnsi@$04@@YAXAEAY04$$CBGAEAY04D@Z @ 0x14018710C (--$DxgkSafeConvertUnicodeToAnsi@$04@@YAXAEAY04$$CBGAEAY04D@Z.c)
 *     ??$DxgkSafeConvertUnicodeToAnsi@$03@@YAXAEAY03$$CBGAEAY03D@Z @ 0x1401874B0 (--$DxgkSafeConvertUnicodeToAnsi@$03@@YAXAEAY03$$CBGAEAY03D@Z.c)
 */

__int64 __fastcall DXGMONITOR::_GetMonitorDiagInfo(DXGMONITOR *this, struct _DXGK_DIAG_MONITOR_MGR_EXTRA_INFO *a2)
{
  __int64 v4; // rcx
  __int64 *v5; // rax
  int v6; // ebx
  int v7; // r8d
  void (__fastcall ***v8)(_QWORD, __int64); // rcx
  __int64 v9; // rbx
  bool v10; // zf
  __int64 (__fastcall ***v12[2])(_QWORD, __int64); // [rsp+20h] [rbp-29h] BYREF
  _QWORD v13[2]; // [rsp+30h] [rbp-19h] BYREF
  _QWORD v14[2]; // [rsp+40h] [rbp-9h] BYREF
  WCHAR v15[4]; // [rsp+50h] [rbp+7h] BYREF
  __int16 v16; // [rsp+58h] [rbp+Fh]
  WCHAR v17[4]; // [rsp+60h] [rbp+17h] BYREF
  WCHAR SourceString[8]; // [rsp+68h] [rbp+1Fh] BYREF
  __int64 v19; // [rsp+78h] [rbp+2Fh]
  int v20; // [rsp+80h] [rbp+37h]

  *(_DWORD *)a2 = *((_DWORD *)this + 70);
  v4 = *(_QWORD *)(*((_QWORD *)this + 27) + 160LL);
  if ( v4 )
  {
    v5 = (__int64 *)(*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v4 + 24LL))(v4, v13);
    v6 = 1;
  }
  else
  {
    v12[0] = 0LL;
    v5 = (__int64 *)v12;
    v6 = 0;
  }
  wistd::unique_ptr<DxgMonitor::IMonitorDescriptor,wistd::default_delete<DxgMonitor::IMonitorDescriptor>>::unique_ptr<DxgMonitor::IMonitorDescriptor,wistd::default_delete<DxgMonitor::IMonitorDescriptor>>(
    (__int64)v14,
    v5);
  if ( v7 )
    wistd::unique_ptr<DxgMonitor::IMonitorDriverInterface,wistd::default_delete<DxgMonitor::IMonitorDriverInterface>>::reset(
      v12,
      0LL);
  if ( v6 )
  {
    v8 = (void (__fastcall ***)(_QWORD, __int64))v13[0];
    v13[0] = 0LL;
    if ( v8 )
      (**v8)(v8, 1LL);
  }
  v9 = v14[0];
  *(_QWORD *)v17 = 0LL;
  *(_QWORD *)v15 = 0LL;
  v16 = 0;
  v19 = 0LL;
  v20 = 0;
  *(_OWORD *)SourceString = 0LL;
  if ( v14[0] )
  {
    v10 = *(_QWORD *)(*((_QWORD *)this + 27) + 128LL) == 0LL;
    v14[1] = v17;
    v14[0] = 0x80000LL;
    *((_DWORD *)a2 + 1) = !v10;
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v9 + 64LL))(v9, v14);
    v13[0] = 655360LL;
    v13[1] = v15;
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v9 + 72LL))(v9, v13);
    v12[0] = (__int64 (__fastcall ***)(_QWORD, __int64))1835008;
    v12[1] = (__int64 (__fastcall ***)(_QWORD, __int64))SourceString;
    (*(void (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, __int64)))(*(_QWORD *)v9 + 80LL))(v9, v12);
  }
  DxgkSafeConvertUnicodeToAnsi<4>(v17, (PCSZ)a2 + 8);
  DxgkSafeConvertUnicodeToAnsi<5>(v15, (PCSZ)a2 + 12);
  DxgkSafeConvertUnicodeToAnsi<14>(SourceString, (PCSZ)a2 + 17);
  if ( v9 )
    (**(void (__fastcall ***)(__int64, __int64))v9)(v9, 1LL);
  return 0LL;
}
