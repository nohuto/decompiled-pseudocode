/*
 * XREFs of ?OnModuleChanged@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAUIAudioDeviceBroker@Internal@234@PEAUIAudioDeviceBrokerChangedEventArgs@6234@@Z @ 0x140055BA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x140027A18 (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x14004303C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x140045A38 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ??1?$com_ptr_t@VAudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140058828 (--1-$com_ptr_t@VAudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@Uerr_returncode_po.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     ??$?0$0CD@@StringReference@Internal@Windows@@QEAA@AEAY0CD@$$CBG@Z @ 0x140077014 (--$-0$0CD@@StringReference@Internal@Windows@@QEAA@AEAY0CD@$$CBG@Z.c)
 *     ??$ActivateInstance@UIDataWriter@Streams@Storage@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUIDataWriter@Streams@Storage@1@@Z @ 0x1400770AC (--$ActivateInstance@UIDataWriter@Streams@Storage@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@.c)
 *     ??$DoInvoke@V_lambda_9d7fead59395791ab94fec2ef4162c73_@@@?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_9d7fead59395791ab94fec2ef4162c73_@@@Z @ 0x140077F58 (--$DoInvoke@V_lambda_9d7fead59395791ab94fec2ef4162c73_@@@-$EventSource@U-$ITypedEventHandler@PEA.c)
 *     ??$Make@VAudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@PEAUIAudioDeviceModule@234@PEAUIBuffer@Streams@Storage@4@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VAudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@@12@$$QEAPEAUIAudioDeviceModule@Devices@Media@Windows@@$$QEAPEAUIBuffer@Streams@Storage@7@@Z @ 0x1400785EC (--$Make@VAudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@PEAUIAudioDeviceModule@23.c)
 *     ?FindAllByIdAndInstance@AudioDeviceModulesManager@Devices@Media@Windows@@AEAAJPEAUHSTRING__@@IPEAPEAU?$IVectorView@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@4@@Z @ 0x14007AA6C (-FindAllByIdAndInstance@AudioDeviceModulesManager@Devices@Media@Windows@@AEAAJPEAUHSTRING__@@IPE.c)
 *     ?GuidToHString@@YAJU_GUID@@PEAPEAUHSTRING__@@@Z @ 0x14007C424 (-GuidToHString@@YAJU_GUID@@PEAPEAUHSTRING__@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14007E7B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioDeviceModul.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=20
__int64 __fastcall Windows::Media::Devices::AudioDeviceModulesManager::OnModuleChanged(
        RTL_SRWLOCK *this,
        struct Windows::Media::Devices::Internal::IAudioDeviceBroker *a2,
        struct Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs *a3)
{
  RTL_SRWLOCK *v5; // rbx
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  void *v10; // rax
  const unsigned __int16 *v11; // rdx
  unsigned int *v12; // rbx
  __int64 v13; // r9
  __int64 v14; // rcx
  _QWORD *v15; // rax
  int ActivationFactory; // edi
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 (__fastcall *v19)(__int64, __int64, __int64 *); // r14
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 (__fastcall *v23)(__int64, _QWORD, RTL_SRWLOCK **); // r14
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 (__fastcall *v27)(__int64, __int64 *); // rdi
  __int64 v28; // rcx
  __int64 *v29; // rax
  __int64 v30; // rbx
  SIZE_T cb; // [rsp+20h] [rbp-79h] BYREF
  HSTRING string; // [rsp+28h] [rbp-71h] BYREF
  RTL_SRWLOCK *v34; // [rsp+30h] [rbp-69h] BYREF
  __int64 v35; // [rsp+38h] [rbp-61h] BYREF
  __int64 v36; // [rsp+40h] [rbp-59h] BYREF
  __int64 v37; // [rsp+48h] [rbp-51h] BYREF
  __int64 v38; // [rsp+50h] [rbp-49h] BYREF
  __int64 v39; // [rsp+58h] [rbp-41h] BYREF
  __int64 v40; // [rsp+60h] [rbp-39h] BYREF
  int v41; // [rsp+68h] [rbp-31h] BYREF
  __int64 v42; // [rsp+70h] [rbp-29h] BYREF
  unsigned int *v43; // [rsp+78h] [rbp-21h] BYREF
  __int64 v44; // [rsp+80h] [rbp-19h] BYREF
  RTL_SRWLOCK *v45; // [rsp+88h] [rbp-11h] BYREF
  RTL_SRWLOCK *v46[2]; // [rsp+90h] [rbp-9h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+A0h] [rbp+7h] BYREF
  __int64 v48; // [rsp+B8h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v5 = this + 8;
  AcquireSRWLockExclusive(this + 8);
  v46[0] = v5;
  v40 = 0LL;
  v39 = 0LL;
  v36 = 0LL;
  v38 = 0LL;
  v37 = 0LL;
  v35 = 0LL;
  v34 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  LODWORD(cb) = 0;
  string = 0LL;
  v41 = 0;
  if ( LOBYTE(this[16].Ptr) && this[14].Ptr )
  {
    v6 = *(_QWORD *)a3;
    v38 = 0LL;
    v7 = (*(__int64 (__fastcall **)(struct Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs *, __int64 *))(v6 + 48))(
           a3,
           &v38);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 883LL;
LABEL_53:
      v13 = (unsigned int)v7;
      goto LABEL_54;
    }
    v7 = (*(__int64 (__fastcall **)(__int64, SIZE_T *))(*(_QWORD *)v38 + 56LL))(v38, &cb);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 884LL;
      goto LABEL_53;
    }
    if ( (unsigned int)cb < 0x28 )
    {
      v8 = 0;
LABEL_55:
      WindowsDeleteString(string);
      string = 0LL;
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        (void **)&v43,
        0LL);
      wil::com_ptr_t<Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs,wil::err_returncode_policy>::~com_ptr_t<Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs,wil::err_returncode_policy>(&v42);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v34);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v35);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v37);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v38);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v36);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v39);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v40);
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(v46);
      return v8;
    }
    v10 = CoTaskMemAlloc((unsigned int)cb);
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      (void **)&v43,
      v10);
    v12 = v43;
    if ( !v43 )
    {
      v8 = -2147024882;
      v13 = 2147942414LL;
      v9 = 892LL;
LABEL_54:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
        (const char *)v13);
      goto LABEL_55;
    }
    v14 = v40;
    v40 = 0LL;
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    v15 = (_QWORD *)Windows::Internal::StringReference::StringReference(
                      (HSTRING *)&hstringHeader,
                      (const unsigned __int16 (*)[35])v11);
    ActivationFactory = RoGetActivationFactory(*v15, &GUID_11fcbfc8_f93a_471b_b121_f379e349313c, &v40);
    if ( ActivationFactory < 0 )
    {
      v17 = 894LL;
LABEL_15:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
        (const char *)(unsigned int)ActivationFactory);
      v8 = ActivationFactory;
      goto LABEL_55;
    }
    v18 = v40;
    v19 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v40 + 48LL);
    v20 = v39;
    v39 = 0LL;
    if ( v20 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    ActivationFactory = v19(v18, v38, &v39);
    if ( ActivationFactory < 0 )
    {
      v17 = 895LL;
      goto LABEL_15;
    }
    ActivationFactory = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned int *))(*(_QWORD *)v39 + 112LL))(
                          v39,
                          (unsigned int)cb,
                          v12);
    if ( ActivationFactory < 0 )
    {
      v17 = 896LL;
      goto LABEL_15;
    }
    WindowsDeleteString(string);
    string = 0LL;
    *(_OWORD *)&hstringHeader.Reserved.Reserved1 = *((_OWORD *)v12 + 1);
    ActivationFactory = GuidToHString((struct _GUID *)&hstringHeader, &string);
    if ( ActivationFactory < 0 )
    {
      v17 = 900LL;
      goto LABEL_15;
    }
    v21 = v35;
    v35 = 0LL;
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    ActivationFactory = Windows::Media::Devices::AudioDeviceModulesManager::FindAllByIdAndInstance(
                          this,
                          string,
                          v12[8],
                          &v35);
    if ( ActivationFactory < 0 )
    {
      v17 = 901LL;
      goto LABEL_15;
    }
    ActivationFactory = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v35 + 56LL))(v35, &v41);
    if ( ActivationFactory < 0 )
    {
      v17 = 905LL;
      goto LABEL_15;
    }
    if ( v41 != 1 )
    {
      v8 = -2147467259;
      v13 = 2147500037LL;
      v9 = 906LL;
      goto LABEL_54;
    }
    v22 = v35;
    v23 = *(__int64 (__fastcall **)(__int64, _QWORD, RTL_SRWLOCK **))(*(_QWORD *)v35 + 48LL);
    v24 = (__int64)v34;
    v34 = 0LL;
    if ( v24 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    ActivationFactory = v23(v22, 0LL, &v34);
    if ( ActivationFactory < 0 )
    {
      v17 = 909LL;
      goto LABEL_15;
    }
    if ( !v34 )
    {
      v8 = -2147467259;
      v13 = 2147500037LL;
      v9 = 910LL;
      goto LABEL_54;
    }
    v25 = v36;
    v36 = 0LL;
    if ( v25 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    v48 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Storage.Streams.DataWriter",
      0x23u,
      0x22u);
    ActivationFactory = Windows::Foundation::ActivateInstance<Windows::Storage::Streams::IDataWriter>(v48, &v36);
    if ( ActivationFactory < 0 )
    {
      v17 = 914LL;
      goto LABEL_15;
    }
    if ( v36 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned int *))(*(_QWORD *)v36 + 96LL))(
             v36,
             (unsigned int)(cb - 40),
             v12 + 10);
      v8 = v7;
      if ( v7 < 0 )
      {
        v9 = 918LL;
        goto LABEL_53;
      }
      v26 = v36;
      v27 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v36 + 248LL);
      v28 = v37;
      v37 = 0LL;
      if ( v28 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
      v7 = v27(v26, &v37);
      v8 = v7;
      if ( v7 < 0 )
      {
        v9 = 919LL;
        goto LABEL_53;
      }
    }
    v42 = v37;
    v45 = v34;
    v29 = (__int64 *)Microsoft::WRL::Details::Make<Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs,Windows::Media::Devices::IAudioDeviceModule *,Windows::Storage::Streams::IBuffer *>(
                       &v44,
                       &v45,
                       &v42);
    v30 = *v29;
    *v29 = 0LL;
    v42 = v30;
    if ( v44 )
    {
      v44 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Media::Devices::IAudioDeviceModuleNotificationEventArgs,Microsoft::WRL::FtmBase>::Release();
    }
    v44 = v30;
    v45 = this;
    hstringHeader.Reserved.Reserved1 = &v45;
    *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = &v44;
    v7 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::AudioDeviceModulesManager *,Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::DoInvoke<_lambda_9d7fead59395791ab94fec2ef4162c73_>(
           &this[10],
           &hstringHeader);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 926LL;
      goto LABEL_53;
    }
    WindowsDeleteString(string);
    string = 0LL;
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      (void **)&v43,
      0LL);
    wil::com_ptr_t<Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs,wil::err_returncode_policy>::~com_ptr_t<Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs,wil::err_returncode_policy>(&v42);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v34);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v35);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v37);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v38);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v36);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v39);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v40);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(v46);
  }
  else
  {
    WindowsDeleteString(0LL);
    string = 0LL;
    if ( v5 )
      ReleaseSRWLockExclusive(v5);
  }
  return 0LL;
}
