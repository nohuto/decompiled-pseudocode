/*
 * XREFs of ?OnInitialized@Usb4HostRouterPoFxRefv2@DxgMonitor@@QEAA?AW4SetupFailureStage@2@PEAU_DEVICE_OBJECT@@@Z @ 0x140271084
 * Callers:
 *     ?SetupPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14042CA10 (-SetupPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAJPEAU_DXGK_DISPLAY_SCENARIO_.c)
 * Callees:
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x14002F83C (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x140034DA0 (--1MUTEX_LOCK@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_DEVICE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_DEVICE_OBJECT@@@Z @ 0x140060FB0 (-reset@-$unique_storage@U-$resource_policy@PEAU_DEVICE_OBJECT@@$$A6AXPEAX@Z$1-DereferenceObject@.c)
 */

__int64 __fastcall DxgMonitor::Usb4HostRouterPoFxRefv2::OnInitialized(__int64 a1, struct _DEVICE_OBJECT *a2)
{
  unsigned int v4; // ebx
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  bool v6; // zf
  char v8; // [rsp+30h] [rbp+8h] BYREF

  MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v8, (struct DXGFASTMUTEX *)(a1 + 48));
  if ( a2 )
  {
    if ( *(_QWORD *)(a1 + 24) )
    {
      if ( *(_DWORD *)(a1 + 16) == -1 )
      {
        v4 = 3;
      }
      else if ( *(_QWORD *)(a1 + 32) )
      {
        v4 = 15;
      }
      else
      {
        DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(a2);
        wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>::reset(
          (__int64 *)(a1 + 32),
          (__int64)DeviceAttachmentBaseRef);
        v6 = *(_QWORD *)(a1 + 32) == 0LL;
        v4 = 8;
        if ( !v6 )
          v4 = 1;
      }
    }
    else
    {
      v4 = 2;
    }
  }
  else
  {
    v4 = 16;
  }
  MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)&v8);
  return v4;
}
