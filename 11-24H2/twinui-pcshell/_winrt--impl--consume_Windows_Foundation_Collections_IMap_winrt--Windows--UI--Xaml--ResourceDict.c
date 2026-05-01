/*
 * XREFs of _winrt::impl::consume_Windows_Foundation_Collections_IMap_winrt::Windows::UI::Xaml::ResourceDictionary_winrt::Windows::Foundation::IInspectable_winrt::Windows::Foundation::IInspectable_::Lookup_::_1_::dtor$0 @ 0x1806F64E5
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::impl::consume_Windows_Foundation_Collections_IMap_winrt::Windows::UI::Xaml::ResourceDictionary_winrt::Windows::Foundation::IInspectable_winrt::Windows::Foundation::IInspectable_::Lookup_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(*(winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension **)(a2 + 120));
  }
}
