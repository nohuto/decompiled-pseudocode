/*
 * XREFs of ??$create_and_initialize@Uiterator@?$iterable_base@U?$scoped_input_iterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@PEBU?$pair@$$CBUhstring@winrt@@U12@@std@@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@3@Uno_collection_version@23@@winrt@@PEAU?$scoped_input_iterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@PEBU?$pair@$$CBUhstring@winrt@@U12@@std@@@impl@3@@impl@winrt@@YAPEAUiterator@?$iterable_base@U?$scoped_input_iterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@PEBU?$pair@$$CBUhstring@winrt@@U12@@std@@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@3@Uno_collection_version@23@@1@$$QEAPEAU?$scoped_input_iterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@PEBU?$pair@$$CBUhstring@winrt@@U12@@std@@@01@@Z @ 0x180372E38
 * Callers:
 *     ?First@?$produce@U?$scoped_input_iterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@PEBU?$pair@$$CBUhstring@winrt@@U12@@std@@@impl@winrt@@U?$IIterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x180374530 (-First@-$produce@U-$scoped_input_iterable@U-$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foun.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     ??0?$producers_base@Uiterator@?$iterable_base@U?$scoped_input_iterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@PEBU?$pair@$$CBUhstring@winrt@@U12@@std@@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@3@Uno_collection_version@23@@winrt@@V?$tuple@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@std@@@impl@winrt@@QEAA@XZ @ 0x180373218 (--0-$producers_base@Uiterator@-$iterable_base@U-$scoped_input_iterable@U-$IKeyValuePair@Uhstring.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$scoped_input_iterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@PEBU?$pair@$$CBUhstring@winrt@@U12@@std@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1803778EC (-unconditional_release_ref@-$com_ptr@U-$scoped_input_iterable@U-$IKeyValuePair@Uhstring@winrt@@U.c)
 */

_QWORD *__fastcall winrt::impl::create_and_initialize<winrt::iterable_base<winrt::impl::scoped_input_iterable<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>,std::pair<winrt::hstring const,winrt::hstring> const *>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>,winrt::impl::no_collection_version>::iterator,winrt::impl::scoped_input_iterable<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>,std::pair<winrt::hstring const,winrt::hstring> const *> *>(
        __int64 *a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rbx
  _QWORD *v4; // rdi
  _QWORD *v5; // rsi

  v2 = operator new(0x30uLL);
  v3 = *a1;
  v4 = v2;
  winrt::impl::producers_base<winrt::iterable_base<winrt::impl::scoped_input_iterable<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>,std::pair<winrt::hstring const,winrt::hstring> const *>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>,winrt::impl::no_collection_version>::iterator,std::tuple<winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>>>>::producers_base<winrt::iterable_base<winrt::impl::scoped_input_iterable<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>,std::pair<winrt::hstring const,winrt::hstring> const *>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>,winrt::impl::no_collection_version>::iterator,std::tuple<winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>>>>(v2 + 2);
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  v4[1] = 1LL;
  *v4 = &winrt::impl::heap_implements<winrt::iterable_base<winrt::impl::scoped_input_iterable<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>,std::pair<winrt::hstring const,winrt::hstring> const *>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>,winrt::impl::no_collection_version>::iterator>::`vftable';
  v5 = v4 + 3;
  v4[3] = 0LL;
  v4[4] = *(_QWORD *)(v3 + 32);
  v4[5] = *(_QWORD *)(v3 + 40);
  if ( v3 )
  {
    if ( *v5 )
      winrt::com_ptr<winrt::impl::scoped_input_iterable<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>,std::pair<winrt::hstring const,winrt::hstring> const *>>::unconditional_release_ref(v4 + 3);
    *v5 = v3;
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
  }
  *v4 = &winrt::impl::heap_implements<winrt::iterable_base<winrt::impl::scoped_input_iterable<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>,std::pair<winrt::hstring const,winrt::hstring> const *>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>,winrt::impl::no_collection_version>::iterator>::`vftable';
  return v4;
}
