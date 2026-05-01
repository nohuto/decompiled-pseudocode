/*
 * XREFs of ??1?$_Non_trivial_move@U?$_Optional_construct_base@U?$pair@Uhstring@winrt@@U12@@std@@@std@@U?$pair@Uhstring@winrt@@U12@@2@@std@@QEAA@XZ @ 0x18020B0A0
 * Callers:
 *     ??1?$optional@U?$pair@Uhstring@winrt@@U12@@std@@@std@@QEAA@XZ @ 0x180229CE0 (--1-$optional@U-$pair@Uhstring@winrt@@U12@@std@@@std@@QEAA@XZ.c)
 *     ?RegistryWatcherCallback@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXW4RegistryChangeKind@wil@@PEAUHKEY__@@PEBGAEAV?$unique_any_t@V?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@8@@Z @ 0x180284768 (-RegistryWatcherCallback@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXW4R.c)
 * Callees:
 *     ??1XmlnsDefinition@Markup@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x1802CD750 (--1XmlnsDefinition@Markup@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall std::_Non_trivial_move<std::_Optional_construct_base<std::pair<winrt::hstring,winrt::hstring>>,std::pair<winrt::hstring,winrt::hstring>>::~_Non_trivial_move<std::_Optional_construct_base<std::pair<winrt::hstring,winrt::hstring>>,std::pair<winrt::hstring,winrt::hstring>>(
        winrt::Windows::UI::Xaml::Markup::XmlnsDefinition *a1)
{
  if ( *((_BYTE *)a1 + 16) )
    winrt::Windows::UI::Xaml::Markup::XmlnsDefinition::~XmlnsDefinition(a1);
}
