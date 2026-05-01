/*
 * XREFs of ??$find@U?$find_iid_traits@U?$scoped_input_iterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@PEBU?$pair@$$CBUhstring@winrt@@U12@@std@@@impl@winrt@@@impl@winrt@@@?$interface_list@U?$IIterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@U?$scoped_input_iterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@PEBU?$pair@$$CBUhstring@winrt@@U12@@std@@@impl@winrt@@@12@@Z @ 0x180372ED4
 * Callers:
 *     ?find_interface@?$implements@U?$scoped_input_iterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@PEBU?$pair@$$CBUhstring@winrt@@U12@@std@@@impl@winrt@@Unon_agile@3@Uno_weak_ref@3@U?$IIterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1803774F0 (-find_interface@-$implements@U-$scoped_input_iterable@U-$IKeyValuePair@Uhstring@winrt@@U12@@Coll.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>>>::find<winrt::impl::find_iid_traits<winrt::impl::scoped_input_iterable<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>,std::pair<winrt::hstring const,winrt::hstring> const *>>>(
        _QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::uncloaked_iids<winrt::impl::interface_list<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>>>>::value
    && v1[1] == 0x9B31A1F3CB2990BEuLL )
  {
    return (*a1 + 16LL) & -(__int64)(*a1 != 0LL);
  }
  else
  {
    return 0LL;
  }
}
