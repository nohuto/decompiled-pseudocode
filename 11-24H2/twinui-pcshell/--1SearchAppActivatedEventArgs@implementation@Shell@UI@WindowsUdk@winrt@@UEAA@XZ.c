/*
 * XREFs of ??1SearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UEAA@XZ @ 0x1801BB69C
 * Callers:
 *     ??_E?$heap_implements@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x1801BB620 (--_E-$heap_implements@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@@im.c)
 *     ??_GSearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UEAAPEAXI@Z @ 0x1801BB660 (--_GSearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

void __fastcall winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs::~SearchAppActivatedEventArgs(
        winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs *this)
{
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs *)((char *)this + 144));
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)this + 17);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs *)((char *)this + 120));
  if ( *((_QWORD *)this + 13) )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)this + 13);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs *)((char *)this + 96));
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)this + 10);
  winrt::impl::root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcher,winrt::Windows::Internal::Shell::SnapComponent::ImmersiveShellThreadDispatcher>::~root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcher,winrt::Windows::Internal::Shell::SnapComponent::ImmersiveShellThreadDispatcher>((__int64)this);
}
