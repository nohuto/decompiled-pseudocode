/*
 * XREFs of _anonymous_namespace_::TryGetPackagedAppTileLogo @ 0x1805EB0BC
 * Callers:
 *     _anonymous_namespace_::TryGetRequestorDisplayInformation @ 0x1805EB6E0 (_anonymous_namespace_--TryGetRequestorDisplayInformation.c)
 *     _anonymous_namespace_::TryGetTargetDisplayInformation @ 0x1805EBB04 (_anonymous_namespace_--TryGetTargetDisplayInformation.c)
 * Callees:
 *     ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18001C8F0 (--1-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InitFromItem@?$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEAAJPEAUIUnknown@@W4GETPROPERTYSTOREFLAGS@@PEBU_tagpropertykey@@I@Z @ 0x18006762C (-InitFromItem@-$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEAAJPEAUIUnknown@@W4GETPROPERTYS.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801068A4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x18017F364 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801B4B78 (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@AEAAXXZ @ 0x18028FD2C (-unconditional_release_ref@-$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@A.c)
 *     ?TryGetAppsFolderItem@@YA?AU?$com_ptr@UIShellItem@@@winrt@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@0@Z @ 0x180290830 (-TryGetAppsFolderItem@@YA-AU-$com_ptr@UIShellItem@@@winrt@@V-$basic_string_view@GU-$char_traits@.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$GetAsString@U_tagpropertykey@@@?$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagpropertykey@@PEAPEAG@Z @ 0x1805DEF14 (--$GetAsString@U_tagpropertykey@@@-$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagpro.c)
 *     ??0LogoOptions@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@QEAA@XZ @ 0x1805E3110 (--0LogoOptions@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@QEAA@XZ.c)
 *     ?CreateForPackageFullName@MRTHelper@UnifiedTile@Shell@WindowsInternal@winrt@@SA@AEBUUser@System@Windows@5@AEBUhstring@param@5@@Z @ 0x1805E5254 (-CreateForPackageFullName@MRTHelper@UnifiedTile@Shell@WindowsInternal@winrt@@SA@AEBUUser@System@.c)
 *     ?CreateFromStream@RandomAccessStreamReference@Streams@Storage@Windows@winrt@@SA@AEBUIRandomAccessStream@2345@@Z @ 0x1805E5350 (-CreateFromStream@RandomAccessStreamReference@Streams@Storage@Windows@winrt@@SA@AEBUIRandomAcces.c)
 *     ?CreateTileImageResource@?$consume_WindowsInternal_Shell_UnifiedTile_IMRTHelper@UIMRTHelper@UnifiedTile@Shell@WindowsInternal@winrt@@@impl@winrt@@QEBA@AEBUguid@3@_KAEBUhstring@param@3@_N@Z @ 0x1805E547C (-CreateTileImageResource@-$consume_WindowsInternal_Shell_UnifiedTile_IMRTHelper@UIMRTHelper@Unif.c)
 *     _anonymous_namespace_::GetLogoTileScaleFactor @ 0x1805E6424 (_anonymous_namespace_--GetLogoTileScaleFactor.c)
 *     _anonymous_namespace_::GetLogoTileTheme @ 0x1805E6490 (_anonymous_namespace_--GetLogoTileTheme.c)
 *     ?IsUnplated@?$consume_WindowsInternal_Shell_UnifiedTile_LogoLoading_ILogoOptions@UILogoOptions@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@@impl@winrt@@QEBA@_N@Z @ 0x1805E7308 (-IsUnplated@-$consume_WindowsInternal_Shell_UnifiedTile_LogoLoading_ILogoOptions@UILogoOptions@L.c)
 *     _anonymous_namespace_::TryLoadLogoImageStream @ 0x1805EBD68 (_anonymous_namespace_--TryLoadLogoImageStream.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall anonymous_namespace_::TryGetPackagedAppTileLogo(__int64 a1, __int128 *a2, _OWORD *a3)
{
  void **v4; // rax
  void **v5; // rax
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rcx
  unsigned int LogoTileTheme; // eax
  int v12; // eax
  int v13; // eax
  const struct winrt::Windows::Storage::Streams::IRandomAccessStream *v14; // rax
  __int64 v15; // rcx
  __int64 v17[2]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v18[24]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 (__fastcall ***v19)(_QWORD, GUID *, __int64 *); // [rsp+60h] [rbp-A0h] BYREF
  struct IUnknownVtbl *lpVtbl; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v21[2]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v22; // [rsp+80h] [rbp-80h] BYREF
  int v23; // [rsp+90h] [rbp-70h]
  _BYTE v24[32]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v25[4]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v26; // [rsp+E8h] [rbp-18h] BYREF
  struct IUnknown v27; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v28; // [rsp+F8h] [rbp-8h] BYREF
  unsigned __int16 *v29; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int16 *v30; // [rsp+108h] [rbp+8h] BYREF

  *(_QWORD *)v18 = a1;
  *(_OWORD *)v18 = *a3;
  v22 = *a2;
  TryGetAppsFolderItem(&v19, (SecondaryTileIdentifierHelpers **)&v22, (__int64)v18);
  if ( v19 )
  {
    v28 = 0LL;
    v30 = 0LL;
    v29 = 0LL;
    if ( (int)wil::PropertyStoreHelperBase<IPropertyStore>::InitFromItem(&v28, v19, 1u, (__int64)&unk_1807BA478, 2u) >= 0 )
    {
      v4 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put((void **)&v30);
      *(_OWORD *)v18 = PKEY_Tile_SmallLogoPath;
      *(_DWORD *)&v18[16] = 2;
      if ( (int)wil::PropertyStoreHelperBase<IPropertyStore>::GetAsString<_tagpropertykey>(
                  &v28,
                  (__int128 *)v18,
                  (PWSTR *)v4) >= 0 )
      {
        v5 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put((void **)&v29);
        v22 = PKEY_AppUserModel_PackageFullName;
        v23 = 21;
        if ( (int)wil::PropertyStoreHelperBase<IPropertyStore>::GetAsString<_tagpropertykey>(&v28, &v22, (PWSTR *)v5) >= 0 )
        {
          winrt::param::hstring::hstring((winrt::param::hstring *)v24, v29);
          v17[0] = 0LL;
          winrt::WindowsInternal::Shell::UnifiedTile::MRTHelper::CreateForPackageFullName(
            (const struct winrt::Windows::System::User *)&v22,
            (const struct winrt::param::hstring *)v17,
            (__int64)v24);
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v17);
          winrt::param::hstring::hstring((winrt::param::hstring *)v25, v30);
          *(_OWORD *)v18 = 0LL;
          winrt::impl::consume_WindowsInternal_Shell_UnifiedTile_IMRTHelper<winrt::WindowsInternal::Shell::UnifiedTile::IMRTHelper>::CreateTileImageResource(
            (__int64 **)&v22,
            v21,
            (__int128 *)v18,
            v6,
            v25);
          winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::LogoOptions::LogoOptions(&v27);
          winrt::impl::consume_WindowsInternal_Shell_UnifiedTile_LogoLoading_ILogoOptions<winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::ILogoOptions>::IsUnplated(
            (__int64 *)&v27,
            v7);
          *(_DWORD *)v18 = 0;
          *(_OWORD *)&v18[8] = 0LL;
          LOBYTE(v8) = 1;
          v9 = (*((__int64 (__fastcall **)(struct IUnknownVtbl *, __int64))v27.lpVtbl->QueryInterface + 13))(
                 v27.lpVtbl,
                 v8);
          winrt::check_hresult((int *)&v26, v9, (__int64)v18);
          LogoTileTheme = anonymous_namespace_::GetLogoTileTheme(v10);
          *(_DWORD *)v18 = 0;
          *(_OWORD *)&v18[8] = 0LL;
          v12 = (*((__int64 (__fastcall **)(struct IUnknownVtbl *, _QWORD))v27.lpVtbl->QueryInterface + 15))(
                  v27.lpVtbl,
                  LogoTileTheme);
          winrt::check_hresult((int *)&v26, v12, (__int64)v18);
          anonymous_namespace_::GetLogoTileScaleFactor();
          *(_DWORD *)v18 = 0;
          *(_OWORD *)&v18[8] = 0LL;
          v13 = (*((__int64 (__fastcall **)(struct IUnknownVtbl *))v27.lpVtbl->QueryInterface + 7))(v27.lpVtbl);
          winrt::check_hresult((int *)&v26, v13, (__int64)v18);
          lpVtbl = v27.lpVtbl;
          Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&lpVtbl);
          v17[0] = v21[0];
          Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(v17);
          anonymous_namespace_::TryLoadLogoImageStream(&v26, v17, &lpVtbl);
          if ( v26 )
          {
            v14 = winrt::Windows::Storage::Streams::RandomAccessStreamReference::CreateFromStream(
                    (const struct winrt::Windows::Storage::Streams::IRandomAccessStream *)v18,
                    (__int64)&v26);
            v15 = *(_QWORD *)v14;
            *(_QWORD *)v14 = 0LL;
            *(_QWORD *)a1 = v15;
            *(_BYTE *)(a1 + 8) = 1;
            *(_BYTE *)(a1 + 16) = 1;
            winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v18);
            winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v26);
            winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v27);
            winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v21);
            winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v22);
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v29);
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v30);
            Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>(&v28);
            winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref((__int64 *)&v19);
            return a1;
          }
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v26);
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v27);
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v21);
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v22);
        }
      }
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v29);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v30);
    Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>(&v28);
  }
  if ( v19 )
    winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref((__int64 *)&v19);
  *(_BYTE *)(a1 + 16) = 0;
  return a1;
}
