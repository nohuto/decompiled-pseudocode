/*
 * XREFs of ?get_HasCurrent@?$produce@Uiterator@?$iterable_base@U?$scoped_input_iterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@PEBU?$pair@$$CBUhstring@winrt@@U12@@std@@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@3@Uno_collection_version@23@@winrt@@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEA_N@Z @ 0x180377550
 * Callers:
 *     <none>
 * Callees:
 *     ?check_scope@input_scope@impl@winrt@@QEBAXXZ @ 0x1801EA01C (-check_scope@input_scope@impl@winrt@@QEBAXXZ.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::iterable_base<winrt::impl::scoped_input_iterable<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>,std::pair<winrt::hstring const,winrt::hstring> const *>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>,winrt::impl::no_collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>>>::get_HasCurrent(
        __int64 a1,
        bool *a2)
{
  __int64 v4; // rcx
  winrt::impl::input_scope *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 result; // rax
  int v9; // [rsp+30h] [rbp+8h] BYREF

  v4 = a1 + 8;
  if ( !a1 )
    v4 = 24LL;
  v5 = (winrt::impl::input_scope *)(*(_QWORD *)v4 + 24LL);
  try
  {
    winrt::impl::input_scope::check_scope(v5);
    v6 = a1 + 24;
    if ( !a1 )
      v6 = 40LL;
    v7 = a1 + 16;
    if ( !a1 )
      v7 = 32LL;
    *a2 = *(_QWORD *)v7 != *(_QWORD *)v6;
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v9);
  }
  return result;
}
