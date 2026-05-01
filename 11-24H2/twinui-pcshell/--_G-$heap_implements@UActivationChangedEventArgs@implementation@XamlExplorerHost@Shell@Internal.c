/*
 * XREFs of ??_G?$heap_implements@UActivationChangedEventArgs@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x180102510
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$root_implements@UImmersiveShellThreadDispatcher@implementation@SnapComponent@Shell@Internal@Windows@winrt@@U134567@@impl@winrt@@MEAA@XZ @ 0x1801023DC (--1-$root_implements@UImmersiveShellThreadDispatcher@implementation@SnapComponent@Shell@Internal.c)
 *     ??3@YAXPEAX@Z @ 0x1802D2320 (--3@YAXPEAX@Z.c)
 */

void *__fastcall winrt::impl::heap_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::ActivationChangedEventArgs>::`scalar deleting destructor'(
        void *Block,
        char a2)
{
  winrt::impl::root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcher,winrt::Windows::Internal::Shell::SnapComponent::ImmersiveShellThreadDispatcher>::~root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcher,winrt::Windows::Internal::Shell::SnapComponent::ImmersiveShellThreadDispatcher>((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
