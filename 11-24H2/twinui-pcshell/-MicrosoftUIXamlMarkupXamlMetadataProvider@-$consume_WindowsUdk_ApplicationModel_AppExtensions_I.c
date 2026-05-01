/*
 * XREFs of ?MicrosoftUIXamlMarkupXamlMetadataProvider@?$consume_WindowsUdk_ApplicationModel_AppExtensions_IXamlExtensions4@UXamlExtensions@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180456DA4
 * Callers:
 *     ?LoadMetadata@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1801B2688 (-LoadMetadata@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::consume_WindowsUdk_ApplicationModel_AppExtensions_IXamlExtensions4<winrt::WindowsUdk::ApplicationModel::AppExtensions::XamlExtensions>::MicrosoftUIXamlMarkupXamlMetadataProvider(
        __int64 (__fastcall ****a1)(_QWORD, void *, __int64 *),
        _QWORD *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, void *, __int64 *); // rcx
  int v4; // eax
  __int64 v5; // rdi
  int v6; // eax
  int v8; // [rsp+20h] [rbp-50h] BYREF
  __int64 v9; // [rsp+28h] [rbp-48h] BYREF
  int v10; // [rsp+38h] [rbp-38h] BYREF
  __int128 v11; // [rsp+40h] [rbp-30h]
  __int64 v12; // [rsp+50h] [rbp-20h] BYREF
  __int64 v13; // [rsp+58h] [rbp-18h] BYREF

  v12 = 0LL;
  v3 = *a1;
  if ( v3 )
  {
    v13 = 0LL;
    v4 = (**v3)(v3, &winrt::impl::guid_v<winrt::WindowsUdk::ApplicationModel::AppExtensions::IXamlExtensions4>, &v13);
    v5 = v13;
    v9 = v13;
  }
  else
  {
    v4 = 0;
    v9 = 0LL;
    v5 = 0LL;
  }
  v10 = 0;
  v11 = 0LL;
  winrt::check_hresult(&v8, v4, (__int64)&v10);
  v10 = 0;
  v11 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 48LL))(v5, &v12);
  winrt::check_hresult(&v8, v6, (__int64)&v10);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v9);
  *a2 = v12;
  return a2;
}
