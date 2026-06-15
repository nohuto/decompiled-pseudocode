/*
 * XREFs of ?CMModulesNotificationCallback@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@CAKPEAUHCMNOTIFICATION__@@PEAXW4_CM_NOTIFY_ACTION@@PEAU_CM_NOTIFY_EVENT_DATA@@K@Z @ 0x14004AD60
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x14001DE10 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x14002223C (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x140042D3C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x140045738 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 *     ??$ActivateInstance@UIDataWriter@Streams@Storage@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUIDataWriter@Streams@Storage@1@@Z @ 0x140074BD4 (--$ActivateInstance@UIDataWriter@Streams@Storage@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@.c)
 *     ??1?$com_ptr_t@VAudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140076DA4 (--1-$com_ptr_t@VAudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@Uerr_returncod.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::CMModulesNotificationCallback(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        unsigned int a5)
{
  int v7; // r8d
  int v8; // r8d
  __int64 v9; // rax
  __int64 v10; // rax
  int (__fastcall *v11)(__int64, __int64 *); // rsi
  void *v12; // rdx
  RTL_SRWLOCK *v13; // rbx
  __int64 v15; // [rsp+20h] [rbp-40h] BYREF
  __int64 v16; // [rsp+28h] [rbp-38h] BYREF
  RTL_SRWLOCK *v17; // [rsp+30h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-28h] BYREF
  __int64 v19; // [rsp+50h] [rbp-10h]

  if ( a2 && *(_QWORD *)(a2 + 144) == a1 )
  {
    v7 = a3 - 1;
    if ( v7 && (v8 = v7 - 1) != 0 )
    {
      if ( v8 == 4 )
      {
        v16 = 0LL;
        v15 = 0LL;
        v17 = 0LL;
        if ( a5 >= 0x24 && *(_DWORD *)a4 == 1 && *(_DWORD *)(a4 + 28) )
        {
          v9 = *(_QWORD *)(a4 + 8) - *(_QWORD *)&GUID_9c2220f0_d9a6_4d5c_a036_573857fd50d2.Data1;
          if ( !v9 )
            v9 = *(_QWORD *)(a4 + 16) - *(_QWORD *)GUID_9c2220f0_d9a6_4d5c_a036_573857fd50d2.Data4;
          if ( !v9 && *(_DWORD *)(a4 + 28) >= 0x28u )
          {
            v10 = *(_QWORD *)(a4 + 32) - *(_QWORD *)(a2 + 120);
            if ( !v10 )
              v10 = *(_QWORD *)(a4 + 40) - *(_QWORD *)(a2 + 128);
            if ( !v10 )
            {
              v16 = 0LL;
              v19 = 0LL;
              Microsoft::WRL::Wrappers::HStringReference::CreateReference(
                &hstringHeader,
                L"Windows.Storage.Streams.DataWriter",
                0x23u,
                0x22u);
              if ( (int)Windows::Foundation::ActivateInstance<Windows::Storage::Streams::IDataWriter>(v19, &v16) >= 0 )
              {
                if ( v16 )
                {
                  if ( (*(int (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v16 + 96LL))(
                         v16,
                         *(unsigned int *)(a4 + 28),
                         a4 + 32) >= 0 )
                  {
                    v11 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v16 + 248LL);
                    v15 = 0LL;
                    if ( v11(v16, &v15) >= 0
                      && (*(int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a2 + 192) + 104LL))(
                           *(_QWORD *)(a2 + 192),
                           v15) >= 0 )
                    {
                      wil::details::SetEvent(*(wil::details **)(a2 + 184), v12);
                    }
                  }
                }
              }
            }
          }
        }
        wil::com_ptr_t<Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs,wil::err_returncode_policy>::~com_ptr_t<Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs,wil::err_returncode_policy>(&v17);
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v15);
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v16);
      }
    }
    else
    {
      v13 = (RTL_SRWLOCK *)(a2 + 200);
      AcquireSRWLockExclusive((PSRWLOCK)(a2 + 200));
      v17 = v13;
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        (void **)(a2 + 112),
        0LL);
      *(_BYTE *)(a2 + 208) = 1;
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v17);
    }
  }
  return 0LL;
}
