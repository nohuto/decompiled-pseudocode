/*
 * XREFs of ??0?$producers_base@U?$key_value_pair@U?$IKeyValuePair@IUhstring@winrt@@@Collections@Foundation@Windows@winrt@@@impl@winrt@@V?$tuple@U?$IKeyValuePair@IUhstring@winrt@@@Collections@Foundation@Windows@winrt@@@std@@@impl@winrt@@QEAA@XZ @ 0x1806493F4
 * Callers:
 *     ??$create_and_initialize@U?$key_value_pair@U?$IKeyValuePair@IUhstring@winrt@@@Collections@Foundation@Windows@winrt@@@impl@winrt@@AEBIAEBUhstring@3@@impl@winrt@@YAPEAU?$key_value_pair@U?$IKeyValuePair@IUhstring@winrt@@@Collections@Foundation@Windows@winrt@@@01@AEBIAEBUhstring@1@@Z @ 0x180645E80 (--$create_and_initialize@U-$key_value_pair@U-$IKeyValuePair@IUhstring@winrt@@@Collections@Founda.c)
 * Callees:
 *     ??0?$producer_convert@U?$key_value_pair@U?$IKeyValuePair@IUhstring@winrt@@@Collections@Foundation@Windows@winrt@@@impl@winrt@@U?$IKeyValuePair@IUhstring@winrt@@@Collections@Foundation@Windows@3@X@impl@winrt@@QEAA@XZ @ 0x18064928C (--0-$producer_convert@U-$key_value_pair@U-$IKeyValuePair@IUhstring@winrt@@@Collections@Foundatio.c)
 */

__int64 __fastcall winrt::impl::producers_base<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned int,winrt::hstring>>,std::tuple<winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned int,winrt::hstring>>>::producers_base<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned int,winrt::hstring>>,std::tuple<winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned int,winrt::hstring>>>(
        _QWORD *a1)
{
  __int64 v1; // rcx

  winrt::impl::producer_convert<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned int,winrt::hstring>>,winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned int,winrt::hstring>,void>::producer_convert<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned int,winrt::hstring>>,winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned int,winrt::hstring>,void>(a1);
  return v1;
}
