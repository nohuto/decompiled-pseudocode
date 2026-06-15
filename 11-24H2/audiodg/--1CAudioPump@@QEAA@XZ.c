/*
 * XREFs of ??1CAudioPump@@QEAA@XZ @ 0x14001C7E8
 * Callers:
 *     ??1?$CComObject@VCAudioPump@@@ATL@@UEAA@XZ @ 0x140042EEC (--1-$CComObject@VCAudioPump@@@ATL@@UEAA@XZ.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@U?$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x14000EDB0 (-reset@-$com_ptr_t@U-$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundati.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x14001CC70 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14001CEE8 (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x14001D2AC (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x14001D314 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?SignalAndWaitForThread@CAudioPump@@AEAAXXZ @ 0x14001DD24 (-SignalAndWaitForThread@CAudioPump@@AEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x14002223C (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002C920 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x140066954 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall CAudioPump::~CAudioPump(CAudioPump *this)
{
  wil::details **v2; // r13
  wil::details **v3; // r12
  const char *v4; // r9
  wil::details **v5; // rsi
  void *v6; // rdx
  wil::details *v7; // rcx
  void *v8; // rdx
  void *v9; // rdx
  void *v10; // rdx
  wil::details *v11; // rcx
  wil::details *v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  ULONG ActualResolution; // [rsp+60h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+68h] [rbp+10h] BYREF

  *(_QWORD *)this = &CAudioPump::`vftable'{for `IAudioPump'};
  *((_QWORD *)this + 1) = &CAudioPump::`vftable'{for `IAudioPumpLogging'};
  if ( (unsigned __int64)(*((_QWORD *)this + 15) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
    CAudioPump::SignalAndWaitForThread(this);
  v2 = (wil::details **)((char *)this + 280);
  _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
    (char *)this + 280,
    0LL);
  _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
    (char *)this + 288,
    0LL);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    (char *)this + 296,
    0LL);
  _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
    (char *)this + 264,
    0LL);
  wil::com_ptr_t<Windows::Foundation::Collections::IVector<Windows::Media::Devices::AudioDeviceModule *>,wil::err_returncode_policy>::reset((__int64 *)this + 51);
  wil::com_ptr_t<Windows::Foundation::Collections::IVector<Windows::Media::Devices::AudioDeviceModule *>,wil::err_returncode_policy>::reset((__int64 *)this + 53);
  _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
    (char *)this + 432,
    0LL);
  v3 = (wil::details **)((char *)this + 416);
  _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
    (char *)this + 416,
    0LL);
  if ( *((_BYTE *)this + 73) )
  {
    EnterCriticalSection(&CAudioPump::s_AudioPumpTimerResolutionCountLock);
    v15 = &CAudioPump::s_AudioPumpTimerResolutionCountLock;
    if ( _InterlockedExchangeAdd(&CAudioPump::s_AudioPumpTimerResolutionCount, 0xFFFFFFFF) == 1 )
    {
      ActualResolution = 0;
      if ( NtSetTimerResolution(0, 0, &ActualResolution) < 0 )
        wil::details::in1diag3::_Log_GetLastError(
          retaddr,
          (void *)0x8AC,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp",
          v4);
    }
    CSAutoLock<1>::~CSAutoLock<1>(&v15);
  }
  wil::com_ptr_t<Windows::Foundation::Collections::IVector<Windows::Media::Devices::AudioDeviceModule *>,wil::err_returncode_policy>::reset((__int64 *)this + 10);
  wil::com_ptr_t<Windows::Foundation::Collections::IVector<Windows::Media::Devices::AudioDeviceModule *>,wil::err_returncode_policy>::reset((__int64 *)this + 26);
  v5 = (wil::details **)((char *)this + 312);
  _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
    (char *)this + 312,
    0LL);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((char *)this + 4720);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 586);
  v7 = (wil::details *)*((_QWORD *)this + 54);
  if ( v7 )
    wil::details::CloseHandle(v7, v6);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 53);
  if ( *v3 )
    wil::details::CloseHandle(*v3, v8);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 51);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 41);
  if ( *v5 )
    wil::details::CloseHandle(*v5, v9);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((char *)this + 296);
  v11 = (wil::details *)*((_QWORD *)this + 36);
  if ( v11 )
    wil::details::CloseHandle(v11, v10);
  if ( *v2 )
    wil::details::CloseHandle(*v2, v10);
  v12 = (wil::details *)*((_QWORD *)this + 33);
  if ( v12 )
    wil::details::CloseHandle(v12, v10);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 32);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 26);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((char *)this + 120);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 10);
  ATL::CComSafeDeleteCriticalSection::~CComSafeDeleteCriticalSection((CAudioPump *)((char *)this + 24));
}
