/*
 * XREFs of ?OnClientInvalidation@CKsSoftwareNotificationsMonitor@@AEAAJXZ @ 0x18010499C
 * Callers:
 *     ?OnNotify@CKsSoftwareNotificationsMonitor@@UEAAJKPEBU_GUID@@@Z @ 0x180104AE0 (-OnNotify@CKsSoftwareNotificationsMonitor@@UEAAJKPEBU_GUID@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x180001598 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x18001CAB0 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ @ 0x18001DF28 (-GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ.c)
 *     ??1?$shared_any_t@V?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001E07C (--1-$shared_any_t@V-$shared_storage@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6A.c)
 *     _tlgKeywordOn @ 0x180055760 (_tlgKeywordOn.c)
 *     ?put@?$shared_any_t@V?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x18005F1BC (-put@-$shared_any_t@V-$shared_storage@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP.c)
 *     ?GetDeviceId@CKsNotificationsMonitor@@QEAAJPEAPEAG@Z @ 0x1801168BC (-GetDeviceId@CKsNotificationsMonitor@@QEAAJPEAPEAG@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CKsSoftwareNotificationsMonitor::OnClientInvalidation(CKsSoftwareNotificationsMonitor *this)
{
  unsigned __int16 **v2; // rax
  int DeviceId; // eax
  int v4; // ebx
  unsigned __int64 v5; // r9
  __int64 v6; // rdx
  int v7; // ebx
  _DWORD *v8; // rcx
  const WCHAR **v9; // rdi
  int v10; // ecx
  __int64 v11; // r8
  __int64 v12; // r9
  const WCHAR *v13; // rax
  struct CSerialWorkQueue *SerialWorkQueue; // rax
  __int64 v15; // rcx
  __int128 v17; // [rsp+30h] [rbp-29h] BYREF
  int v18; // [rsp+40h] [rbp-19h]
  __int128 v19; // [rsp+48h] [rbp-11h] BYREF
  __int64 (__fastcall **v20)(); // [rsp+58h] [rbp-1h] BYREF
  int v21; // [rsp+60h] [rbp+7h]
  const WCHAR **v22; // [rsp+68h] [rbp+Fh]
  __int64 v23; // [rsp+70h] [rbp+17h]
  __int64 (__fastcall ***v24)(); // [rsp+90h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]
  int v26; // [rsp+C8h] [rbp+6Fh] BYREF
  const WCHAR *v27; // [rsp+D0h] [rbp+77h] BYREF

  v17 = 0LL;
  v2 = (unsigned __int16 **)wil::shared_any_t<wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>>::put(&v17);
  DeviceId = CKsNotificationsMonitor::GetDeviceId(this, v2);
  v4 = DeviceId;
  if ( DeviceId >= 0 )
  {
    v7 = _InterlockedIncrement(&dword_1801D0858);
    v8 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
    v9 = (const WCHAR **)v17;
    if ( *v8 > 4u && tlgKeywordOn((__int64)v8, 32LL) )
    {
      if ( v9 )
        v13 = *v9;
      else
        v13 = 0LL;
      v27 = v13;
      v26 = v7;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v10,
        (int)&unk_1801A28DD,
        v11,
        v12,
        (__int64)&v26,
        &v27);
    }
    SerialWorkQueue = GetSerialWorkQueue();
    v18 = v7;
    v15 = *((_QWORD *)&v17 + 1);
    if ( *((_QWORD *)&v17 + 1) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v17 + 1) + 8LL));
      v15 = *((_QWORD *)&v17 + 1);
      v9 = (const WCHAR **)v17;
    }
    v20 = off_1801735C8;
    v21 = v7;
    v22 = v9;
    v23 = v15;
    v19 = 0LL;
    v24 = &v20;
    v4 = CSerialWorkQueue::QueueWorkItem((__int64)SerialWorkQueue, (__int64 *)&v20);
    wil::shared_any_t<wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>>::~shared_any_t<wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>>((__int64)&v19);
    if ( v4 >= 0 )
    {
      v4 = 0;
      goto LABEL_15;
    }
    v5 = (unsigned int)v4;
    v6 = 362LL;
  }
  else
  {
    v5 = (unsigned int)DeviceId;
    v6 = 337LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\softwarecaps.cpp",
    (const char *)v5);
LABEL_15:
  wil::shared_any_t<wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>>::~shared_any_t<wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>>((__int64)&v17);
  return (unsigned int)v4;
}
