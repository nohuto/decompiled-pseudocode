/*
 * XREFs of ?PublishApoTelemetry@@YAJPEBGU_GUID@@@Z @ 0x18000DA40
 * Callers:
 *     ?RuntimeClassInitialize@CVADServer@@QEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@@Z @ 0x18000CF44 (-RuntimeClassInitialize@CVADServer@@QEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVE.c)
 *     AudioServerGetMixFormat @ 0x1800827D0 (AudioServerGetMixFormat.c)
 *     AudioServerIsFormatSupported @ 0x180083480 (AudioServerIsFormatSupported.c)
 * Callees:
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x18000DC00 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000F870 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800271A0 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ @ 0x180027E54 (-GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ.c)
 *     ??1?$shared_any_t@V?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180027F9C (--1-$shared_any_t@V-$shared_storage@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6A.c)
 *     ??$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z @ 0x180029154 (--$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z.c)
 *     ??1?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180029ADC (--1-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?put@?$shared_any_t@V?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180050C2C (-put@-$shared_any_t@V-$shared_storage@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     std::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_e0af659f64b105a4e9b6b315aa2a08ae__0_ @ 0x18010B2E4 (std--function_void___cdecl(void)_--function_void___cdecl(void)___lambda_e0af659f64b105a4e9b6b315.c)
 *     _lambda_e0af659f64b105a4e9b6b315aa2a08ae_::_lambda_e0af659f64b105a4e9b6b315aa2a08ae_ @ 0x18010B698 (_lambda_e0af659f64b105a4e9b6b315aa2a08ae_--_lambda_e0af659f64b105a4e9b6b315aa2a08ae_.c)
 *     _lambda_e0af659f64b105a4e9b6b315aa2a08ae_::__lambda_e0af659f64b105a4e9b6b315aa2a08ae_ @ 0x18010B7E4 (_lambda_e0af659f64b105a4e9b6b315aa2a08ae_--__lambda_e0af659f64b105a4e9b6b315aa2a08ae_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall PublishApoTelemetry(CEndpointStoreCache *a1, struct _GUID *a2)
{
  int EndpointStore; // eax
  unsigned int v5; // ebx
  struct CEndpointStore *v6; // rcx
  __int64 v7; // r8
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  struct CSerialWorkQueue *SerialWorkQueue; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r9
  struct CEndpointStore *v17; // [rsp+20h] [rbp-49h] BYREF
  __int128 v18; // [rsp+28h] [rbp-41h] BYREF
  _BYTE v19[64]; // [rsp+40h] [rbp-29h] BYREF
  _BYTE v20[32]; // [rsp+80h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v17 = 0LL;
  EndpointStore = CEndpointStoreCache::GetEndpointStore(a1, (const unsigned __int16 *)a1, &v17);
  v5 = EndpointStore;
  if ( EndpointStore < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x545,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)EndpointStore,
      (int)v17);
    if ( v17 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release();
    return v5;
  }
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)v17 + 65, 1, 0) )
  {
    v18 = 0LL;
    v9 = wil::shared_any_t<wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>>::put(&v18);
    v12 = _AllocString<CTCoAllocPolicy>(v11, v10, a1, v9);
    v5 = v12;
    if ( v12 >= 0 )
    {
      SerialWorkQueue = GetSerialWorkQueue();
      v14 = lambda_e0af659f64b105a4e9b6b315aa2a08ae_::_lambda_e0af659f64b105a4e9b6b315aa2a08ae_(
              v20,
              &v18,
              a2,
              SerialWorkQueue);
      v15 = std::function_void___cdecl_void__::function_void___cdecl_void____lambda_e0af659f64b105a4e9b6b315aa2a08ae__0_(
              v19,
              v14);
      CSerialWorkQueue::QueueWorkItem(v16, v15);
      lambda_e0af659f64b105a4e9b6b315aa2a08ae_::__lambda_e0af659f64b105a4e9b6b315aa2a08ae_(v20);
      wil::shared_any_t<wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>>::~shared_any_t<wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>>(&v18);
      goto LABEL_3;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x54A,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v12,
      (int)v17);
    wil::shared_any_t<wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>>::~shared_any_t<wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>>(&v18);
    wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>(&v17);
    return v5;
  }
LABEL_3:
  v6 = v17;
  if ( v17 )
  {
    do
      v7 = *((unsigned int *)v6 + 3);
    while ( (_DWORD)v7 != 0x7FFFFFFF
         && (_DWORD)v7 != _InterlockedCompareExchange((volatile signed __int32 *)v6 + 3, v7 - 1, v7) );
    if ( (_DWORD)v7 == 1 )
    {
      (*(void (__fastcall **)(struct CEndpointStore *, __int64, __int64, __int64))(*(_QWORD *)v17 + 24LL))(
        v17,
        1LL,
        v7,
        0x7FFFFFFFLL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                          + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return 0LL;
}
