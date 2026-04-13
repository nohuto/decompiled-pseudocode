/*
 * XREFs of ?RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@PEAUHSTRING__@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@V?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@9@@Z @ 0x18007D3A0
 * Callers:
 *     ?RegisterTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@5@PEAUHSTRING__@@1@Z @ 0x18007D180 (-RegisterTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DDFC (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18004AF68 (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ??1?$function@$$A6AXPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z@std@@QEAA@XZ @ 0x18004C5D4 (--1-$function@$$A6AXPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Window.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180059B44 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_25fdd0f24a46fb884595cc4fd71754f0___ @ 0x180078A8C (Windows--Services--TargetedContent--Internal--ExecuteActionOnTrigger__lambda_25fdd0f24a46fb88459.c)
 *     Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_5ae508c06f66cfbd3de9e0eff18a9873___ @ 0x180078ECC (Windows--Services--TargetedContent--Internal--ExecuteActionOnTrigger__lambda_5ae508c06f66cfbd3de.c)
 *     wil::scope_exit__lambda_5274492350678889976b9fff638926bd___ @ 0x18007A3F4 (wil--scope_exit__lambda_5274492350678889976b9fff638926bd___.c)
 *     ??0_lambda_33066bbcaa202ed8496d422e2c9143b2_@@QEAA@AEAVHString@Wrappers@WRL@Microsoft@@AEAPEAUICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEA_N@Z @ 0x18007A550 (--0_lambda_33066bbcaa202ed8496d422e2c9143b2_@@QEAA@AEAVHString@Wrappers@WRL@Microsoft@@AEAPEAUIC.c)
 *     ??0?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18007A710 (--0-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@_ea_18007A710.c)
 *     wil::details::lambda_call__lambda_5274492350678889976b9fff638926bd___::_lambda_call__lambda_5274492350678889976b9fff638926bd___ @ 0x18007B120 (wil--details--lambda_call__lambda_5274492350678889976b9fff638926bd___--_lambda_call__lambda_5274.c)
 *     ??1TriggerManagerRegisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAA@XZ @ 0x18007B1D4 (--1TriggerManagerRegisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryMana.c)
 *     ??R?$_Func_class@JPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@U_Nil@7@U87@U87@U87@U87@@std@@QEBAJPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@1@@Z @ 0x18007B958 (--R-$_Func_class@JPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@.c)
 *     ?CreateCreativeRule@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18007BC70 (-CreateCreativeRule@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_ptr@VCreativeRule@R.c)
 *     ?StartActivity@TriggerManagerRegisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBD@Z @ 0x18007E260 (-StartActivity@TriggerManagerRegisterActivity@ContentDeliveryManagerTelemetry@Background@Content.c)
 *     ?Stop@TriggerManagerRegisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAX_NPEBD@Z @ 0x18007E614 (-Stop@TriggerManagerRegisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryM.c)
 *     ?CreateTriggerKey@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18008030C (-CreateTriggerKey@Internal@TargetedContent@Services@Windows@@YA-AVHString@Wrappers@WRL@Microsoft.c)
 *     ?ResolveRegisterTaskHandler@Internal@TargetedContent@Services@Windows@@YA?AV?$function@$$A6AJPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z@std@@W4TriggerRegistrationOption@1234@@Z @ 0x180081E30 (-ResolveRegisterTaskHandler@Internal@TargetedContent@Services@Windows@@YA-AV-$function@$$A6AJPEA.c)
 *     ?ResolveTriggerRegistrationOption@Internal@TargetedContent@Services@Windows@@YA?AW4TriggerRegistrationOption@1234@W4TargetedContentKnownTrigger@1234@@Z @ 0x180081FE8 (-ResolveTriggerRegistrationOption@Internal@TargetedContent@Services@Windows@@YA-AW4TriggerRegist.c)
 *     ?ResolveTriggerSetupHandler@Internal@TargetedContent@Services@Windows@@YA?AV?$function@$$A6AJPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z@std@@W4TargetedContentKnownTrigger@1234@@Z @ 0x180082038 (-ResolveTriggerSetupHandler@Internal@TargetedContent@Services@Windows@@YA-AV-$function@$$A6AJPEA.c)
 *     ?AlreadyRegistered@Internal@TargetedContent@Services@Windows@@YA_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEB_W@Z @ 0x18008480C (-AlreadyRegistered@Internal@TargetedContent@Services@Windows@@YA_NV-$shared_ptr@VISettingsContai.c)
 *     ?GetTriggerSettingsContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180085CBC (-GetTriggerSettingsContainer@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_ptr@VISett.c)
 *     ?SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180086DC4 (-SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV-$shared_ptr@VISettingsCo.c)
 *     __security_check_cookie @ 0x1800B6D70 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=23 #try_helpers=1
__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::RegisterTriggerInternal(
        __int64 a1,
        __int64 a2,
        HSTRING a3,
        bool *a4,
        __int64 a5)
{
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, HSTRING *); // rbx
  int v8; // eax
  const WCHAR *StringRawBuffer; // rbx
  const WCHAR *v10; // rax
  int v11; // eax
  std::_Ref_count_base *v12; // rcx
  std::_Ref_count_base *v13; // rcx
  int v15; // eax
  unsigned int v16; // r12d
  __int64 *v17; // r15
  PCWSTR v18; // rbx
  _QWORD *v19; // rax
  char v20; // bl
  std::_Ref_count_base *v21; // rcx
  std::_Ref_count_base *v22; // rcx
  std::_Ref_count_base *v23; // rcx
  __int128 *v24; // rax
  __int64 (__fastcall *v25)(__int64, HSTRING *); // rbx
  int v26; // eax
  __int64 (__fastcall *v27)(__int64, HSTRING *); // rbx
  int v28; // eax
  bool v29; // zf
  char v30; // al
  _QWORD *v31; // rax
  int v32; // eax
  void (__fastcall ***v33)(_QWORD, _QWORD *); // rbx
  void (__fastcall *v34)(_QWORD, _QWORD *); // r15
  _QWORD *v35; // rax
  _QWORD *v36; // rax
  int v37; // eax
  __int64 v38; // rbx
  _QWORD *v39; // rax
  int v40; // eax
  int v41; // eax
  std::_Ref_count_base *v42; // rcx
  std::_Ref_count_base *v43; // rcx
  BOOL bIgnoreCase; // [rsp+20h] [rbp-298h]
  BOOL bIgnoreCasea; // [rsp+20h] [rbp-298h]
  __int64 v46; // [rsp+30h] [rbp-288h] BYREF
  UINT32 length[2]; // [rsp+38h] [rbp-280h] BYREF
  HSTRING string; // [rsp+40h] [rbp-278h] BYREF
  unsigned int v49; // [rsp+48h] [rbp-270h] BYREF
  HSTRING v50; // [rsp+50h] [rbp-268h] BYREF
  HSTRING v51; // [rsp+58h] [rbp-260h] BYREF
  struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollection **v52; // [rsp+60h] [rbp-258h] BYREF
  std::_Ref_count_base *v53; // [rsp+68h] [rbp-250h]
  bool *v54; // [rsp+70h] [rbp-248h]
  UINT32 v55[4]; // [rsp+80h] [rbp-238h] BYREF
  _QWORD v56[2]; // [rsp+90h] [rbp-228h] BYREF
  HSTRING v57; // [rsp+A0h] [rbp-218h] BYREF
  __int64 v58; // [rsp+A8h] [rbp-210h] BYREF
  std::_Ref_count_base *v59; // [rsp+B0h] [rbp-208h]
  bool *v60; // [rsp+B8h] [rbp-200h]
  __int64 v61; // [rsp+C0h] [rbp-1F8h]
  _BYTE v62[32]; // [rsp+C8h] [rbp-1F0h] BYREF
  _QWORD v63[4]; // [rsp+E8h] [rbp-1D0h] BYREF
  _BYTE v64[40]; // [rsp+108h] [rbp-1B0h] BYREF
  struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollection *v65[42]; // [rsp+130h] [rbp-188h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2B8h] [rbp+0h]

  v46 = a2;
  v57 = a3;
  v60 = a4;
  v61 = a5;
  v6 = *(_QWORD *)a4;
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v65,
    (__int64)"TriggerManagerRegisterActivity");
  v65[0] = (struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollection *)&ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerRegisterActivity::`vftable';
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerRegisterActivity::StartActivity(
    (ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerRegisterActivity *)v65,
    (const char *)(v6 + 8));
  string = 0LL;
  v7 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v46 + 144LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  v8 = v7(v46, &string);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xD5,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)v8,
      bIgnoreCase);
  length[0] = 0;
  v55[0] = 0;
  StringRawBuffer = WindowsGetStringRawBuffer(string, length);
  v10 = WindowsGetStringRawBuffer(v57, v55);
  if ( CompareStringOrdinal(StringRawBuffer, length[0], v10, v55[0], 1) == 2 )
  {
    v49 = 0;
    v15 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v46 + 80LL))(v46, &v49);
    if ( v15 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xE4,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
        (const char *)(unsigned int)v15,
        bIgnoreCasea);
    if ( !v49 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xE5,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
        (const char *)0x80070057LL,
        bIgnoreCasea);
    v16 = Windows::Services::TargetedContent::Internal::ResolveTriggerRegistrationOption(v49);
    Windows::Services::TargetedContent::Internal::GetTriggerSettingsContainer(&v58, v46);
    v17 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
            v63,
            &v58);
    *(_QWORD *)v55 = v17;
    Windows::Services::TargetedContent::Internal::CreateTriggerKey(length, v46);
    v18 = WindowsGetStringRawBuffer(*(HSTRING *)length, 0LL);
    v19 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
            &v52,
            v17);
    v20 = Windows::Services::TargetedContent::Internal::AlreadyRegistered(v19, v18);
    WindowsDeleteString(*(HSTRING *)length);
    *(_QWORD *)length = 0LL;
    v21 = (std::_Ref_count_base *)v17[1];
    if ( v21 )
      std::_Ref_count_base::_Decref(v21);
    if ( v20 )
    {
      ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerRegisterActivity::Stop(
        (ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerRegisterActivity *)v65,
        0,
        (const char *)(*(_QWORD *)a4 + 8LL));
      if ( v59 )
        std::_Ref_count_base::_Decref(v59);
      WindowsDeleteString(string);
      string = 0LL;
      ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerRegisterActivity::~TriggerManagerRegisterActivity((ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerRegisterActivity *)v65);
      v22 = (std::_Ref_count_base *)*((_QWORD *)a4 + 1);
      if ( v22 )
        std::_Ref_count_base::_Decref(v22);
      v23 = *(std::_Ref_count_base **)(a5 + 8);
      if ( v23 )
        std::_Ref_count_base::_Decref(v23);
      return 0LL;
    }
    else
    {
      v24 = (__int128 *)_lambda_33066bbcaa202ed8496d422e2c9143b2_::_lambda_33066bbcaa202ed8496d422e2c9143b2_(
                          (_lambda_33066bbcaa202ed8496d422e2c9143b2_ *)&v52,
                          (struct Microsoft::WRL::Wrappers::HString *)&v46,
                          v65,
                          a4);
      wil::scope_exit__lambda_5274492350678889976b9fff638926bd___((__int64)v62, v24);
      v51 = 0LL;
      v25 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v46 + 48LL);
      WindowsDeleteString(0LL);
      v51 = 0LL;
      v26 = v25(v46, &v51);
      if ( v26 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xFA,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
          (const char *)(unsigned int)v26,
          bIgnoreCasea);
      v50 = 0LL;
      v27 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v46 + 224LL);
      WindowsDeleteString(0LL);
      v50 = 0LL;
      v28 = v27(v46, &v50);
      if ( v28 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xFC,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
          (const char *)(unsigned int)v28,
          bIgnoreCasea);
      if ( !WindowsIsStringEmpty(v51) || (v29 = !WindowsIsStringEmpty(v50), v30 = 1, v29) )
        v30 = 0;
      if ( v30 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xFD,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
          (const char *)0x80070057LL,
          bIgnoreCasea);
      if ( (v16 & 8) != 0 )
      {
        Windows::Services::TargetedContent::Internal::ResolveRegisterTaskHandler(v63, v16);
        v31 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
                &v52,
                (__int64 *)a4);
        v32 = std::_Func_class<long,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::operator()(
                (__int64)v63,
                v46,
                (__int64)v31);
        if ( v32 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x102,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
            (const char *)(unsigned int)v32,
            bIgnoreCasea);
        std::function<void (Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>)>::~function<void (Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>)>((__int64)v63);
      }
      if ( (v16 & 0x20) != 0 )
      {
        v33 = *(void (__fastcall ****)(_QWORD, _QWORD *))a5;
        v34 = ***(void (__fastcall ****)(_QWORD, _QWORD *))a5;
        v35 = Windows::Services::TargetedContent::Internal::CreateCreativeRule(&v52, v46);
        v34(v33, v35);
        if ( v53 )
          std::_Ref_count_base::_Decref(v53);
      }
      Windows::Services::TargetedContent::Internal::ResolveTriggerSetupHandler(v64, v49);
      v36 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
              &v52,
              (__int64 *)a4);
      v37 = std::_Func_class<long,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::operator()(
              (__int64)v64,
              v46,
              (__int64)v36);
      if ( v37 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x10B,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
          (const char *)(unsigned int)v37,
          bIgnoreCasea);
      v38 = v46;
      v39 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
              &v52,
              &v58);
      v40 = Windows::Services::TargetedContent::Internal::SetTriggerRegistration(v39, v38);
      if ( v40 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x10D,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
          (const char *)(unsigned int)v40,
          bIgnoreCasea);
      v56[0] = v65;
      v56[1] = a4;
      v41 = Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_5ae508c06f66cfbd3de9e0eff18a9873___(
              v46,
              (__int64)v56);
      if ( v41 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x112,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
          (const char *)(unsigned int)v41,
          bIgnoreCasea);
      v62[24] = 0;
      ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerRegisterActivity::Stop(
        (ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerRegisterActivity *)v65,
        1,
        (const char *)(*(_QWORD *)a4 + 8LL));
      std::function<void (Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>)>::~function<void (Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>)>((__int64)v64);
      WindowsDeleteString(v50);
      v50 = 0LL;
      WindowsDeleteString(v51);
      v51 = 0LL;
      wil::details::lambda_call__lambda_5274492350678889976b9fff638926bd___::_lambda_call__lambda_5274492350678889976b9fff638926bd___((__int64)v62);
      if ( v59 )
        std::_Ref_count_base::_Decref(v59);
      WindowsDeleteString(string);
      string = 0LL;
      ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerRegisterActivity::~TriggerManagerRegisterActivity((ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerRegisterActivity *)v65);
      v42 = (std::_Ref_count_base *)*((_QWORD *)a4 + 1);
      if ( v42 )
        std::_Ref_count_base::_Decref(v42);
      v43 = *(std::_Ref_count_base **)(a5 + 8);
      if ( v43 )
        std::_Ref_count_base::_Decref(v43);
      return 0LL;
    }
  }
  else
  {
    v52 = v65;
    v53 = (std::_Ref_count_base *)&v57;
    v54 = a4;
    v11 = Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_25fdd0f24a46fb884595cc4fd71754f0___(
            v46,
            (__int64)&v52);
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xDE,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
        (const char *)(unsigned int)v11,
        bIgnoreCasea);
    ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerRegisterActivity::Stop(
      (ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerRegisterActivity *)v65,
      0,
      (const char *)(*(_QWORD *)a4 + 8LL));
    WindowsDeleteString(string);
    string = 0LL;
    ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerRegisterActivity::~TriggerManagerRegisterActivity((ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerRegisterActivity *)v65);
    v12 = (std::_Ref_count_base *)*((_QWORD *)a4 + 1);
    if ( v12 )
      std::_Ref_count_base::_Decref(v12);
    v13 = *(std::_Ref_count_base **)(a5 + 8);
    if ( v13 )
      std::_Ref_count_base::_Decref(v13);
    return 2147483658LL;
  }
}
