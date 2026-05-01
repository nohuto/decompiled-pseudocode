/*
 * XREFs of ??_ETaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x1805876EC
 * Callers:
 *     ??_ETaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@WEI@EAAPEAXI@Z @ 0x180587660 (--_ETaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@WEI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1805874FC (--1TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 */

winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent *__fastcall winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::`vector deleting destructor'(
        winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent *this,
        char a2)
{
  winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::~TaskGroupsComponent(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x270);
  return this;
}
