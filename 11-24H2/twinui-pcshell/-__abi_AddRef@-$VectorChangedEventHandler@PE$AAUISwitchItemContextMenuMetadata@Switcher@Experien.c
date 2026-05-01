/*
 * XREFs of ?__abi_AddRef@?$VectorChangedEventHandler@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@UE$AAAKXZ @ 0x18023A2E0
 * Callers:
 *     ?__abi_AddRef@RoutedEventHandler@Xaml@UI@Windows@@W7E$AAAKXZ @ 0x1806A1BC0 (-__abi_AddRef@RoutedEventHandler@Xaml@UI@Windows@@W7E$AAAKXZ.c)
 *     ?__abi_AddRef@ItemInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@WBA@E$AAAKXZ @ 0x1806A1BD0 (-__abi_AddRef@ItemInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@WBA@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Foundation::Collections::VectorChangedEventHandler<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *>::__abi_AddRef(
        __int64 a1)
{
  return __abi_FTMWeakRefData::Increment(a1 + 24);
}
