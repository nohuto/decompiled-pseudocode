/*
 * XREFs of ?InitializeEvents@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAAJXZ @ 0x14004BFBC
 * Callers:
 *     ?RuntimeClassInitialize@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@QEAAJPEAX@Z @ 0x14001B8B8 (-RuntimeClassInitialize@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@QEAAJPEAX@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x14001CC70 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHCMNOTIFICATION__@@P6AKPEAU1@@Z$1?CM_Unregister_Notification@@YAK0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHCMNOTIFICATION__@@@Z @ 0x14001CCB0 (-reset@-$unique_storage@U-$resource_policy@PEAUHCMNOTIFICATION__@@P6AKPEAU1@@Z$1-CM_Unregister_N.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14001CEE8 (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?create@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJW4EventOptions@2@PEBGPEAU_SECURITY_ATTRIBUTES@@PEA_N@Z @ 0x14001D164 (-create@-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x14002223C (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x1400268A8 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x140045738 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ??$CreateExternalObjectVector@UIBuffer@Streams@Storage@Windows@@V?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@Internal@Collections@Foundation@4@@detail@Internal@Collections@Foundation@Windows@@YAJP8IVectorStatics@Detail@234@EAAJPEBUObjectVectorInfo@6234@PEAPEAUIInspectable@@@ZPEAPEAV?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@1234@@Z @ 0x14004C304 (--$CreateExternalObjectVector@UIBuffer@Streams@Storage@Windows@@V-$Vector@PEAUIBuffer@Streams@St.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x14005738C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 *     memset_0 @ 0x14005A0E4 (memset_0.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x140077B40 (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::InitializeEvents(char *pv)
{
  void *v2; // r14
  RTL_SRWLOCK *v3; // rbx
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // edi
  int Error; // eax
  unsigned int LastError; // ebx
  __int64 v10; // r9
  __int64 v11; // rdx
  struct _TP_WAIT *ThreadpoolWait; // rax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, LPVOID *); // rdi
  int v17; // eax
  HANDLE FileW; // rax
  const char *v19; // r9
  __int64 v20; // [rsp+40h] [rbp-C0h] BYREF
  LPVOID pva; // [rsp+48h] [rbp-B8h] BYREF
  void *v22; // [rsp+50h] [rbp-B0h] BYREF
  RTL_SRWLOCK *v23; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD v24[4]; // [rsp+60h] [rbp-A0h] BYREF
  void *v25; // [rsp+70h] [rbp-90h]
  wil::details::in1diag3 *retaddr; // [rsp+228h] [rbp+128h]

  v22 = 0LL;
  v2 = (void *)*((_QWORD *)pv + 14);
  v20 = 0LL;
  pva = 0LL;
  v3 = (RTL_SRWLOCK *)(pv + 200);
  AcquireSRWLockExclusive((PSRWLOCK)pv + 25);
  v23 = v3;
  v4 = *((_QWORD *)pv + 24);
  *((_QWORD *)pv + 24) = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = Windows::Foundation::Collections::Internal::detail::CreateExternalObjectVector<Windows::Storage::Streams::IBuffer,Windows::Foundation::Collections::Internal::Vector<Windows::Storage::Streams::IBuffer *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Storage::Streams::IBuffer *>>>(
         v4,
         pv + 192);
  v6 = v5;
  if ( v5 >= 0 )
  {
    _create___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z(
      (__int64)(pv + 184),
      0);
    if ( *((_QWORD *)pv + 23) )
    {
      ThreadpoolWait = CreateThreadpoolWait(
                         Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::ThreadpoolCallback,
                         pv,
                         0LL);
      *((_QWORD *)pv + 22) = ThreadpoolWait;
      if ( ThreadpoolWait )
      {
        SetThreadpoolWait(ThreadpoolWait, *((HANDLE *)pv + 23), 0LL);
        if ( (((unsigned __int64)v2 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
        {
          v13 = v20;
          v20 = 0LL;
          if ( v13 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
          v14 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))pv + 13))(
                  *((_QWORD *)pv + 13),
                  &GUID_3ade56af_4375_4413_9c91_4c652595ab07,
                  &v20);
          LastError = v14;
          if ( v14 < 0 )
          {
            v10 = (unsigned int)v14;
            v11 = 2150LL;
            goto LABEL_17;
          }
          v15 = v20;
          v16 = *(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v20 + 32LL);
          wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
            &pva,
            0LL);
          v17 = v16(v15, &pva);
          LastError = v17;
          if ( v17 < 0 )
          {
            v10 = (unsigned int)v17;
            v11 = 2153LL;
            goto LABEL_17;
          }
          FileW = CreateFileW((LPCWSTR)pva, 0x80000000, 3u, 0LL, 3u, 0x800080u, 0LL);
          wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
            &v22,
            FileW);
          v2 = v22;
          if ( !v22 || v22 == (void *)-1LL )
          {
            LastError = wil::details::in1diag3::Return_GetLastError(
                          retaddr,
                          (void *)0x879,
                          (unsigned int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
                          v19);
            goto LABEL_31;
          }
        }
        memset_0(v24, 0, 0x1A0uLL);
        v24[0] = 416;
        v24[2] = 1;
        v25 = v2;
        wil::details::unique_storage<wil::details::resource_policy<HCMNOTIFICATION__ *,unsigned long (*)(HCMNOTIFICATION__ *),&unsigned long CM_Unregister_Notification(HCMNOTIFICATION__ *),wistd::integral_constant<unsigned __int64,0>,HCMNOTIFICATION__ *,HCMNOTIFICATION__ *,0,std::nullptr_t>>::reset(
          (__int64 *)pv + 18,
          0LL);
        if ( !(unsigned int)CM_Register_Notification(
                              v24,
                              pv,
                              Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::CMModulesNotificationCallback,
                              pv + 144) )
        {
          LastError = 0;
          goto LABEL_31;
        }
        v11 = 2181LL;
      }
      else
      {
        v11 = 2141LL;
      }
      LastError = -2147467259;
      v10 = 2147500037LL;
    }
    else
    {
      Error = ATL::AtlHresultFromLastError();
      LastError = Error;
      if ( Error >= 0 )
      {
LABEL_31:
        wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v23);
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&pva);
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v20);
        wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v22);
        return LastError;
      }
      v10 = (unsigned int)Error;
      v11 = 2138LL;
    }
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
      (const char *)v10);
    goto LABEL_31;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x857,
    (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
    (const char *)(unsigned int)v5);
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  if ( pva )
    CoTaskMemFree(pva);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  return v6;
}
