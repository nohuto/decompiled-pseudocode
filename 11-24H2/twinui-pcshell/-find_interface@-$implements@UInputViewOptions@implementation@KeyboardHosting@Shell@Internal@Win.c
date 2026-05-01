/*
 * XREFs of ?find_interface@?$implements@UInputViewOptions@implementation@KeyboardHosting@Shell@Internal@Windows@winrt@@U134567@UIViewOptions@Text@4567@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1801E8BB0
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@U?$find_iid_traits@UInputViewOptions@implementation@KeyboardHosting@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UInputViewOptions@KeyboardHosting@Shell@Internal@Windows@winrt@@UIViewOptions@Text@3456@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UInputViewOptions@implementation@KeyboardHosting@Shell@Internal@Windows@winrt@@@12@@Z @ 0x18047B4B0 (--$find@U-$find_iid_traits@UInputViewOptions@implementation@KeyboardHosting@Shell@Internal@Windo.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::KeyboardHosting::implementation::InputViewOptions,winrt::Windows::Internal::Shell::KeyboardHosting::InputViewOptions,winrt::Windows::Internal::Shell::Text::IViewOptions>::find_interface(
        __int64 a1,
        __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = a1;
  v3[1] = a2;
  return winrt::impl::interface_list<winrt::Windows::Internal::Shell::KeyboardHosting::InputViewOptions,winrt::Windows::Internal::Shell::Text::IViewOptions>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::KeyboardHosting::implementation::InputViewOptions>>(v3);
}
