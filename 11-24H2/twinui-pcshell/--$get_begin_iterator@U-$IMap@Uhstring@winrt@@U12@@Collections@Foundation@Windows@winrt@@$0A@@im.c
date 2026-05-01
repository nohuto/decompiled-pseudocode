/*
 * XREFs of ??$get_begin_iterator@U?$IMap@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@$0A@@impl@winrt@@YA?AU?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@1@AEBU?$IMap@Uhstring@winrt@@U12@@3451@@Z @ 0x1803456C0
 * Callers:
 *     GamingOverlayExperienceManager::LaunchForResultsAsyncInternal$_ResumeCoro$1 @ 0x180352A40 (GamingOverlayExperienceManager--LaunchForResultsAsyncInternal$_ResumeCoro$1.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ?First@?$consume_Windows_Foundation_Collections_IIterable@U?$IMap@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@U?$IKeyValuePair@Uhstring@winrt@@U12@@2345@@impl@winrt@@QEBA@XZ @ 0x18034D190 (-First@-$consume_Windows_Foundation_Collections_IIterable@U-$IMap@Uhstring@winrt@@U12@@Collectio.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::get_begin_iterator<winrt::Windows::Foundation::Collections::IMap<winrt::hstring,winrt::hstring>,0>(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v3; // rdi
  int v4; // eax
  _QWORD *v6; // [rsp+20h] [rbp-40h] BYREF
  int v7; // [rsp+2Ch] [rbp-34h] BYREF
  int v8; // [rsp+30h] [rbp-30h] BYREF
  __int128 v9; // [rsp+38h] [rbp-28h]
  char v10[8]; // [rsp+48h] [rbp-18h] BYREF

  v6 = a1;
  winrt::impl::consume_Windows_Foundation_Collections_IIterable<winrt::Windows::Foundation::Collections::IMap<winrt::hstring,winrt::hstring>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>>::First(
    a2,
    &v6);
  v10[0] = 0;
  v8 = 0;
  v9 = 0LL;
  v3 = v6;
  v4 = (*(__int64 (__fastcall **)(_QWORD *, char *))(*v6 + 56LL))(v6, v10);
  winrt::check_hresult(&v7, v4, (__int64)&v8);
  if ( v10[0] )
  {
    v6 = 0LL;
    *a1 = v3;
  }
  else
  {
    *a1 = 0LL;
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v6);
  return a1;
}
