/*
 * XREFs of ??_E?$heap_implements@UShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x180699EB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x180699E88 (--1ShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 */

winrt::Windows::Internal::Shell::Animations::implementation::ShellAnimationCoordinator *__fastcall winrt::impl::heap_implements<winrt::Windows::Internal::Shell::Animations::implementation::ShellAnimationCoordinator>::`vector deleting destructor'(
        winrt::Windows::Internal::Shell::Animations::implementation::ShellAnimationCoordinator *a1,
        char a2)
{
  winrt::Windows::Internal::Shell::Animations::implementation::ShellAnimationCoordinator::~ShellAnimationCoordinator(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x20);
  return a1;
}
