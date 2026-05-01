/*
 * XREFs of ?IsPinAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@@Z @ 0x180057378
 * Callers:
 *     ?IsPinAllowed@?$produce@UPinManager@implementation@Shell@Internal@Windows@winrt@@UIPinManager@3456@@impl@winrt@@UEAAHPEAXPEA_N@Z @ 0x1805E7200 (-IsPinAllowed@-$produce@UPinManager@implementation@Shell@Internal@Windows@winrt@@UIPinManager@34.c)
 * Callees:
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180026C3C (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180049024 (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x180056268 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ??1?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180057688 (--1-$unique_storage@U-$handle_null_only_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsPinOperationAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NV?$shared_ptr@VPinOperationContext@@@std@@_NAEAV?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@@Z @ 0x18028A488 (-IsPinOperationAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NV-$shared_p.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18028A86C (--1-$com_ptr_t@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@Uer.c)
 *     ??0_lambda_3de5d145e6ce0c9b4d563a35329ea675_@@QEAA@AEAP8CPinnedList@@EAAJW4TaskbarLayoutType@@@ZAEAW42@AEAJ@Z @ 0x18028CA38 (--0_lambda_3de5d145e6ce0c9b4d563a35329ea675_@@QEAA@AEAP8CPinnedList@@EAAJW4TaskbarLayoutType@@@Z.c)
 *     ?GetPinRequestContext@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$tuple@V?$shared_ptr@VPinRequestContext@@@std@@V?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@AEBUhstring@6@_NAEAV?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@@Z @ 0x18028CA50 (-GetPinRequestContext@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$tuple@V-$.c)
 *     ?RequestorBestAvailableAppId@PinRequestContext@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x18028F580 (-RequestorBestAvailableAppId@PinRequestContext@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std.c)
 *     ?Create@PinOperationContext@@SA?AV?$shared_ptr@VPinOperationContext@@@std@@V?$shared_ptr@VPinRequestContext@@@3@AEBUhstring@winrt@@1@Z @ 0x18028F698 (-Create@PinOperationContext@@SA-AV-$shared_ptr@VPinOperationContext@@@std@@V-$shared_ptr@VPinReq.c)
 *     ?StartActivity@PinManagerIsPinAllowed@PinManagerTelemetry@@QEAAXPEBG@Z @ 0x18028FD94 (-StartActivity@PinManagerIsPinAllowed@PinManagerTelemetry@@QEAAXPEBG@Z.c)
 *     ??0?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18028FE40 (--0-$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0I.c)
 *     ?IsPinRequestorAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NPEAXV?$shared_ptr@VPinRequestContext@@@std@@_NAEAV?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@@Z @ 0x18028FEE4 (-IsPinRequestorAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NPEAXV-$shar.c)
 *     ?Stop@PinManagerIsPinAllowed@PinManagerTelemetry@@QEAAXPEBGW4PinManagerIsPinAllowedResult@2@@Z @ 0x180290304 (-Stop@PinManagerIsPinAllowed@PinManagerTelemetry@@QEAAXPEBGW4PinManagerIsPinAllowedResult@2@@Z.c)
 *     ?reset@?$shared_object@V?$ActivityData@VPinManagerTelemetry@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1802A7090 (-reset@-$shared_object@V-$ActivityData@VPinManagerTelemetry@@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ??1?$ActivityData@VPinManagerTelemetry@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1802A70E0 (--1-$ActivityData@VPinManagerTelemetry@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@.c)
 *     ??1PinManagerIsPinAllowed@PinManagerTelemetry@@QEAA@XZ @ 0x1802B6EBC (--1PinManagerIsPinAllowed@PinManagerTelemetry@@QEAA@XZ.c)
 *     ?Destroy@?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1802B6EE8 (-Destroy@-$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_P.c)
 *     ??1?$tuple@V?$shared_ptr@VPinRequestContext@@@std@@V?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@QEAA@XZ @ 0x1802CB1C0 (--1-$tuple@V-$shared_ptr@VPinRequestContext@@@std@@V-$unique_any_t@V-$unique_storage@U-$handle_n.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ??$QueueTask@V_lambda_cde4a48620a5d22db594fe5feaac6c81_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@W4TaskOptions@12@K$$QEAV_lambda_cde4a48620a5d22db594fe5feaac6c81_@@@Z @ 0x1805E0850 (--$QueueTask@V_lambda_cde4a48620a5d22db594fe5feaac6c81_@@@ComTaskPool@Internal@Windows@@SAJW4Tas.c)
 *     ?__autoclassinit2@_lambda_cde4a48620a5d22db594fe5feaac6c81_@@QEAAX_K@Z @ 0x1805EC6A8 (-__autoclassinit2@_lambda_cde4a48620a5d22db594fe5feaac6c81_@@QEAAX_K@Z.c)
 *     ?IsNotificationConsentAvailable@@YA_NXZ @ 0x1805EFB20 (-IsNotificationConsentAvailable@@YA_NXZ.c)
 */

// Hidden C++ exception states: #wind=7
char __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::IsPinAllowed(
        winrt::Windows::Internal::Shell::implementation::PinManager *this,
        const struct winrt::hstring *a2)
{
  const unsigned __int16 *v4; // rbx
  _QWORD *v5; // rax
  __int64 v6; // r9
  _QWORD *v7; // rax
  _QWORD *v9; // rax
  __int64 v10; // r8
  _QWORD *v11; // rax
  __int64 v12; // r8
  unsigned __int64 v13; // rdx
  DWORD CurrentThreadId; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rax
  volatile signed __int32 **v20; // rax
  char v21; // bl
  volatile signed __int32 *v22[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v23; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v24[2]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v25[2]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v26[8]; // [rsp+70h] [rbp-90h] BYREF
  int v27[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v28; // [rsp+80h] [rbp-80h] BYREF
  __int64 v29; // [rsp+88h] [rbp-78h] BYREF
  std::_Ref_count_base *v30; // [rsp+90h] [rbp-70h]
  std::_Ref_count_base *v31[2]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v32[32]; // [rsp+B0h] [rbp-50h] BYREF
  void **v33; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v34[272]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v35[8]; // [rsp+1E8h] [rbp+E8h] BYREF
  _BYTE v36[48]; // [rsp+1F0h] [rbp+F0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+258h] [rbp+158h]

  memset_0(&v33, 0, 0x150uLL);
  v4 = winrt::hstring::c_str(a2);
  wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<PinManagerTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)&v33);
  v33 = &PinManagerTelemetry::PinManagerIsPinAllowed::`vftable';
  PinManagerTelemetry::PinManagerIsPinAllowed::StartActivity((PinManagerTelemetry::PinManagerIsPinAllowed *)&v33, v4);
  *(_QWORD *)v27 = 0LL;
  winrt::Windows::Internal::Shell::implementation::PinManager::GetPinRequestContext(
    (_DWORD)this,
    (unsigned int)&v28,
    (_DWORD)a2,
    0,
    (__int64)v27);
  v5 = std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(v24, &v29);
  LOBYTE(v6) = 1;
  if ( !(unsigned __int8)winrt::Windows::Internal::Shell::implementation::PinManager::IsPinRequestorAllowed(
                           v27,
                           v28,
                           v5,
                           v6) )
  {
    v7 = (_QWORD *)PinRequestContext::RequestorBestAvailableAppId(v29, v25);
    PinManagerTelemetry::PinManagerIsPinAllowed::Stop(&v33, *v7, 1LL);
LABEL_3:
    std::tuple<std::shared_ptr<PinRequestContext>,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>::~tuple<std::shared_ptr<PinRequestContext>,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>(&v28);
    wil::com_ptr_t<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>,wil::err_returncode_policy>(v27);
    PinManagerTelemetry::PinManagerIsPinAllowed::~PinManagerIsPinAllowed((PinManagerTelemetry::PinManagerIsPinAllowed *)&v33);
    return 0;
  }
  *(_OWORD *)v31 = 0LL;
  v22[0] = 0LL;
  v9 = std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(v25, &v29);
  PinOperationContext::Create(v31, v9, a2, v22);
  winrt::handle_type<winrt::impl::hstring_traits>::close(v22);
  if ( v31[1] )
    _InterlockedIncrement((volatile signed __int32 *)v31[1] + 2);
  v23 = *(_OWORD *)v31;
  LOBYTE(v10) = 1;
  if ( !(unsigned __int8)winrt::Windows::Internal::Shell::implementation::PinManager::IsPinOperationAllowed(
                           this,
                           &v23,
                           v10,
                           v27) )
  {
    v11 = (_QWORD *)PinRequestContext::RequestorBestAvailableAppId(v29, v25);
    v12 = 2LL;
    goto LABEL_10;
  }
  if ( !IsNotificationConsentAvailable() )
  {
    v11 = (_QWORD *)PinRequestContext::RequestorBestAvailableAppId(v29, v25);
    v12 = 4LL;
LABEL_10:
    PinManagerTelemetry::PinManagerIsPinAllowed::Stop(&v33, *v11, v12);
    if ( v31[1] )
      std::_Ref_count_base::_Decref(v31[1]);
    goto LABEL_3;
  }
  v26[0] = 0;
  _lambda_cde4a48620a5d22db594fe5feaac6c81_::__autoclassinit2((_lambda_cde4a48620a5d22db594fe5feaac6c81_ *)v32, v13);
  _lambda_3de5d145e6ce0c9b4d563a35329ea675_::_lambda_3de5d145e6ce0c9b4d563a35329ea675_(v32, &v29, v31, v26);
  CurrentThreadId = GetCurrentThreadId();
  v17 = Windows::Internal::ComTaskPool::QueueTask<_lambda_cde4a48620a5d22db594fe5feaac6c81_>(
          v16,
          v15,
          CurrentThreadId,
          v32);
  if ( v17 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x2EA,
      (unsigned int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
      (const char *)(unsigned int)v17,
      (int)v27);
  v18 = *(_QWORD *)(v29 + 24);
  if ( v18 )
  {
    v22[0] = *(volatile signed __int32 **)(v29 + 24);
    v19 = -1LL;
    do
      ++v19;
    while ( *(_WORD *)(v18 + 2 * v19) );
    v22[1] = (volatile signed __int32 *)v19;
    v20 = v22;
  }
  else
  {
    v24[0] = 0LL;
    v24[1] = 0LL;
    v20 = (volatile signed __int32 **)v24;
  }
  PinManagerTelemetry::PinManagerIsPinAllowed::Stop(&v33, *v20, v26[0] == 0 ? 3 : 0);
  v21 = v26[0];
  if ( v31[1] )
    std::_Ref_count_base::_Decref(v31[1]);
  if ( v30 )
    std::_Ref_count_base::_Decref(v30);
  wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v28);
  wil::com_ptr_t<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>,wil::err_returncode_policy>(v27);
  v33 = &PinManagerTelemetry::PinManagerIsPinAllowed::`vftable';
  wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v33);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v36);
  wil::details::shared_object<wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<PinManagerTelemetry,_TlgReflectorTag_Param0IsProviderType>>::reset(v35);
  wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityData<PinManagerTelemetry,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<PinManagerTelemetry,_TlgReflectorTag_Param0IsProviderType>(v34);
  return v21;
}
