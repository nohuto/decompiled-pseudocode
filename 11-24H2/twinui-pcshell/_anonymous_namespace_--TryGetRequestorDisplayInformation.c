/*
 * XREFs of _anonymous_namespace_::TryGetRequestorDisplayInformation @ 0x1805EB6E0
 * Callers:
 *     _anonymous_namespace_::GetPinRequestPromptContent @ 0x1805E6520 (_anonymous_namespace_--GetPinRequestPromptContent.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z @ 0x1800490A8 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800C577C (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801068A4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x18017F364 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     ??Bhstring@winrt@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1801953E8 (--Bhstring@winrt@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHFONT__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18021F1C0 (--1-$unique_storage@U-$resource_policy@PEAUHFONT__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integral.c)
 *     ?RequestorBestAvailableAppId@PinRequestContext@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x18028F580 (-RequestorBestAvailableAppId@PinRequestContext@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std.c)
 *     ?unconditional_release_ref@?$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@AEAAXXZ @ 0x18028FD2C (-unconditional_release_ref@-$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@A.c)
 *     ?TryGetAppsFolderItem@@YA?AU?$com_ptr@UIShellItem@@@winrt@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@0@Z @ 0x180290830 (-TryGetAppsFolderItem@@YA-AU-$com_ptr@UIShellItem@@@winrt@@V-$basic_string_view@GU-$char_traits@.c)
 *     ?RequestorImagePath@PinRequestContext@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1802C650C (-RequestorImagePath@PinRequestContext@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@X.c)
 *     ?RequestorPackageAppId@PinRequestContext@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1802C6644 (-RequestorPackageAppId@PinRequestContext@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$?4V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@$0A@@?$optional@V?$variant@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@URandomAccessStreamReference@Streams@Storage@Windows@winrt@@@std@@@std@@QEAAAEAV01@$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1805DE8CC (--$-4V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1-DeleteObje.c)
 *     ??$FallbackDisplayInfoNameUsed@PEBG@PinManagerTelemetry@@SAX$$QEAPEBG@Z @ 0x1805DEE48 (--$FallbackDisplayInfoNameUsed@PEBG@PinManagerTelemetry@@SAX$$QEAPEBG@Z.c)
 *     ??$PackagedAppDisplayInformationRetrieved@PEBGPEBG_N@PinManagerTelemetry@@SAX$$QEAPEBG0$$QEA_N@Z @ 0x1805E0460 (--$PackagedAppDisplayInformationRetrieved@PEBGPEBG_N@PinManagerTelemetry@@SAX$$QEAPEBG0$$QEA_N@Z.c)
 *     ??$UnpackagedAppDisplayInformationRetrieved@PEBGPEBG_N@PinManagerTelemetry@@SAX$$QEAPEBG0$$QEA_N@Z @ 0x1805E10E4 (--$UnpackagedAppDisplayInformationRetrieved@PEBGPEBG_N@PinManagerTelemetry@@SAX$$QEAPEBG0$$QEA_N.c)
 *     ??$_Construct@V?$variant@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@URandomAccessStreamReference@Streams@Storage@Windows@winrt@@@std@@@?$_Optional_construct_base@V?$variant@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@URandomAccessStreamReference@Streams@Storage@Windows@winrt@@@std@@@std@@QEAAAEAV?$variant@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@URandomAccessStreamReference@Streams@Storage@Windows@winrt@@@1@$$QEAV21@@Z @ 0x1805E122C (--$_Construct@V-$variant@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHBITMAP__@@P6A.c)
 *     ??$_Visit@U?$_Variant_assign_visitor@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@URandomAccessStreamReference@Streams@Storage@Windows@winrt@@@std@@V?$_Variant_storage_@$0A@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@URandomAccessStreamReference@Streams@Storage@Windows@winrt@@@2@@?$_Variant_raw_visit1@$00@std@@SAX_K$$QEAU?$_Variant_assign_visitor@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@URandomAccessStreamReference@Streams@Storage@Windows@winrt@@@1@$$QEAV?$_Variant_storage_@$0A@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@URandomAccessStreamReference@Streams@Storage@Windows@winrt@@@1@@Z @ 0x1805E18BC (--$_Visit@U-$_Variant_assign_visitor@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHB.c)
 *     ??$make_tuple@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$optional@V?$variant@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@URandomAccessStreamReference@Streams@Storage@Windows@winrt@@@std@@@2@@std@@YA?AV?$tuple@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$optional@V?$variant@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@URandomAccessStreamReference@Streams@Storage@Windows@winrt@@@std@@@2@@0@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@$$QEAV?$optional@V?$variant@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@URandomAccessStreamReference@Streams@Storage@Windows@winrt@@@std@@@0@@Z @ 0x1805E2528 (--$make_tuple@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$optional@V-$varia.c)
 *     ??1?$_Optional_destruct_base@V?$variant@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@URandomAccessStreamReference@Streams@Storage@Windows@winrt@@@std@@$0A@@std@@QEAA@XZ @ 0x1805E3364 (--1-$_Optional_destruct_base@V-$variant@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEA.c)
 *     ?FallbackDisplayInfoLogoUsed@PinManagerTelemetry@@SAXXZ @ 0x1805E5A44 (-FallbackDisplayInfoLogoUsed@PinManagerTelemetry@@SAXXZ.c)
 *     ?GetItemFromParsingName@wil@@YA?AV?$ComPtr@UIShellItem2@@@WRL@Microsoft@@PEBGPEAUIBindCtx@@@Z @ 0x1805E6290 (-GetItemFromParsingName@wil@@YA-AV-$ComPtr@UIShellItem2@@@WRL@Microsoft@@PEBGPEAUIBindCtx@@@Z.c)
 *     _anonymous_namespace_::GetLogoFromShellItem @ 0x1805E6310 (_anonymous_namespace_--GetLogoFromShellItem.c)
 *     _anonymous_namespace_::TryGetPackagedAppDisplayName @ 0x1805EAFA8 (_anonymous_namespace_--TryGetPackagedAppDisplayName.c)
 *     _anonymous_namespace_::TryGetPackagedAppTileLogo @ 0x1805EB0BC (_anonymous_namespace_--TryGetPackagedAppTileLogo.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall anonymous_namespace_::TryGetRequestorDisplayInformation(__int64 a1, __int64 *a2, char a3)
{
  __int64 *v4; // r14
  __int64 v5; // r15
  __int128 v6; // xmm6
  __int64 *PackagedAppDisplayName; // rax
  __int128 *v8; // rax
  __int128 *v9; // rbx
  __int64 (__fastcall *v10)(__int128 *, __int64, void **); // rdi
  void **v11; // r8
  int v12; // eax
  void **LogoFromShellItem; // rax
  __int128 *v14; // rax
  LPCWSTR *v15; // rax
  LPWSTR FileNameW; // rdx
  __int128 *v17; // rax
  PCWSTR *v18; // rax
  void **ItemFromParsingName; // rax
  void *v20; // rbx
  void **v21; // rax
  __int64 v22; // rcx
  const char *v23; // r9
  std::_Ref_count_base *v24; // rcx
  _BYTE v26[8]; // [rsp+20h] [rbp-E8h] BYREF
  __int128 *v27; // [rsp+28h] [rbp-E0h] BYREF
  void *ppv[2]; // [rsp+30h] [rbp-D8h] BYREF
  __int64 *v29; // [rsp+48h] [rbp-C0h]
  __int64 v30; // [rsp+50h] [rbp-B8h]
  void *v31[2]; // [rsp+60h] [rbp-A8h] BYREF
  void *Src[2]; // [rsp+70h] [rbp-98h] BYREF
  char v33; // [rsp+80h] [rbp-88h]
  __int128 v34; // [rsp+90h] [rbp-78h] BYREF
  __int64 v35; // [rsp+A0h] [rbp-68h]
  unsigned __int64 v36; // [rsp+A8h] [rbp-60h]
  _BYTE v37[16]; // [rsp+B0h] [rbp-58h] BYREF
  char v38; // [rsp+C0h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+0h]

  v4 = a2;
  v5 = a1;
  v30 = a1;
  v29 = a2;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 7LL;
  LOWORD(v34) = 0;
  v38 = 0;
  *(_OWORD *)v31 = 0LL;
  PinRequestContext::RequestorPackageAppId((_QWORD *)*a2, v31);
  if ( v31[1] )
  {
    v6 = *(_OWORD *)v31;
    PackagedAppDisplayName = anonymous_namespace_::TryGetPackagedAppDisplayName(&v27, (__int64 *)v31);
    winrt::hstring::operator std::basic_string_view<unsigned short>(PackagedAppDisplayName, v31);
    std::wstring::assign((void **)&v34, v31[0], (unsigned __int64)v31[1]);
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v27);
    *(_OWORD *)v31 = 0LL;
    *(_OWORD *)ppv = v6;
    anonymous_namespace_::TryGetPackagedAppTileLogo((__int64)Src, (__int128 *)ppv, v31);
    if ( v33 )
    {
      if ( v38 )
      {
        v27 = (__int128 *)v37;
        std::_Variant_raw_visit1<1>::_Visit<std::_Variant_assign_visitor<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>,winrt::Windows::Storage::Streams::RandomAccessStreamReference>,std::_Variant_storage_<0,wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>,winrt::Windows::Storage::Streams::RandomAccessStreamReference>>(
          SLOBYTE(Src[1]) + 1LL,
          (__int64 **)&v27,
          (__int64 *)Src);
      }
      else
      {
        std::_Optional_construct_base<std::variant<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>,winrt::Windows::Storage::Streams::RandomAccessStreamReference>>::_Construct<std::variant<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>,winrt::Windows::Storage::Streams::RandomAccessStreamReference>>(
          (__int64)v37,
          (__int64 *)Src);
      }
    }
    std::_Optional_destruct_base<std::variant<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>,winrt::Windows::Storage::Streams::RandomAccessStreamReference>,0>::~_Optional_destruct_base<std::variant<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>,winrt::Windows::Storage::Streams::RandomAccessStreamReference>,0>((__int64)Src);
    v26[0] = v38;
    v8 = &v34;
    if ( v36 > 7 )
      v8 = (__int128 *)v34;
    v27 = v8;
    Src[0] = (void *)v6;
    PinManagerTelemetry::PackagedAppDisplayInformationRetrieved<unsigned short const *,unsigned short const *,bool>(
      Src,
      (__int64 *)&v27,
      v26);
  }
  else
  {
    *(_OWORD *)v31 = 0LL;
    PinRequestContext::RequestorBestAvailableAppId(*v4, v31);
    if ( v31[1] )
    {
      *(_OWORD *)ppv = 0LL;
      *(_OWORD *)Src = *(_OWORD *)v31;
      TryGetAppsFolderItem(&v27, (SecondaryTileIdentifierHelpers **)Src, (__int64)ppv);
      v9 = v27;
      if ( v27 )
      {
        Src[0] = 0LL;
        v10 = *(__int64 (__fastcall **)(__int128 *, __int64, void **))(*(_QWORD *)v27 + 40LL);
        v11 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put(Src);
        v12 = v10(v9, 2148089857LL, v11);
        if ( v12 >= 0 )
          std::wstring::operator=((void **)&v34, (_WORD *)Src[0]);
        else
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x149,
            (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
            (const char *)(unsigned int)v12);
        LogoFromShellItem = anonymous_namespace_::GetLogoFromShellItem(
                              ppv,
                              (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v9);
        std::optional<std::variant<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>,winrt::Windows::Storage::Streams::RandomAccessStreamReference>>::operator=<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>,0>(
          (__int64)v37,
          LogoFromShellItem);
        wil::details::unique_storage<wil::details::resource_policy<HFONT__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HFONT__ *,HFONT__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HFONT__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HFONT__ *,HFONT__ *,0,std::nullptr_t>>(ppv);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(Src);
      }
      if ( v9 )
        winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref((__int64 *)&v27);
    }
    v26[0] = v38;
    v14 = &v34;
    if ( v36 > 7 )
      v14 = (__int128 *)v34;
    ppv[0] = v14;
    v27 = (__int128 *)v31[0];
    PinManagerTelemetry::UnpackagedAppDisplayInformationRetrieved<unsigned short const *,unsigned short const *,bool>(
      &v27,
      (__int64 *)ppv,
      v26);
  }
  if ( a3 )
  {
    if ( !v35 )
    {
      v15 = (LPCWSTR *)PinRequestContext::RequestorImagePath(*v4, v31);
      FileNameW = PathFindFileNameW(*v15);
      std::wstring::operator=((void **)&v34, FileNameW);
      v17 = &v34;
      if ( v36 > 7 )
        v17 = (__int128 *)v34;
      ppv[0] = v17;
      PinManagerTelemetry::FallbackDisplayInfoNameUsed<unsigned short const *>((const WCHAR **)ppv);
    }
    if ( !v38 )
    {
      v18 = (PCWSTR *)PinRequestContext::RequestorImagePath(*v4, v31);
      try
      {
        ItemFromParsingName = wil::GetItemFromParsingName(ppv, *v18);
        v20 = *ItemFromParsingName;
        *ItemFromParsingName = 0LL;
        Src[0] = v20;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)ppv);
        v21 = anonymous_namespace_::GetLogoFromShellItem(
                (void **)&v27,
                (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v20);
        std::optional<std::variant<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>,winrt::Windows::Storage::Streams::RandomAccessStreamReference>>::operator=<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>,0>(
          (__int64)v37,
          v21);
        wil::details::unique_storage<wil::details::resource_policy<HFONT__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HFONT__ *,HFONT__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HFONT__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HFONT__ *,HFONT__ *,0,std::nullptr_t>>((void **)&v27);
        PinManagerTelemetry::FallbackDisplayInfoLogoUsed(v22);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)Src);
      }
      catch ( ... )
      {
        wil::details::in1diag3::Log_CaughtException(
          retaddr,
          (void *)0x167,
          (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
          v23);
        v4 = v29;
        v5 = v30;
      }
    }
  }
  std::make_tuple<std::wstring,std::optional<std::variant<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>,winrt::Windows::Storage::Streams::RandomAccessStreamReference>>>(
    v5,
    (__int64)&v34,
    (__int64)v37);
  std::_Optional_destruct_base<std::variant<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>,winrt::Windows::Storage::Streams::RandomAccessStreamReference>,0>::~_Optional_destruct_base<std::variant<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>,winrt::Windows::Storage::Streams::RandomAccessStreamReference>,0>((__int64)v37);
  std::wstring::_Tidy_deallocate((void **)&v34);
  v24 = (std::_Ref_count_base *)v4[1];
  if ( v24 )
    std::_Ref_count_base::_Decref(v24);
  return v5;
}
