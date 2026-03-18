/*
 * XREFs of ?CopyWithoutOverrides@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@XZ @ 0x140280960
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U?$default_delete@VIMonitorDriverInterface@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAVIMonitorDriverInterface@DxgMonitor@@@Z @ 0x14005252C (-reset@-$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U-$default_delete@VIMonitorDriverInterf.c)
 *     Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline @ 0x14007DD5C (Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?CopyInstance@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@XZ @ 0x140280840 (-CopyInstance@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA-AV-$unique_ptr@UIMonitorDescriptor@Dxg.c)
 */

__int64 *__fastcall DxgMonitor::DisplayIdMonitorDescriptor::CopyWithoutOverrides(__int64 a1, __int64 *a2)
{
  __int64 (__fastcall ***v4)(_QWORD, __int64); // rbx
  __int64 (__fastcall ***v6)(_QWORD, __int64); // [rsp+40h] [rbp+18h] BYREF

  if ( (unsigned int)Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline() )
  {
    DxgMonitor::DisplayIdMonitorDescriptor::CopyInstance(a1, (__int64 *)&v6);
    v4 = v6;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64)))(*v6)[5])(v6);
    v6 = 0LL;
    *a2 = (__int64)v4;
    wistd::unique_ptr<DxgMonitor::IMonitorDriverInterface,wistd::default_delete<DxgMonitor::IMonitorDriverInterface>>::reset(
      &v6,
      0LL);
  }
  else
  {
    DxgMonitor::DisplayIdMonitorDescriptor::CopyInstance(a1, a2);
  }
  return a2;
}
