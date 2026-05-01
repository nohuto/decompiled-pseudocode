/*
 * XREFs of ??1RegistrationData@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x18063F058
 * Callers:
 *     ??_GRegistrationData@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x18063F960 (--_GRegistrationData@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::RegistrationData::~RegistrationData(
        volatile signed __int32 **this)
{
  winrt::handle_type<winrt::impl::hstring_traits>::close(this + 5);
  winrt::handle_type<winrt::impl::hstring_traits>::close(this + 4);
  winrt::handle_type<winrt::impl::hstring_traits>::close(this + 3);
  winrt::impl::root_implements<winrt::impl::vector_impl<winrt::WindowsUdk::UI::MenuItem,std::vector<winrt::WindowsUdk::UI::MenuItem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::WindowsUdk::UI::MenuItem>,winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::UI::MenuItem>,winrt::Windows::Foundation::Collections::IIterable<winrt::WindowsUdk::UI::MenuItem>>::~root_implements<winrt::impl::vector_impl<winrt::WindowsUdk::UI::MenuItem,std::vector<winrt::WindowsUdk::UI::MenuItem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::WindowsUdk::UI::MenuItem>,winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::UI::MenuItem>,winrt::Windows::Foundation::Collections::IIterable<winrt::WindowsUdk::UI::MenuItem>>((__int64)this);
}
