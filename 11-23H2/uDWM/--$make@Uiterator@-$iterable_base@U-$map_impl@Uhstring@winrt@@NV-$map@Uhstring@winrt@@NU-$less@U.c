/*
 * XREFs of ??$make@Uiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@NV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@PEAU?$map_impl@Uhstring@winrt@@NV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@3@@winrt@@YA?A_P$$QEAPEAU?$map_impl@Uhstring@winrt@@NV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@0@@Z @ 0x1800FC3D8
 * Callers:
 *     ?First@?$produce@U?$map_impl@Uhstring@winrt@@NV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IIterable@U?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1800FD170 (-First@-$produce@U-$map_impl@Uhstring@winrt@@NV-$map@Uhstring@winrt@@NU-$less@Uhstring@winrt@@@s.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

unsigned __int64 *__fastcall winrt::make<winrt::iterable_base<winrt::impl::map_impl<winrt::hstring,double,std::map<winrt::hstring,double>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>,winrt::impl::collection_version>::iterator,winrt::impl::map_impl<winrt::hstring,double,std::map<winrt::hstring,double>,winrt::impl::single_threaded_collection_base> *>(
        unsigned __int64 *a1,
        __int64 *a2)
{
  __int64 v4; // rax
  _QWORD *v5; // rdx
  __int64 v6; // r8
  signed __int64 v7; // rax
  signed __int64 v8; // rtt

  v4 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         56LL);
  v5 = (_QWORD *)v4;
  if ( v4 )
  {
    v6 = *a2;
    *(_DWORD *)(v4 + 24) = *(_DWORD *)(*a2 + 40);
    *(_QWORD *)(v4 + 16) = &winrt::impl::produce<winrt::iterable_base<winrt::impl::map_impl<winrt::hstring,double,std::map<winrt::hstring,double>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>>>::`vftable';
    _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
    *(_QWORD *)(v4 + 8) = 1LL;
    *(_QWORD *)v4 = &winrt::iterable_base<winrt::impl::map_impl<winrt::hstring,double,std::map<winrt::hstring,double>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>,winrt::impl::collection_version>::iterator::`vftable';
    *(_QWORD *)(v4 + 32) = 0LL;
    *(_QWORD *)(v4 + 40) = **(_QWORD **)(v6 + 48);
    *(_QWORD *)(v4 + 48) = *(_QWORD *)(v6 + 48);
    if ( v6 )
    {
      *(_QWORD *)(v4 + 32) = v6;
      v7 = *(_QWORD *)(v6 + 8);
      while ( v7 >= 0 )
      {
        v8 = v7;
        v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 8), v7 + 1, v7);
        if ( v8 == v7 )
          goto LABEL_8;
      }
      _InterlockedExchangeAdd((volatile signed __int32 *)(2 * v7 + 24), 1u);
    }
LABEL_8:
    *v5 = &winrt::impl::heap_implements<winrt::iterable_base<winrt::impl::map_impl<winrt::hstring,double,std::map<winrt::hstring,double>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>,winrt::impl::collection_version>::iterator>::`vftable';
  }
  else
  {
    v5 = 0LL;
  }
  *a1 = (unsigned __int64)(v5 + 2) & -(__int64)(v5 != 0LL);
  return a1;
}
