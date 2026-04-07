/*
 * XREFs of ?GetMany@iterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@NV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@AEAAIU?$array_view@U?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@winrt@@@3@Uinput_iterator_tag@std@@@Z @ 0x1800FD3D8
 * Callers:
 *     ?GetMany@?$produce@Uiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@NV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAPEAXPEAI@Z @ 0x1800FD310 (-GetMany@-$produce@Uiterator@-$iterable_base@U-$map_impl@Uhstring@winrt@@NV-$map@Uhstring@winrt@.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800470D0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@N@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800B70A4 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUhstring@winr.c)
 *     ?current_value_withlock@iterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@NV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@AEBA?AU?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@3@XZ @ 0x1800FF750 (-current_value_withlock@iterator@-$iterable_base@U-$map_impl@Uhstring@winrt@@NV-$map@Uhstring@wi.c)
 */

__int64 __fastcall winrt::iterable_base<winrt::impl::map_impl<winrt::hstring,double,std::map<winrt::hstring,double>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>,winrt::impl::collection_version>::iterator::GetMany(
        __int64 a1,
        __int64 a2)
{
  winrt::Windows::Foundation::IUnknown *v2; // rdi
  winrt::Windows::Foundation::IUnknown *v4; // rbx
  unsigned __int64 v5; // r15
  winrt::Windows::Foundation::IUnknown *v6; // r14
  __int64 v7; // rax
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(winrt::Windows::Foundation::IUnknown **)a2;
  v4 = *(winrt::Windows::Foundation::IUnknown **)a2;
  v5 = *(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 8);
  if ( *(_QWORD *)a2 < v5 )
  {
    do
    {
      if ( *(_QWORD *)(a1 + 40) == *(_QWORD *)(a1 + 48) )
        break;
      v6 = (winrt::Windows::Foundation::IUnknown *)winrt::iterable_base<winrt::impl::map_impl<winrt::hstring,double,std::map<winrt::hstring,double>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>,winrt::impl::collection_version>::iterator::current_value_withlock(
                                                     a1,
                                                     &v9);
      if ( v4 != v6 )
      {
        if ( *(_QWORD *)v4 )
          winrt::Windows::Foundation::IUnknown::unconditional_release_ref(v4);
        v7 = *(_QWORD *)v6;
        *(_QWORD *)v6 = 0LL;
        *(_QWORD *)v4 = v7;
      }
      if ( v9 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v9);
      v4 = (winrt::Windows::Foundation::IUnknown *)((char *)v4 + 8);
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,double>>>,std::_Iterator_base0>::operator++((__int64 *)(a1 + 40));
    }
    while ( (unsigned __int64)v4 < v5 );
  }
  return (unsigned int)((v4 - v2) >> 3);
}
