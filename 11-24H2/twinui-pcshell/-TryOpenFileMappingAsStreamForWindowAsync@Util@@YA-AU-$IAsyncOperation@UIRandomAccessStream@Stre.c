/*
 * XREFs of ?TryOpenFileMappingAsStreamForWindowAsync@Util@@YA?AU?$IAsyncOperation@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@_JUhstring@5@@Z @ 0x180651EBC
 * Callers:
 *     ?OpenFileMappingAsStreamForWindowAsync@InProcPropertyStore@Util@@UEAA?AU?$IAsyncOperation@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@_KAEBUhstring@6@@Z @ 0x18064EDA0 (-OpenFileMappingAsStreamForWindowAsync@InProcPropertyStore@Util@@UEAA-AU-$IAsyncOperation@UIRand.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     Util::TryOpenFileMappingAsStreamForWindowAsync$_InitCoro$2 @ 0x180651730 (Util--TryOpenFileMappingAsStreamForWindowAsync$_InitCoro$2.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall Util::TryOpenFileMappingAsStreamForWindowAsync(__int64 *a1, __int64 a2, __int64 *a3)
{
  void *v6; // rax
  int v8; // [rsp+2B0h] [rbp+8h] BYREF
  __int64 *v9; // [rsp+2C0h] [rbp+18h]

  v9 = a3;
  v6 = operator new(0x260uLL);
  v8 = 0;
  Util::TryOpenFileMappingAsStreamForWindowAsync__InitCoro_2(&v8, (__int64)v6 + 112, a1, a2, a3);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)a3);
  return a1;
}
