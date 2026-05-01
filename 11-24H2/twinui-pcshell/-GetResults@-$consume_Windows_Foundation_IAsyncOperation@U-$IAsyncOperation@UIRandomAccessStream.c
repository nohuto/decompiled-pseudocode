/*
 * XREFs of ?GetResults@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@UIRandomAccessStreamReference@Streams@Storage@34@@impl@winrt@@QEBA@XZ @ 0x18026DDA8
 * Callers:
 *     winrt::when_any$_ResumeCoro$1_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference__winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference___ @ 0x18026D450 (winrt--when_any$_ResumeCoro$1_winrt--Windows--Foundation--IAsyncOperation_winrt--Windows--Storag.c)
 *     ?await_resume@?$await_adapter@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@QEBA@XZ @ 0x180582DE8 (-await_resume@-$await_adapter@U-$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Sto.c)
 *     _anonymous_namespace_::GetWicBitmapFromStreamReference @ 0x1805EF81C (_anonymous_namespace_--GetWicBitmapFromStreamReference.c)
 * Callees:
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x180050FE0 (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
winrt *__fastcall winrt::impl::consume_Windows_Foundation_IAsyncOperation<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>,winrt::Windows::Storage::Streams::IRandomAccessStreamReference>::GetResults(
        __int64 *a1,
        winrt *a2)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, void **); // rbx
  void **v5; // rax
  unsigned int v6; // eax
  int v8; // [rsp+28h] [rbp-20h] BYREF
  __int128 v9; // [rsp+30h] [rbp-18h]
  char v10; // [rsp+50h] [rbp+8h] BYREF
  winrt *v11; // [rsp+58h] [rbp+10h]

  v11 = a2;
  *(_QWORD *)a2 = 0LL;
  v3 = *a1;
  v8 = 0;
  v9 = 0LL;
  v4 = *(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v3 + 64LL);
  v5 = winrt::put_abi(a2, (struct IUnknown *)a2);
  v6 = v4(v3, v5);
  winrt::check_hresult(&v10, v6, &v8);
  return a2;
}
