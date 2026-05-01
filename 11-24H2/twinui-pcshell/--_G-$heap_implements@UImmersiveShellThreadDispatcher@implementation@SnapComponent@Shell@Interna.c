/*
 * XREFs of ??_G?$heap_implements@UImmersiveShellThreadDispatcher@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x18059D840
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ImmersiveShellThreadDispatcher@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x18059D0E0 (--1ImmersiveShellThreadDispatcher@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UEA.c)
 */

winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcher *__fastcall winrt::impl::heap_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcher>::`scalar deleting destructor'(
        winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcher *a1,
        char a2)
{
  winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcher::~ImmersiveShellThreadDispatcher(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x30);
  return a1;
}
