/*
 * XREFs of ??R_lambda_6bc2a757313ab37e766f9d0f904bfdba_@@QEBA@PEB_WPEAUITargetedContentIdAliasValue@Internal@TargetedContent@Services@Windows@@@Z @ 0x180093F34
 * Callers:
 *     ?_Do_call@?$_Func_impl@U?$_Callable_obj@V_lambda_6bc2a757313ab37e766f9d0f904bfdba_@@$0A@@std@@V?$allocator@V?$_Func_class@_NPEB_WPEAUITargetedContentIdAliasValue@Internal@TargetedContent@Services@Windows@@U_Nil@std@@U67@U67@U67@U67@@std@@@2@_NPEB_WPEAUITargetedContentIdAliasValue@Internal@TargetedContent@Services@Windows@@U_Nil@2@U92@U92@U92@U92@@std@@UEAA_N$$QEAPEB_W$$QEAPEAUITargetedContentIdAliasValue@Internal@TargetedContent@Services@Windows@@@Z @ 0x180096C70 (-_Do_call@-$_Func_impl@U-$_Callable_obj@V_lambda_6bc2a757313ab37e766f9d0f904bfdba_@@$0A@@std@@V-.c)
 * Callees:
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002A34C (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DC1C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEBG@Z @ 0x18004AB80 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEBG@Z.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x18005B808 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ?compare@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBAHAEBV12@@Z @ 0x1800901A4 (-compare@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBAHAEBV12@@Z.c)
 *     ??4?$com_ptr_t@U?$IIterable@PEAU?$IKeyValuePair@U_GUID@@PEAUIBackgroundTaskRegistration@Background@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180093D08 (--4-$com_ptr_t@U-$IIterable@PEAU-$IKeyValuePair@U_GUID@@PEAUIBackgroundTaskRegistration@Backgrou.c)
 *     ?CreateTargetedContentTileIdentifier@SwapStartTileService@Actions@CreativeFramework@@AEAA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEB_W0@Z @ 0x180094478 (-CreateTargetedContentTileIdentifier@SwapStartTileService@Actions@CreativeFramework@@AEAA-AV-$co.c)
 *     __security_check_cookie @ 0x1800B6A50 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall _lambda_6bc2a757313ab37e766f9d0f904bfdba_::operator()(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 (__fastcall *v6)(__int64, HSTRING *); // rbx
  int v7; // eax
  __int64 (__fastcall *v8)(__int64, HSTRING *); // rbx
  int v9; // eax
  _QWORD *v10; // rax
  char v11; // bl
  __int64 v12; // rsi
  __int64 v13; // rcx
  _QWORD *v14; // rax
  bool v15; // di
  _QWORD *v16; // r8
  __int64 *v17; // rax
  HSTRING string; // [rsp+20h] [rbp-60h] BYREF
  HSTRING v20; // [rsp+28h] [rbp-58h] BYREF
  __int64 v21; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v22[4]; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v23[4]; // [rsp+58h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  LODWORD(v21) = 0;
  v20 = 0LL;
  string = 0LL;
  v6 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a3 + 56LL);
  WindowsDeleteString(0LL);
  v20 = 0LL;
  v7 = v6(a3, &v20);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x157,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v7,
      (int)string);
  v8 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a3 + 64LL);
  WindowsDeleteString(string);
  string = 0LL;
  v9 = v8(a3, &string);
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x158,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v9,
      (int)string);
  WindowsGetStringRawBuffer(v20, 0LL);
  v10 = (_QWORD *)std::wstring::wstring((__int64)v23);
  v11 = 1;
  LODWORD(v21) = 1;
  v12 = *a1;
  v15 = 0;
  if ( !(unsigned int)std::wstring::compare(*a1 + 232, v10) )
  {
    WindowsGetStringRawBuffer(string, 0LL);
    v14 = (_QWORD *)std::wstring::wstring((__int64)v22);
    v11 = 3;
    if ( !(unsigned int)std::wstring::compare(v12 + 200, v14) )
      v15 = 1;
  }
  if ( (v11 & 2) != 0 )
  {
    v11 &= ~2u;
    std::wstring::_Tidy(v22, 1, 0LL);
  }
  if ( (v11 & 1) != 0 )
    std::wstring::_Tidy(v23, 1, 0LL);
  if ( v15 )
  {
    v16 = (_QWORD *)(v12 + 168);
    if ( *(_QWORD *)(v12 + 192) >= 8uLL )
      v16 = (_QWORD *)*v16;
    v17 = (__int64 *)CreativeFramework::Actions::SwapStartTileService::CreateTargetedContentTileIdentifier(
                       v13,
                       &v21,
                       v16,
                       a2);
    wil::com_ptr_t<Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<_GUID,Windows::ApplicationModel::Background::IBackgroundTaskRegistration *> *>,wil::err_exception_policy>::operator=(
      (__int64 *)a1[1],
      v17);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v21);
    WindowsDeleteString(string);
    string = 0LL;
    WindowsDeleteString(v20);
    return 0;
  }
  else
  {
    WindowsDeleteString(string);
    string = 0LL;
    WindowsDeleteString(v20);
    return 1;
  }
}
