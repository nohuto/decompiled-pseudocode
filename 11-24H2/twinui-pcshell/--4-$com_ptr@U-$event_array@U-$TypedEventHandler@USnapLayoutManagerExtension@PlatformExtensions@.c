/*
 * XREFs of ??4?$com_ptr@U?$event_array@U?$TypedEventHandler@USnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800BF1F8
 * Callers:
 *     ??$exchange@U?$com_ptr@U?$event_array@U?$TypedEventHandler@USnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@U12@@std@@YA?AU?$com_ptr@U?$event_array@U?$TypedEventHandler@USnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAU12@$$QEAU12@@Z @ 0x1800BEEDC (--$exchange@U-$com_ptr@U-$event_array@U-$TypedEventHandler@USnapLayoutManagerExtension@PlatformE.c)
 *     ?add_agile@?$event@U?$TypedEventHandler@USnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@winrt@@@winrt@@AEAA?AUevent_token@2@U?$TypedEventHandler@USnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@2@@Z @ 0x1805BA9D8 (-add_agile@-$event@U-$TypedEventHandler@USnapLayoutManagerExtension@PlatformExtensions@Shell@Int.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@Uhstring@5@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x180055048 (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$TypedEventHandler@USearchAppHost@Shell@UI.c)
 */

__int64 *__fastcall winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLayoutManagerExtension,winrt::Windows::Foundation::IInspectable>>>::operator=(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v4; // rax

  if ( a1 != a2 )
  {
    if ( *a1 )
      winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::hstring>>>::unconditional_release_ref(a1);
    v4 = *a2;
    *a2 = 0LL;
    *a1 = v4;
  }
  return a1;
}
