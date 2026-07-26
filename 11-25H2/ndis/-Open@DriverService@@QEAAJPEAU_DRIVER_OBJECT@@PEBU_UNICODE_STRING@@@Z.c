/*
 * XREFs of ?Open@DriverService@@QEAAJPEAU_DRIVER_OBJECT@@PEBU_UNICODE_STRING@@@Z @ 0x1401561EC
 * Callers:
 *     ?RegisterModule@KLoader@@QEAAJPEAU_DRIVER_OBJECT@@PEBU_UNICODE_STRING@@PEAXPEBU_KLOADER_MODULE_CHARACTERISTICS@@@Z @ 0x140155D78 (-RegisterModule@KLoader@@QEAAJPEAU_DRIVER_OBJECT@@PEBU_UNICODE_STRING@@PEAXPEBU_KLOADER_MODULE_C.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_ @ 0x140036F70 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_Z @ 0x14006CDE0 (WPP_RECORDER_SF_Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_FILE_OBJECT@@P6A_JPEAX@Z$1?ObfDereferenceObject@@YA_J0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_FILE_OBJECT@@@Z @ 0x1400E4148 (-reset@-$unique_storage@U-$resource_policy@PEAU_FILE_OBJECT@@P6A_JPEAX@Z$1-ObfDereferenceObject@.c)
 *     ?GetDeviceObjectPointer@@YAJPEAU_UNICODE_STRING@@KPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z @ 0x1400E4184 (-GetDeviceObjectPointer@@YAJPEAU_UNICODE_STRING@@KPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z.c)
 */

__int64 __fastcall DriverService::Open(void **this, struct _DRIVER_OBJECT *a2, struct _UNICODE_STRING *a3)
{
  _DRIVER_OBJECT *v4; // rsi
  __int64 result; // rax
  __int64 v7; // rdx
  unsigned int DeviceObjectPointer; // ebx
  struct _DEVICE_OBJECT *v9; // [rsp+50h] [rbp+8h] BYREF

  v4 = a2;
  if ( this[3] )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)a2,
        1,
        16,
        (struct _GUID *)&WPP_ab835b9d52e13f34949e286b28d58b38_Traceguids);
    }
    return 3221227288LL;
  }
  else
  {
    v9 = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,__int64 (*)(void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>::reset(
      this + 5,
      0LL);
    DeviceObjectPointer = GetDeviceObjectPointer(a3, v7, (struct _FILE_OBJECT **)this + 5, &v9);
    if ( DeviceObjectPointer )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Z(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          1u,
          0x11u,
          (struct _GUID *)&WPP_ab835b9d52e13f34949e286b28d58b38_Traceguids,
          &a3->Length);
      return DeviceObjectPointer;
    }
    else if ( v4 == v9->DriverObject )
    {
      this[4] = v9;
      result = 0LL;
      this[3] = v4;
    }
    else
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          1u,
          0x12u,
          (struct _GUID *)&WPP_ab835b9d52e13f34949e286b28d58b38_Traceguids,
          (char)v4,
          v9->DriverObject);
      return 3221225485LL;
    }
  }
  return result;
}
