/*
 * XREFs of ?Status@?$consume_Windows_Foundation_IAsyncInfo@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1805E970C
 * Callers:
 *     _anonymous_namespace_::TryLoadLogoImageStream @ 0x1805EBD68 (_anonymous_namespace_--TryLoadLogoImageStream.c)
 *     _anonymous_namespace_::GetWicBitmapFromStreamReference @ 0x1805EF81C (_anonymous_namespace_--GetWicBitmapFromStreamReference.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::consume_Windows_Foundation_IAsyncInfo<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>>::Status(
        __int64 (__fastcall ****a1)(_QWORD, __int64 *, __int64 *))
{
  __int64 (__fastcall ***v1)(_QWORD, __int64 *, __int64 *); // rcx
  int v2; // eax
  __int64 v3; // rbx
  int v4; // eax
  int v6; // [rsp+20h] [rbp-40h] BYREF
  __int64 v7; // [rsp+28h] [rbp-38h] BYREF
  __int64 v8; // [rsp+30h] [rbp-30h] BYREF
  int v9; // [rsp+38h] [rbp-28h] BYREF
  __int128 v10; // [rsp+40h] [rbp-20h]
  unsigned int v11; // [rsp+50h] [rbp-10h] BYREF

  v11 = 0;
  v1 = *a1;
  if ( v1 )
  {
    v7 = 0LL;
    v2 = (**v1)(v1, &winrt::impl::guid_v<winrt::Windows::Foundation::IAsyncInfo>, &v7);
    v3 = v7;
    v8 = v7;
  }
  else
  {
    v2 = 0;
    v8 = 0LL;
    v3 = 0LL;
  }
  v9 = 0;
  v10 = 0LL;
  winrt::check_hresult(&v6, v2, (__int64)&v9);
  v9 = 0;
  v10 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v3 + 56LL))(v3, &v11);
  winrt::check_hresult(&v6, v4, (__int64)&v9);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v8);
  return v11;
}
