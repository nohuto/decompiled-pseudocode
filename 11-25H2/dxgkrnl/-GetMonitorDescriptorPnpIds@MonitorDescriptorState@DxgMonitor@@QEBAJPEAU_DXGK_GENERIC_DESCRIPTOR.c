/*
 * XREFs of ?GetMonitorDescriptorPnpIds@MonitorDescriptorState@DxgMonitor@@QEBAJPEAU_DXGK_GENERIC_DESCRIPTOR@@@Z @ 0x1402725F4
 * Callers:
 *     ?MonitorGetMonitorDescriptorIDs@@YAJPEAXIPEAU_DXGK_GENERIC_DESCRIPTOR@@@Z @ 0x1402677EC (-MonitorGetMonitorDescriptorIDs@@YAJPEAXIPEAU_DXGK_GENERIC_DESCRIPTOR@@@Z.c)
 * Callees:
 *     ?reset@?$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U?$default_delete@VIMonitorDriverInterface@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAVIMonitorDriverInterface@DxgMonitor@@@Z @ 0x14005287C (-reset@-$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U-$default_delete@VIMonitorDriverInterf.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgMonitor::MonitorDescriptorState::GetMonitorDescriptorPnpIds(
        DxgMonitor::MonitorDescriptorState *this,
        struct _DXGK_GENERIC_DESCRIPTOR *a2)
{
  __int64 v4; // rcx
  unsigned int v5; // edi
  int v6; // eax
  int v7; // eax
  WCHAR v9; // ax
  __int128 v10; // xmm1
  __int64 v11; // xmm0_8
  __int64 (__fastcall ***v12)(_QWORD, __int64); // [rsp+20h] [rbp-50h] BYREF
  _QWORD v13[2]; // [rsp+28h] [rbp-48h] BYREF
  _OWORD v14[2]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v15; // [rsp+58h] [rbp-18h]
  WCHAR v16; // [rsp+60h] [rbp-10h]

  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1619;
  }
  a2->HardwareId[0] = 0;
  a2->InstanceId[0] = 0;
  a2->CompatibleId[0] = 0;
  a2->DeviceText[0] = 0;
  v4 = *((_QWORD *)this + 20);
  if ( !v4 )
    return 3223126017LL;
  (*(void (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, __int64)))(*(_QWORD *)v4 + 24LL))(v4, &v12);
  if ( !v12 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 1642;
    v5 = -1073741801;
LABEL_10:
    wistd::unique_ptr<DxgMonitor::IMonitorDriverInterface,wistd::default_delete<DxgMonitor::IMonitorDriverInterface>>::reset(
      &v12,
      0LL);
    return v5;
  }
  v13[0] = 2752512LL;
  v13[1] = v14;
  v6 = (*v12)[8](v12, (__int64)v13);
  v5 = v6;
  if ( v6 < 0 )
  {
    WdLogSingleEntry1(2LL, v6);
    WdLogGlobalForLineNumber = 1653;
    goto LABEL_10;
  }
  v7 = (*v12)[9](v12, (__int64)v13);
  v5 = v7;
  if ( v7 < 0 )
  {
    WdLogSingleEntry1(2LL, v7);
    WdLogGlobalForLineNumber = 1654;
    goto LABEL_10;
  }
  v9 = v16;
  v10 = v14[1];
  *(_OWORD *)a2->HardwareId = v14[0];
  v11 = v15;
  *(_OWORD *)&a2->HardwareId[8] = v10;
  *(_QWORD *)&a2->HardwareId[16] = v11;
  a2->HardwareId[20] = v9;
  wistd::unique_ptr<DxgMonitor::IMonitorDriverInterface,wistd::default_delete<DxgMonitor::IMonitorDriverInterface>>::reset(
    &v12,
    0LL);
  return 0LL;
}
