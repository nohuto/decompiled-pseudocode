/*
 * XREFs of ??1?$unique_storage@U?$resource_policy@PEAU_DEVICE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14003DDA0
 * Callers:
 *     ??1DISPLAY_MUX_DEVICE@@QEAA@XZ @ 0x1400825F4 (--1DISPLAY_MUX_DEVICE@@QEAA@XZ.c)
 *     ??1DISPLAY_MUX_MGR@@QEAA@XZ @ 0x14008266C (--1DISPLAY_MUX_MGR@@QEAA@XZ.c)
 *     InvalidateChildRelationsOnAdapterCallback @ 0x1401C54F0 (InvalidateChildRelationsOnAdapterCallback.c)
 *     ??1USB4_POWERON_WORK_QUEUE@@QEAA@XZ @ 0x1402774C8 (--1USB4_POWERON_WORK_QUEUE@@QEAA@XZ.c)
 *     ??1Usb4HostRouterPoFxRefv2@DxgMonitor@@UEAA@XZ @ 0x140277524 (--1Usb4HostRouterPoFxRefv2@DxgMonitor@@UEAA@XZ.c)
 *     ?GetUsb4PowerFlushEvent@USB4_POWERON_WORK_QUEUE@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_KEVENT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x140277E70 (-GetUsb4PowerFlushEvent@USB4_POWERON_WORK_QUEUE@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$reso.c)
 *     ?_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z @ 0x140278878 (-_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z.c)
 *     ??1MonitorPnpState@DxgMonitor@@QEAA@XZ @ 0x14027938C (--1MonitorPnpState@DxgMonitor@@QEAA@XZ.c)
 *     DxgkDisplayConfigDeviceInfoForAdapter @ 0x1403C64A0 (DxgkDisplayConfigDeviceInfoForAdapter.c)
 *     DxgkPowerOnOffMonitor @ 0x1404279D4 (DxgkPowerOnOffMonitor.c)
 * Callees:
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x14003DDC0 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 */

__int64 __fastcall wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>(
        DxgkCompositionObject **a1)
{
  DxgkCompositionObject *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return DxgkCompositionObject::Release(v1);
  return result;
}
