/*
 * XREFs of ?GetMany@?$produce@Uiterator@?$iterable_base@U?$scoped_input_iterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@PEBU?$pair@$$CBUhstring@winrt@@U12@@std@@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@3@Uno_collection_version@23@@winrt@@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAPEAXPEAI@Z @ 0x180374B50
 * Callers:
 *     <none>
 * Callees:
 *     ?check_scope@input_scope@impl@winrt@@QEBAXXZ @ 0x1801EA01C (-check_scope@input_scope@impl@winrt@@QEBAXXZ.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ?GetMany@iterator@?$iterable_base@U?$scoped_input_iterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@PEBU?$pair@$$CBUhstring@winrt@@U12@@std@@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@3@Uno_collection_version@23@@winrt@@QEAAIU?$array_view@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@@3@@Z @ 0x180374BF0 (-GetMany@iterator@-$iterable_base@U-$scoped_input_iterable@U-$IKeyValuePair@Uhstring@winrt@@U12@.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::iterable_base<winrt::impl::scoped_input_iterable<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>,std::pair<winrt::hstring const,winrt::hstring> const *>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>,winrt::impl::no_collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>>>::GetMany(
        __int64 a1,
        unsigned int a2,
        void *a3,
        _DWORD *a4)
{
  signed __int64 v7; // rdi
  __int64 v8; // rcx
  winrt::impl::input_scope *v9; // rcx
  __int64 result; // rax
  void *v11; // [rsp+20h] [rbp-28h] BYREF
  int v12; // [rsp+28h] [rbp-20h]
  int v13; // [rsp+58h] [rbp+10h] BYREF

  v7 = 8LL * a2;
  memset_0(a3, 0, v7);
  v8 = a1 + 8;
  if ( !a1 )
    v8 = 24LL;
  v9 = (winrt::impl::input_scope *)(*(_QWORD *)v8 + 24LL);
  try
  {
    winrt::impl::input_scope::check_scope(v9);
    v11 = a3;
    v12 = v7 >> 3;
    *a4 = winrt::iterable_base<winrt::impl::scoped_input_iterable<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>,std::pair<winrt::hstring const,winrt::hstring> const *>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>,winrt::impl::no_collection_version>::iterator::GetMany(
            (a1 - 16) & -(__int64)(a1 != 0),
            &v11);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v13);
  }
  return result;
}
