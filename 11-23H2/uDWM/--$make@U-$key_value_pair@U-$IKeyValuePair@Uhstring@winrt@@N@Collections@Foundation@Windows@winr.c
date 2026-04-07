/*
 * XREFs of ??$make@U?$key_value_pair@U?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@winrt@@@impl@winrt@@AEBUhstring@3@AEBN@winrt@@YA?A_PAEBUhstring@0@AEBN@Z @ 0x1800FC13C
 * Callers:
 *     ?current_value_withlock@iterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@NV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@AEBA?AU?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@3@XZ @ 0x1800FF750 (-current_value_withlock@iterator@-$iterable_base@U-$map_impl@Uhstring@winrt@@NV-$map@Uhstring@wi.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z @ 0x18009DE18 (-create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z.c)
 *     ??0?$heap_implements@U?$key_value_pair@U?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@winrt@@@impl@winrt@@@impl@winrt@@QEAA@Uhstring@2@N@Z @ 0x1800FC504 (--0-$heap_implements@U-$key_value_pair@U-$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation.c)
 */

// Hidden C++ exception states: #wind=1
unsigned __int64 *__fastcall winrt::make<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>>,winrt::hstring const &,double const &>(
        unsigned __int64 *a1,
        __int64 *a2)
{
  struct winrt::impl::hstring_header *hstring_on_heap; // rbx
  __int64 v5; // rsi
  __int64 v6; // rcx
  struct winrt::impl::hstring_header *v8; // [rsp+60h] [rbp+8h] BYREF
  __int64 v9; // [rsp+78h] [rbp+20h]

  v8 = (struct winrt::impl::hstring_header *)a1;
  hstring_on_heap = 0LL;
  v5 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         40LL);
  v9 = v5;
  if ( v5 )
  {
    v6 = *a2;
    if ( *a2 )
    {
      if ( (*(_BYTE *)v6 & 1) != 0 )
      {
        hstring_on_heap = winrt::impl::create_hstring_on_heap(
                            *(winrt::impl **)(v6 + 16),
                            (winrt::impl *)*(unsigned int *)(v6 + 4));
      }
      else
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 24), 1u);
        hstring_on_heap = (struct winrt::impl::hstring_header *)v6;
      }
    }
    v8 = hstring_on_heap;
    hstring_on_heap = (struct winrt::impl::hstring_header *)winrt::impl::heap_implements<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>>>::heap_implements<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>>>(
                                                              v5,
                                                              &v8);
  }
  *a1 = ((unsigned __int64)hstring_on_heap + 16) & -(__int64)(hstring_on_heap != 0LL);
  return a1;
}
