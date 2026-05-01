/*
 * XREFs of ?TryGetIconFactoryForWindow@?$produce@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupHost@34567@@impl@winrt@@UEAAHUstruct_Windows_Internal_ApplicationModel_WindowManagement_WindowId@23@PEAPEAX@Z @ 0x180588F60
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?TryGetIconFactoryForWindow@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA?AUIIconFactory@Multitasking@ComposableShell@567@UWindowId@WindowManagement@ApplicationModel@567@@Z @ 0x180588FB0 (-TryGetIconFactoryForWindow@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost>::TryGetIconFactoryForWindow(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3)
{
  __int64 *IconFactoryForWindow; // rax
  __int64 v5; // rcx
  char v7; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  IconFactoryForWindow = (__int64 *)winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::TryGetIconFactoryForWindow(
                                      (a1 - 16) & -(__int64)(a1 != 0),
                                      &v7,
                                      a2);
  v5 = *IconFactoryForWindow;
  *IconFactoryForWindow = 0LL;
  *a3 = v5;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v7);
  return 0LL;
}
