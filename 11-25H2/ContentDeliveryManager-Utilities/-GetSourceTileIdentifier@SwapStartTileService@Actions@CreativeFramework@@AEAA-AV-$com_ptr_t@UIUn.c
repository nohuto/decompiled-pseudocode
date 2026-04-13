/*
 * XREFs of ?GetSourceTileIdentifier@SwapStartTileService@Actions@CreativeFramework@@AEAA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180094F20
 * Callers:
 *     ?SwapStartTiles@SwapStartTileService@Actions@CreativeFramework@@AEAAXXZ @ 0x1800965A4 (-SwapStartTiles@SwapStartTileService@Actions@CreativeFramework@@AEAAXXZ.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180024204 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002A34C (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DC1C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$function@$$A6AXPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z@std@@QEAA@XZ @ 0x18004C3D4 (--1-$function@$$A6AXPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Window.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x18005B808 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ??0_lambda_6bc2a757313ab37e766f9d0f904bfdba_@@QEAA@QEAVSwapStartTileService@Actions@CreativeFramework@@AEAV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800667C4 (--0_lambda_6bc2a757313ab37e766f9d0f904bfdba_@@QEAA@QEAVSwapStartTileService@Actions@CreativeFram.c)
 *     ??$?0V_lambda_6bc2a757313ab37e766f9d0f904bfdba_@@@?$function@$$A6A_NPEB_WPEAUITargetedContentIdAliasValue@Internal@TargetedContent@Services@Windows@@@Z@std@@QEAA@$$QEAV_lambda_6bc2a757313ab37e766f9d0f904bfdba_@@@Z @ 0x180092B10 (--$-0V_lambda_6bc2a757313ab37e766f9d0f904bfdba_@@@-$function@$$A6A_NPEB_WPEAUITargetedContentIdA.c)
 *     ??$GetActivationFactory@UITargetedContentIdAliasStoreStatics@Internal@TargetedContent@Services@Windows@@@wil@@YA?AV?$com_ptr_t@UITargetedContentIdAliasStoreStatics@Internal@TargetedContent@Services@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180093018 (--$GetActivationFactory@UITargetedContentIdAliasStoreStatics@Internal@TargetedContent@Services@W.c)
 *     ?DeserializeUnifiedTileIdentifier@Actions@CreativeFramework@@YA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@AEBQEB_W@Z @ 0x180094694 (-DeserializeUnifiedTileIdentifier@Actions@CreativeFramework@@YA-AV-$com_ptr_t@UIUnifiedTileIdent.c)
 *     ?EnumerateAliasMap@SwapStartTileService@Actions@CreativeFramework@@AEAAXPEAUITargetedContentIdAliasStore@Internal@TargetedContent@Services@Windows@@AEBV?$function@$$A6A_NPEB_WPEAUITargetedContentIdAliasValue@Internal@TargetedContent@Services@Windows@@@Z@std@@@Z @ 0x180094758 (-EnumerateAliasMap@SwapStartTileService@Actions@CreativeFramework@@AEAAXPEAUITargetedContentIdAl.c)
 *     ?GetFriendlySubscriptionNameFromPlacementId@SubscribedContentUtils@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W@Z @ 0x180094B5C (-GetFriendlySubscriptionNameFromPlacementId@SubscribedContentUtils@CreativeFramework@@YA-AV-$bas.c)
 *     __security_check_cookie @ 0x1800B6A50 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
WCHAR *__fastcall CreativeFramework::Actions::SwapStartTileService::GetSourceTileIdentifier(
        __int64 a1,
        WCHAR *a2,
        unsigned int a3)
{
  const WCHAR *v5; // rax
  unsigned int v6; // r8d
  const WCHAR *v7; // rbx
  __int64 (__fastcall *v8)(const WCHAR *, PVOID, _BYTE *); // rdi
  const WCHAR *v9; // rcx
  HSTRING_HEADER *v10; // rax
  int v11; // eax
  unsigned int v12; // r8d
  const WCHAR *v13; // rbx
  __int64 (__fastcall *v14)(const WCHAR *, PVOID, _QWORD, WCHAR **); // rdi
  const WCHAR *v15; // rcx
  HSTRING_HEADER *v16; // rax
  int v17; // eax
  _QWORD *v18; // rax
  HSTRING v19; // rcx
  __int64 v20; // rdx
  int v22; // [rsp+20h] [rbp-49h]
  _BYTE v23[8]; // [rsp+30h] [rbp-39h] BYREF
  WCHAR *v24; // [rsp+38h] [rbp-31h] BYREF
  const WCHAR *v25; // [rsp+40h] [rbp-29h] BYREF
  __int64 v26[2]; // [rsp+48h] [rbp-21h] BYREF
  const WCHAR *v27[2]; // [rsp+58h] [rbp-11h] BYREF
  _QWORD v28[3]; // [rsp+68h] [rbp-1h] BYREF
  unsigned __int64 v29; // [rsp+80h] [rbp+17h]
  HSTRING_HEADER v30; // [rsp+88h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v27[0] = a2;
  if ( *(_QWORD *)(a1 + 24) )
  {
    v5 = (const WCHAR *)(a1 + 8);
    if ( *(_QWORD *)(a1 + 32) >= 8uLL )
      v5 = *(const WCHAR **)v5;
    v25 = v5;
    CreativeFramework::Actions::DeserializeUnifiedTileIdentifier(a2, &v25, a3);
  }
  else
  {
    v26[0] = 0LL;
    wil::GetActivationFactory<Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasStoreStatics>(
      (const WCHAR *)&v25,
      (__int64)a2,
      a3);
    v23[0] = 0;
    CreativeFramework::SubscribedContentUtils::GetFriendlySubscriptionNameFromPlacementId((__int64)v28);
    v7 = v25;
    v8 = *(__int64 (__fastcall **)(const WCHAR *, PVOID, _BYTE *))(*(_QWORD *)v25 + 56LL);
    v9 = (const WCHAR *)v28;
    if ( v29 >= 8 )
      v9 = (const WCHAR *)v28[0];
    v24 = (WCHAR *)v9;
    v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v30, (const WCHAR **)&v24, v6);
    v11 = v8(v7, v10[1].Reserved.Reserved1, v23);
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x14E,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v11,
        v22);
    if ( v23[0] )
    {
      v24 = 0LL;
      v13 = v25;
      v14 = *(__int64 (__fastcall **)(const WCHAR *, PVOID, _QWORD, WCHAR **))(*(_QWORD *)v25 + 64LL);
      v24 = 0LL;
      v15 = (const WCHAR *)v28;
      if ( v29 >= 8 )
        v15 = (const WCHAR *)v28[0];
      v27[0] = v15;
      v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v30, v27, v12);
      v17 = v14(v13, v16[1].Reserved.Reserved1, 0LL, &v24);
      if ( v17 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x152,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
          (const char *)(unsigned int)v17,
          v22);
      v18 = _lambda_6bc2a757313ab37e766f9d0f904bfdba_::_lambda_6bc2a757313ab37e766f9d0f904bfdba_(v27, a1, (__int64)v26);
      std::function<bool (wchar_t const *,Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasValue *)>::function<bool (wchar_t const *,Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasValue *)>(
        (__int64)&v30,
        v18);
      CreativeFramework::Actions::SwapStartTileService::EnumerateAliasMap(v19, (__int64 *)v24, (__int64)&v30);
      std::function<void (Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>)>::~function<void (Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>)>((__int64)&v30);
      wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v24);
    }
    v20 = v26[0];
    if ( !v26[0] )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x164,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)0x80070490LL,
        v22);
    v26[0] = 0LL;
    *(_QWORD *)a2 = v20;
    std::wstring::_Tidy(v28, 1, 0LL);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v25);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(v26);
  }
  return a2;
}
