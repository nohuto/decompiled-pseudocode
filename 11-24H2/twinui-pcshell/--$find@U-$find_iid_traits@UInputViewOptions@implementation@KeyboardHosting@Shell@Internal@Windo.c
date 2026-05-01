/*
 * XREFs of ??$find@U?$find_iid_traits@UInputViewOptions@implementation@KeyboardHosting@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UInputViewOptions@KeyboardHosting@Shell@Internal@Windows@winrt@@UIViewOptions@Text@3456@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UInputViewOptions@implementation@KeyboardHosting@Shell@Internal@Windows@winrt@@@12@@Z @ 0x18047B4B0
 * Callers:
 *     ?find_interface@?$implements@UInputViewOptions@implementation@KeyboardHosting@Shell@Internal@Windows@winrt@@U134567@UIViewOptions@Text@4567@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1801E8BB0 (-find_interface@-$implements@UInputViewOptions@implementation@KeyboardHosting@Shell@Internal@Win.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Internal::Shell::KeyboardHosting::InputViewOptions,winrt::Windows::Internal::Shell::Text::IViewOptions>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::KeyboardHosting::implementation::InputViewOptions>>(
        __int64 *a1)
{
  _QWORD *v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rcx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<winrt::Windows::Internal::Shell::KeyboardHosting::IInputViewOptions>
    && v1[1] == 0xCFCDF86BC1407698uLL )
  {
    v2 = *a1;
    v3 = *a1 + 16;
    return v3 & -(__int64)(v2 != 0);
  }
  if ( *v1 == winrt::impl::guid_v<winrt::Windows::Internal::Shell::Text::IViewOptions> && v1[1] == 0xADEF134F0E7F5D95uLL )
  {
    v2 = *a1;
    v3 = *a1 + 24;
    return v3 & -(__int64)(v2 != 0);
  }
  return 0LL;
}
