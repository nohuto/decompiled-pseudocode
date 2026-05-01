/*
 * XREFs of ?AddRef@?$implements@VTouchEdgeGestureManager@@UIInspectable@Foundation@Windows@winrt@@UITouchEdgeGesture@@UIGameFocusEvents@@@winrt@@UEAAKXZ @ 0x180228010
 * Callers:
 *     ?AddRef@?$implements@VInteractionTracker@SnapInteraction@@UIInspectable@Foundation@Windows@winrt@@UIApplicationViewChangeListener@@UIWindowSnappingEvents@@@winrt@@W7EAAKXZ @ 0x18058AF40 (-AddRef@-$implements@VInteractionTracker@SnapInteraction@@UIInspectable@Foundation@Windows@winrt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<TouchEdgeGestureManager,winrt::Windows::Foundation::IInspectable,ITouchEdgeGesture,IGameFocusEvents>::AddRef(
        __int64 a1)
{
  return winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo,winrt::Windows::Internal::Shell::RemoteDesktopProviderInfo>::AddRef(a1 + 24);
}
