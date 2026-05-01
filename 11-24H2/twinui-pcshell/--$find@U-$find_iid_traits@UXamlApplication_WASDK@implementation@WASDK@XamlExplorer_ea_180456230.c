/*
 * XREFs of ??$find@U?$find_iid_traits@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UIXamlMetadataProvider@Markup@Xaml@UI@Microsoft@winrt@@UIApplicationOverrides@3456@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@@12@@Z @ 0x180456230
 * Callers:
 *     ??$find@U?$find_iid_traits@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UXamlApplication_WASDK@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlMetadataProvider@Markup@Xaml@UI@Microsoft@7@UIApplicationOverrides@Xaml@UI@Microsoft@7@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@@12@@Z @ 0x180294964 (--$find@U-$find_iid_traits@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@In.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Microsoft::UI::Xaml::Markup::IXamlMetadataProvider,winrt::Microsoft::UI::Xaml::IApplicationOverrides>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::XamlApplication_WASDK>>(
        __int64 *a1)
{
  _QWORD *v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rcx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<winrt::Microsoft::UI::Xaml::Markup::IXamlMetadataProvider>
    && v1[1] == 0xD73C59A299CE4687uLL )
  {
    v2 = *a1;
    v3 = *a1 + 32;
    return v3 & -(__int64)(v2 != 0);
  }
  if ( *v1 == winrt::impl::guid_v<winrt::Microsoft::UI::Xaml::IApplicationOverrides> && v1[1] == 0x60A72F17ED22788LL )
  {
    v2 = *a1;
    v3 = *a1 + 40;
    return v3 & -(__int64)(v2 != 0);
  }
  return 0LL;
}
