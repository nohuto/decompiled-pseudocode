/*
 * XREFs of ?reset@?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?IoUnregisterPlugPlayNotification@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x14005C040
 * Callers:
 *     ?Cleanup@DISPLAY_MUX_DEVICE@@AEAAXXZ @ 0x140083A1C (-Cleanup@DISPLAY_MUX_DEVICE@@AEAAXXZ.c)
 *     ?Init@DISPLAY_MUX_DEVICE@@QEAAJPEBU_UNICODE_STRING@@@Z @ 0x140084D78 (-Init@DISPLAY_MUX_DEVICE@@QEAAJPEBU_UNICODE_STRING@@@Z.c)
 *     ?Init@DISPLAY_MUX_MGR@@QEAAJXZ @ 0x140085064 (-Init@DISPLAY_MUX_MGR@@QEAAJXZ.c)
 *     ?UnregisterPnPTargetDeviceNotification@MonitorPnpState@DxgMonitor@@QEAAJXZ @ 0x140187948 (-UnregisterPnPTargetDeviceNotification@MonitorPnpState@DxgMonitor@@QEAAJXZ.c)
 *     ??1USB4_HOSTROUTER_MGR@@QEAA@XZ @ 0x140277490 (--1USB4_HOSTROUTER_MGR@@QEAA@XZ.c)
 *     ?Initalize@USB4_HOSTROUTER_MGR@@QEAAJXZ @ 0x140277F4C (-Initalize@USB4_HOSTROUTER_MGR@@QEAAJXZ.c)
 *     ?RegisterPnPTargetDeviceNotification@MonitorPnpState@DxgMonitor@@QEAAJPEBU_UNICODE_STRING@@P6AJPEAX1@Z@Z @ 0x14028A158 (-RegisterPnPTargetDeviceNotification@MonitorPnpState@DxgMonitor@@QEAAJPEBU_UNICODE_STRING@@P6AJP.c)
 *     ?DestroyPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAX_N@Z @ 0x14042E7C4 (-DestroyPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAX_N@Z.c)
 *     ?SetupPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14042E900 (-SetupPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAJPEAU_DXGK_DISPLAY_SCENARIO_.c)
 * Callees:
 *     ??$invoke@P6AXPEAX@_EAEAPEAX@wistd@@YAX$$QEAP6AXPEAX@_EAEAPEAX@Z @ 0x140056BA4 (--$invoke@P6AXPEAX@_EAEAPEAX@wistd@@YAX$$QEAP6AXPEAX@_EAEAPEAX@Z.c)
 */

__int64 __fastcall wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long IoUnregisterPlugPlayNotification(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
        __int64 *a1,
        __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  NTSTATUS (__stdcall *v6)(PVOID); // [rsp+38h] [rbp+10h] BYREF

  result = *a1;
  if ( *a1 )
  {
    v5 = *a1;
    v6 = IoUnregisterPlugPlayNotification;
    result = ___invoke_P6AXPEAX__EAEAPEAX_wistd__YAX__QEAP6AXPEAX__EAEAPEAX_Z((__int64 (__fastcall **)(_QWORD))&v6, &v5);
  }
  *a1 = a2;
  return result;
}
