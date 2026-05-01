/*
 * XREFs of ??1ListenerWindow@@UEAA@XZ @ 0x1805F7AD4
 * Callers:
 *     ??_E?$heap_implements@VListenerWindow@@@impl@winrt@@UEAAPEAXI@Z @ 0x1805F32D0 (--_E-$heap_implements@VListenerWindow@@@impl@winrt@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@Uhstring@5@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x180055048 (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$TypedEventHandler@USearchAppHost@Shell@UI.c)
 */

void __fastcall ListenerWindow::~ListenerWindow(ListenerWindow *this)
{
  __int64 *v2; // rcx

  *(_QWORD *)this = &winrt::impl::heap_implements<ListenerWindow>::`vftable';
  v2 = (__int64 *)((char *)this + 32);
  if ( *v2 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::hstring>>>::unconditional_release_ref(v2);
  winrt::impl::root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcher,winrt::Windows::Internal::Shell::SnapComponent::ImmersiveShellThreadDispatcher>::~root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcher,winrt::Windows::Internal::Shell::SnapComponent::ImmersiveShellThreadDispatcher>((__int64)this);
}
