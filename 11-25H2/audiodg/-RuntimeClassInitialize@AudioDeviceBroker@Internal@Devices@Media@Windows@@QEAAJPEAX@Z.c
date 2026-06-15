/*
 * XREFs of ?RuntimeClassInitialize@AudioDeviceBroker@Internal@Devices@Media@Windows@@QEAAJPEAX@Z @ 0x14001B0B8
 * Callers:
 *     ??$MakeAndInitialize@VAudioDeviceBroker@Internal@Devices@Media@Windows@@UIAudioDeviceBroker@2345@AEAPEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceBroker@Internal@Devices@Media@Windows@@AEAPEAX@Z @ 0x14001AD44 (--$MakeAndInitialize@VAudioDeviceBroker@Internal@Devices@Media@Windows@@UIAudioDeviceBroker@2345.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x140012DA8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$CreateExternalObjectVector@VAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@V?$Vector@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@U?$DefaultVectorOptions@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@@2Collections@Foundation@5@@detail@Internal@Collections@Foundation@Windows@@YAJP8IVectorStatics@Detail@234@EAAJPEBUObjectVectorInfo@6234@PEAPEAUIInspectable@@@ZPEAPEAV?$Vector@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@U?$DefaultVectorOptions@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@@1234@@Z @ 0x14001B364 (--$CreateExternalObjectVector@VAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@V-$Vector.c)
 *     ??0?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@V_lambda_29cc984d3fc8a0f639482bc84a6e6ba6_@@$0?0PEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@3@PEAUIAudioDeviceBrokerChangedEventArgs@6783@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAUIAudioDeviceBrokerDevice@2345@@Internal@Foundation@Windows@@U?$AggregateType@PEAVAudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@PEAUIAudioDeviceBrokerChangedEventArgs@2345@@234@@Foundation@Windows@@EAAJPEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@3@PEAUIAudioDeviceBrokerChangedEventArgs@5673@@Z@Details@WRL@Microsoft@@QEAA@$$QEAV_lambda_29cc984d3fc8a0f639482bc84a6e6ba6_@@@Z @ 0x14001B588 (--0-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@Devices@Med.c)
 *     ??0?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@QEAA@AEBUEventRegistrationTokenEqual@1Devices@Media@4@Upermission@01234@@Z @ 0x14001B600 (--0-$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows.c)
 *     ??$MakeAndInitialize@VAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UIAudioDeviceBrokerDevice@2345@AEAPEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAPEAX@Z @ 0x14001B9EC (--$MakeAndInitialize@VAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UIAudioDeviceBroke.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058E48 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBroker::RuntimeClassInitialize(
        Windows::Media::Devices::Internal::AudioDeviceBroker *this,
        void *a2)
{
  void *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // edi
  __int64 v9; // rcx
  void *v10; // rax
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rdi
  int v14; // eax
  unsigned int v15; // r14d
  __int64 v17; // r9
  __int64 v18; // rdx
  _QWORD v19[2]; // [rsp+20h] [rbp-28h] BYREF
  int v20; // [rsp+30h] [rbp-18h]
  int v21; // [rsp+34h] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+30h]
  __int64 v23; // [rsp+80h] [rbp+38h] BYREF
  void *v24; // [rsp+88h] [rbp+40h] BYREF
  __int64 v25; // [rsp+90h] [rbp+48h] BYREF
  __int64 v26; // [rsp+98h] [rbp+50h] BYREF

  v24 = a2;
  v23 = 0LL;
  v25 = 0LL;
  v19[0] = this;
  v19[1] = Windows::Media::Devices::Internal::AudioDeviceBroker::OnModuleChanged;
  v20 = 0;
  v21 = (unsigned __int64)Windows::Media::Devices::Internal::AudioDeviceBroker::OnModuleChanged >> 32;
  v4 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
    v5 = Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice *>,Windows::Foundation::Internal::AggregateType<Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *,Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs *>>::*)(Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice *,Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,_lambda_29cc984d3fc8a0f639482bc84a6e6ba6_,-1,Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice *,Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs *>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,_lambda_29cc984d3fc8a0f639482bc84a6e6ba6_,-1,Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice *,Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs *>(
           v4,
           v19);
  else
    v5 = 0LL;
  v26 = v5;
  if ( !a2 )
  {
    v15 = -2147467261;
    v17 = 2147500035LL;
    v18 = 1381LL;
LABEL_35:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
      (const char *)v17);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v23);
    return v15;
  }
  v6 = *((_QWORD *)this + 8);
  *((_QWORD *)this + 8) = 0LL;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = Windows::Foundation::Collections::Internal::detail::CreateExternalObjectVector<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice,Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>>>(
         v6,
         (char *)this + 64);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x566,
      (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
      (const char *)(unsigned int)v7);
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    return v8;
  }
  v9 = *((_QWORD *)this + 9);
  *((_QWORD *)this + 9) = 0LL;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  *((_QWORD *)this + 9) = 0LL;
  v8 = 0;
  v10 = operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v10
    && (v11 = Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>(v10)) != 0 )
  {
    *((_QWORD *)this + 9) = v11;
  }
  else
  {
    v8 = -2147024882;
  }
  if ( (v8 & 0x80000000) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x567,
      (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
      (const char *)v8);
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    return v8;
  }
  v23 = 0LL;
  v12 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice,Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice,void * &>(
          &v23,
          &v24);
  v8 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x568,
      (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
      (const char *)(unsigned int)v12);
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    if ( v23 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    return v8;
  }
  v13 = v23;
  v14 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v23 + 64LL))(v23, v5, &v25);
  v15 = v14;
  if ( v14 < 0 )
  {
    v17 = (unsigned int)v14;
    v18 = 1385LL;
    goto LABEL_35;
  }
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 8) + 104LL))(*((_QWORD *)this + 8), v13);
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 9) + 104LL))(*((_QWORD *)this + 9), v25);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  return 0LL;
}
