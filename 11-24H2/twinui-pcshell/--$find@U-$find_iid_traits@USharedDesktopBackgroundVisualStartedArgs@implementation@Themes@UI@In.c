/*
 * XREFs of ??$find@U?$find_iid_traits@USharedDesktopBackgroundVisualStartedArgs@implementation@Themes@UI@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@USharedDesktopBackgroundVisualStartedArgs@Themes@UI@Internal@Windows@winrt@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@USharedDesktopBackgroundVisualStartedArgs@implementation@Themes@UI@Internal@Windows@winrt@@@12@@Z @ 0x180607D4C
 * Callers:
 *     ?find_interface@?$implements@USharedDesktopBackgroundVisualStartedArgs@implementation@Themes@UI@Internal@Windows@winrt@@U134567@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x18060E4A0 (-find_interface@-$implements@USharedDesktopBackgroundVisualStartedArgs@implementation@Themes@UI@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Internal::UI::Themes::SharedDesktopBackgroundVisualStartedArgs>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::UI::Themes::implementation::SharedDesktopBackgroundVisualStartedArgs>>(
        _QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualStartedArgs>
    && v1[1] == 0x28A9548601EBF88FLL )
  {
    return (*a1 + 16LL) & -(__int64)(*a1 != 0LL);
  }
  else
  {
    return 0LL;
  }
}
