/*
 * XREFs of ??0?$producers_base@U?$key_value_pair@U?$IKeyValuePair@_KUhstring@winrt@@@Collections@Foundation@Windows@winrt@@@impl@winrt@@V?$tuple@U?$IKeyValuePair@_KUhstring@winrt@@@Collections@Foundation@Windows@winrt@@@std@@@impl@winrt@@QEAA@XZ @ 0x180649424
 * Callers:
 *     ??$create_and_initialize@U?$key_value_pair@U?$IKeyValuePair@_KUhstring@winrt@@@Collections@Foundation@Windows@winrt@@@impl@winrt@@AEB_KAEBUhstring@3@@impl@winrt@@YAPEAU?$key_value_pair@U?$IKeyValuePair@_KUhstring@winrt@@@Collections@Foundation@Windows@winrt@@@01@AEB_KAEBUhstring@1@@Z @ 0x180645F28 (--$create_and_initialize@U-$key_value_pair@U-$IKeyValuePair@_KUhstring@winrt@@@Collections@Found.c)
 * Callees:
 *     ??0?$producer_convert@U?$key_value_pair@U?$IKeyValuePair@_KUhstring@winrt@@@Collections@Foundation@Windows@winrt@@@impl@winrt@@U?$IKeyValuePair@_KUhstring@winrt@@@Collections@Foundation@Windows@3@X@impl@winrt@@QEAA@XZ @ 0x1806492BC (--0-$producer_convert@U-$key_value_pair@U-$IKeyValuePair@_KUhstring@winrt@@@Collections@Foundati.c)
 */

__int64 __fastcall winrt::impl::producers_base<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned __int64,winrt::hstring>>,std::tuple<winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned __int64,winrt::hstring>>>::producers_base<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned __int64,winrt::hstring>>,std::tuple<winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned __int64,winrt::hstring>>>(
        _QWORD *a1)
{
  __int64 v1; // rcx

  winrt::impl::producer_convert<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned __int64,winrt::hstring>>,winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned __int64,winrt::hstring>,void>::producer_convert<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned __int64,winrt::hstring>>,winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned __int64,winrt::hstring>,void>(a1);
  return v1;
}
