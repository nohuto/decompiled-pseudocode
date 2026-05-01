/*
 * XREFs of ?GetMany@iterator@?$iterable_base@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@_KUhstring@winrt@@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@QEAAIU?$array_view@U?$IKeyValuePair@_KUhstring@winrt@@@Collections@Foundation@Windows@winrt@@@3@@Z @ 0x18064D260
 * Callers:
 *     ?GetMany@?$produce@Uiterator@?$iterable_base@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@_KUhstring@winrt@@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@U?$IKeyValuePair@_KUhstring@winrt@@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAPEAXPEAI@Z @ 0x18064D070 (-GetMany@-$produce@Uiterator@-$iterable_base@U-$map_impl@_KUhstring@winrt@@V-$map@_KUhstring@win.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180051814 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18005C784 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$ComPtr@UIA.c)
 *     ?check_version@iterator_type@collection_version@impl@winrt@@QEBAXAEBU234@@Z @ 0x18033FCBC (-check_version@iterator_type@collection_version@impl@winrt@@QEBAXAEBU234@@Z.c)
 *     ?current_value_withlock@iterator@?$iterable_base@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@_KUhstring@winrt@@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@AEBA?AU?$IKeyValuePair@_KUhstring@winrt@@@Collections@Foundation@Windows@3@XZ @ 0x180653558 (-current_value_withlock@iterator@-$iterable_base@U-$map_impl@_KUhstring@winrt@@V-$map@_KUhstring.c)
 */

__int64 __fastcall winrt::iterable_base<winrt::impl::map_impl<unsigned __int64,winrt::hstring,std::map<unsigned __int64,winrt::hstring>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned __int64,winrt::hstring>,winrt::impl::collection_version>::iterator::GetMany(
        _QWORD *a1,
        __m128i *a2)
{
  __int64 *v4; // rbp
  __m128i v5; // xmm0
  __int64 *v6; // rbx
  unsigned __int64 v7; // r14
  __int64 *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  char v13; // [rsp+40h] [rbp+8h] BYREF

  winrt::impl::collection_version::iterator_type::check_version(
    (winrt::impl::collection_version::iterator_type *)(a1 + 3),
    (const struct winrt::impl::collection_version *)(a1[4] + 40LL));
  v4 = (__int64 *)a2->m128i_i64[0];
  v5 = _mm_srli_si128(*a2, 8);
  v6 = v4;
  v7 = (unsigned __int64)&v4[_mm_cvtsi128_si32(v5)];
  if ( (unsigned __int64)v4 < v7 )
  {
    do
    {
      if ( a1[5] == a1[6] )
        break;
      v8 = (__int64 *)winrt::iterable_base<winrt::impl::map_impl<unsigned __int64,winrt::hstring,std::map<unsigned __int64,winrt::hstring>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned __int64,winrt::hstring>,winrt::impl::collection_version>::iterator::current_value_withlock(
                        a1,
                        &v13);
      winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=(v6, v8);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v13);
      ++v6;
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>>,std::_Iterator_base0>::operator++(
        a1 + 5,
        v9,
        v10,
        v11);
    }
    while ( (unsigned __int64)v6 < v7 );
  }
  return (unsigned int)(v6 - v4);
}
