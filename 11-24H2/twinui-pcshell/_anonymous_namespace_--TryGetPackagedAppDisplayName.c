/*
 * XREFs of _anonymous_namespace_::TryGetPackagedAppDisplayName @ 0x1805EAFA8
 * Callers:
 *     _anonymous_namespace_::TryGetRequestorDisplayInformation @ 0x1805EB6E0 (_anonymous_namespace_--TryGetRequestorDisplayInformation.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801CAB80 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ?GetFromAppUserModelId@AppInfo@ApplicationModel@Windows@winrt@@SA@AEBUhstring@param@4@@Z @ 0x1802BED00 (-GetFromAppUserModelId@AppInfo@ApplicationModel@Windows@winrt@@SA@AEBUhstring@param@4@@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
_QWORD *__fastcall anonymous_namespace_::TryGetPackagedAppDisplayName(_QWORD *a1, __int64 *a2)
{
  int v3; // eax
  int v4; // eax
  int v6; // [rsp+20h] [rbp-88h] BYREF
  _QWORD v7[3]; // [rsp+28h] [rbp-80h] BYREF
  __int64 v8; // [rsp+40h] [rbp-68h] BYREF
  int v9; // [rsp+48h] [rbp-60h] BYREF
  __int128 v10; // [rsp+50h] [rbp-58h]
  __int64 v11[4]; // [rsp+60h] [rbp-48h] BYREF
  __int64 v12; // [rsp+80h] [rbp-28h] BYREF
  __int64 v13; // [rsp+88h] [rbp-20h] BYREF

  v7[1] = a1;
  winrt::param::hstring::hstring((__int64)v11, a2);
  winrt::Windows::ApplicationModel::AppInfo::GetFromAppUserModelId((const struct winrt::param::hstring *)v7, v11);
  v12 = 0LL;
  v9 = 0;
  v10 = 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)v7[0] + 64LL))(v7[0], &v12);
  winrt::check_hresult(&v6, v3, (__int64)&v9);
  v8 = v12;
  v13 = 0LL;
  v9 = 0;
  v10 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 48LL))(v12, &v13);
  winrt::check_hresult(&v6, v4, (__int64)&v9);
  *a1 = v13;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v8);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v7);
  return a1;
}
