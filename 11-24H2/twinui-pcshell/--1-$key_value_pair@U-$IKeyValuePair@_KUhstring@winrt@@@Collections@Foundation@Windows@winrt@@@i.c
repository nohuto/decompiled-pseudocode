/*
 * XREFs of ??1?$key_value_pair@U?$IKeyValuePair@_KUhstring@winrt@@@Collections@Foundation@Windows@winrt@@@impl@winrt@@UEAA@XZ @ 0x180649B30
 * Callers:
 *     ??_E?$key_value_pair@U?$IKeyValuePair@_KUhstring@winrt@@@Collections@Foundation@Windows@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x18064A6D0 (--_E-$key_value_pair@U-$IKeyValuePair@_KUhstring@winrt@@@Collections@Foundation@Windows@winrt@@@.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

__int64 __fastcall winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned __int64,winrt::hstring>>::~key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned __int64,winrt::hstring>>(
        __int64 a1)
{
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)(a1 + 32));
  return winrt::impl::root_implements<winrt::impl::vector_impl<winrt::WindowsUdk::UI::MenuItem,std::vector<winrt::WindowsUdk::UI::MenuItem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::WindowsUdk::UI::MenuItem>,winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::UI::MenuItem>,winrt::Windows::Foundation::Collections::IIterable<winrt::WindowsUdk::UI::MenuItem>>::~root_implements<winrt::impl::vector_impl<winrt::WindowsUdk::UI::MenuItem,std::vector<winrt::WindowsUdk::UI::MenuItem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::WindowsUdk::UI::MenuItem>,winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::UI::MenuItem>,winrt::Windows::Foundation::Collections::IIterable<winrt::WindowsUdk::UI::MenuItem>>(a1);
}
