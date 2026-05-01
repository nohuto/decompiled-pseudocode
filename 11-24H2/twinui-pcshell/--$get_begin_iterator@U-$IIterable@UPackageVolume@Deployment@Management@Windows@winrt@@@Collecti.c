/*
 * XREFs of ??$get_begin_iterator@U?$IIterable@UPackageVolume@Deployment@Management@Windows@winrt@@@Collections@Foundation@Windows@winrt@@$0A@@impl@winrt@@YA?AU?$IIterator@UPackageVolume@Deployment@Management@Windows@winrt@@@Collections@Foundation@Windows@1@AEBU?$IIterable@UPackageVolume@Deployment@Management@Windows@winrt@@@3451@@Z @ 0x1805C49CC
 * Callers:
 *     ?begin@?$consume_Windows_Foundation_Collections_IIterable@U?$IIterable@UPackageVolume@Deployment@Management@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UPackageVolume@Deployment@Management@45@@impl@winrt@@QEBA@XZ @ 0x1805DB70C (-begin@-$consume_Windows_Foundation_Collections_IIterable@U-$IIterable@UPackageVolume@Deployment.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::get_begin_iterator<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Management::Deployment::PackageVolume>,0>(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rdi
  int v6; // eax
  __int64 v8; // [rsp+28h] [rbp-28h] BYREF
  int v9; // [rsp+30h] [rbp-20h] BYREF
  __int128 v10; // [rsp+38h] [rbp-18h]
  int v11; // [rsp+78h] [rbp+28h] BYREF
  int v12; // [rsp+80h] [rbp+30h] BYREF
  __int64 v13; // [rsp+88h] [rbp+38h] BYREF

  v8 = 0LL;
  v3 = *a2;
  v9 = 0;
  v10 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 48LL))(v3, &v8);
  winrt::check_hresult(&v11, v4, (__int64)&v9);
  v5 = v8;
  v13 = v8;
  LOBYTE(v11) = 0;
  v9 = 0;
  v10 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v8 + 56LL))(v8, &v11);
  winrt::check_hresult(&v12, v6, (__int64)&v9);
  if ( (_BYTE)v11 )
  {
    v13 = 0LL;
    *a1 = v5;
  }
  else
  {
    *a1 = 0LL;
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v13);
  return a1;
}
