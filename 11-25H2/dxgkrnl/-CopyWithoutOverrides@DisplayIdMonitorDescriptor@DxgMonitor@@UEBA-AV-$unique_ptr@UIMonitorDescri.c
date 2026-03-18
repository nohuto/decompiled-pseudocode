/*
 * XREFs of ?CopyWithoutOverrides@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@XZ @ 0x140279470
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U?$default_delete@VIMonitorDriverInterface@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAVIMonitorDriverInterface@DxgMonitor@@@Z @ 0x14005287C (-reset@-$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U-$default_delete@VIMonitorDriverInterf.c)
 *     Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline @ 0x14007D6D4 (Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?CopyInstance@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@XZ @ 0x140279350 (-CopyInstance@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA-AV-$unique_ptr@UIMonitorDescriptor@Dxg.c)
 */

__int64 *__fastcall DxgMonitor::DisplayIdMonitorDescriptor::CopyWithoutOverrides(__int64 a1, __int64 *a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 (__fastcall ***v6)(_QWORD, __int64); // rbx
  __int64 (__fastcall ***v8)(_QWORD, __int64); // [rsp+40h] [rbp+18h] BYREF

  if ( (unsigned int)Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline() )
  {
    DxgMonitor::DisplayIdMonitorDescriptor::CopyInstance(a1, (__int64 *)&v8, v4, v5);
    v6 = v8;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64)))(*v8)[5])(v8);
    v8 = 0LL;
    *a2 = (__int64)v6;
    wistd::unique_ptr<DxgMonitor::IMonitorDriverInterface,wistd::default_delete<DxgMonitor::IMonitorDriverInterface>>::reset(
      &v8,
      0LL);
  }
  else
  {
    DxgMonitor::DisplayIdMonitorDescriptor::CopyInstance(a1, a2, v4, v5);
  }
  return a2;
}
