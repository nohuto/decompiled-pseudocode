/*
 * XREFs of ?RegisterBrokerEvents@AudioDeviceModulesManager@Devices@Media@Windows@@AEAAJXZ @ 0x14001AE78
 * Callers:
 *     ?RuntimeClassInitialize@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAX@Z @ 0x14001AC28 (-RuntimeClassInitialize@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@V_lambda_511023af88e174782ac1e7ddac964c62_@@$0?0PEAUIAudioDeviceBroker@Internal@Devices@Media@3@PEAUIAudioDeviceBrokerChangedEventArgs@6783@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAUIAudioDeviceBroker@2345@@Internal@Foundation@Windows@@U?$AggregateType@PEAVAudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@PEAUIAudioDeviceBrokerChangedEventArgs@2345@@234@@Foundation@Windows@@EAAJPEAUIAudioDeviceBroker@Internal@Devices@Media@3@PEAUIAudioDeviceBrokerChangedEventArgs@5673@@Z@Details@WRL@Microsoft@@QEAA@$$QEAV_lambda_511023af88e174782ac1e7ddac964c62_@@@Z @ 0x14001AF64 (--0-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Win.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058E48 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Media::Devices::AudioDeviceModulesManager::RegisterBrokerEvents(
        Windows::Media::Devices::AudioDeviceModulesManager *this)
{
  void *v2; // rax
  __int64 v3; // rbx
  int v4; // eax
  unsigned int v5; // esi
  _QWORD v7[2]; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+30h] [rbp-18h]
  int v9; // [rsp+34h] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v7[0] = this;
  v7[1] = Windows::Media::Devices::AudioDeviceModulesManager::OnModuleChanged;
  v8 = 0;
  v9 = (unsigned __int64)Windows::Media::Devices::AudioDeviceModulesManager::OnModuleChanged >> 32;
  v2 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
    v3 = Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::IAudioDeviceBroker *>,Windows::Foundation::Internal::AggregateType<Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *,Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs *>>::*)(Windows::Media::Devices::Internal::IAudioDeviceBroker *,Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,_lambda_511023af88e174782ac1e7ddac964c62_,-1,Windows::Media::Devices::Internal::IAudioDeviceBroker *,Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs *>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,_lambda_511023af88e174782ac1e7ddac964c62_,-1,Windows::Media::Devices::Internal::IAudioDeviceBroker *,Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs *>(
           v2,
           v7);
  else
    v3 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(**((_QWORD **)this + 13) + 64LL))(
         *((_QWORD *)this + 13),
         v3,
         (char *)this + 120);
  v5 = v4;
  if ( v4 >= 0 )
  {
    *((_BYTE *)this + 128) = 1;
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20C,
      (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
      (const char *)(unsigned int)v4);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    return v5;
  }
}
