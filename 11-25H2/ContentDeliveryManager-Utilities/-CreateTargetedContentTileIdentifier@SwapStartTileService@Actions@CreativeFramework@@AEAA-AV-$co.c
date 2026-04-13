/*
 * XREFs of ?CreateTargetedContentTileIdentifier@SwapStartTileService@Actions@CreativeFramework@@AEAA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEB_W0@Z @ 0x180094478
 * Callers:
 *     ??R_lambda_6bc2a757313ab37e766f9d0f904bfdba_@@QEBA@PEB_WPEAUITargetedContentIdAliasValue@Internal@TargetedContent@Services@Windows@@@Z @ 0x180093F34 (--R_lambda_6bc2a757313ab37e766f9d0f904bfdba_@@QEBA@PEB_WPEAUITargetedContentIdAliasValue@Interna.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180024204 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002A34C (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DC1C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x18005B808 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ??$GetActivationFactory@UITargetedContentUnifiedTileIdentifierFactory@UnifiedTile@Shell@WindowsInternal@@@wil@@YA?AV?$com_ptr_t@UITargetedContentUnifiedTileIdentifierFactory@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800930B8 (--$GetActivationFactory@UITargetedContentUnifiedTileIdentifierFactory@UnifiedTile@Shell@WindowsI.c)
 *     ?GetFriendlySubscriptionNameFromPlacementId@SubscribedContentUtils@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W@Z @ 0x180094B5C (-GetFriendlySubscriptionNameFromPlacementId@SubscribedContentUtils@CreativeFramework@@YA-AV-$bas.c)
 *     __security_check_cookie @ 0x1800B6A50 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
_QWORD *__fastcall CreativeFramework::Actions::SwapStartTileService::CreateTargetedContentTileIdentifier(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        const WCHAR *a4)
{
  __int64 v5; // rdx
  unsigned int v6; // r8d
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, PVOID, PVOID, _QWORD *); // rsi
  unsigned int v9; // r8d
  PVOID Reserved1; // rdi
  unsigned int v11; // r8d
  const WCHAR *v12; // rcx
  HSTRING_HEADER *v13; // rax
  int v14; // eax
  int v16; // [rsp+20h] [rbp-69h]
  const WCHAR *v17; // [rsp+38h] [rbp-51h] BYREF
  __int64 v18[2]; // [rsp+40h] [rbp-49h] BYREF
  _QWORD v19[4]; // [rsp+50h] [rbp-39h] BYREF
  HSTRING_HEADER v20; // [rsp+70h] [rbp-19h] BYREF
  HSTRING_HEADER v21; // [rsp+90h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v18[1] = (__int64)a2;
  v17 = a4;
  CreativeFramework::SubscribedContentUtils::GetFriendlySubscriptionNameFromPlacementId(v19, a3);
  wil::GetActivationFactory<WindowsInternal::Shell::UnifiedTile::ITargetedContentUnifiedTileIdentifierFactory>(
    (const WCHAR *)v18,
    v5,
    v6);
  *a2 = 0LL;
  v7 = v18[0];
  v8 = *(__int64 (__fastcall **)(__int64, PVOID, PVOID, _QWORD *))(*(_QWORD *)v18[0] + 48LL);
  *a2 = 0LL;
  Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v20, &v17, v9)[1].Reserved.Reserved1;
  v12 = (const WCHAR *)v19;
  if ( v19[3] >= 8uLL )
    v12 = (const WCHAR *)v19[0];
  v17 = v12;
  v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v21, &v17, v11);
  v14 = v8(v7, v13[1].Reserved.Reserved1, Reserved1, a2);
  if ( v14 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x174,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v14,
      v16);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(v18);
  std::wstring::_Tidy(v19, 1, 0LL);
  return a2;
}
