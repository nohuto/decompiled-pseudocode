/*
 * XREFs of ??_G?$heap_implements@V?$module_count_wrapper@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@UEAAPEAXI@Z @ 0x180587670
 * Callers:
 *     ??_E?$heap_implements@V?$module_count_wrapper@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@WEI@EAAPEAXI@Z @ 0x180587650 (--_E-$heap_implements@V-$module_count_wrapper@UTaskGroupsComponent@implementation@TaskGroups@She.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$module_count_wrapper@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@@details@wil@@UEAA@XZ @ 0x180587420 (--1-$module_count_wrapper@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@.c)
 */

winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent *__fastcall winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent>>::`scalar deleting destructor'(
        winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent *a1,
        char a2)
{
  wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent>::~module_count_wrapper<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x270);
  return a1;
}
