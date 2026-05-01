/*
 * XREFs of ?TryGetHitTestResultForPointWithWindowId@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@SA?AUIInspectable@Foundation@67@AEBUPoint@967@UWindowId@UI@67@@Z @ 0x18029A0A0
 * Callers:
 *     ?TryGetHitTestResultForPointWithWindowId@?$produce@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@UIDesktopSnapLayoutManagerStatics2@34567@@impl@winrt@@UEAAHUPoint@Foundation@Windows@3@Ustruct_Windows_UI_WindowId@23@PEAPEAX@Z @ 0x1805BA730 (-TryGetHitTestResultForPointWithWindowId@-$produce@UDesktopSnapLayoutManager@factory_implementat.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?GetView@?$consume_Windows_Foundation_Collections_IVector@U?$IVector@UWindowId@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UWindowId@UI@45@@impl@winrt@@QEBA@XZ @ 0x180050E68 (-GetView@-$consume_Windows_Foundation_Collections_IVector@U-$IVector@UWindowId@UI@Windows@winrt@.c)
 *     ?TryGetForPoint@ExtensionCache@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA?AUDesktopSnapLayoutManager@34567@AEBUPoint@Foundation@67@@Z @ 0x1801D7FF4 (-TryGetForPoint@ExtensionCache@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA-A.c)
 *     ?GetInstance@ExtensionCache@implementation@SnapComponent@Shell@Internal@Windows@winrt@@SAAEAV1234567@XZ @ 0x1801F813C (-GetInstance@ExtensionCache@implementation@SnapComponent@Shell@Internal@Windows@winrt@@SAAEAV123.c)
 *     ??$?RUDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@UWindowDraggingEventArgs@2UI@WindowsUdk@5@@?$event@U?$TypedEventHandler@USnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@1@AEBUWindowDraggingEventArgs@4UI@WindowsUdk@1@@Z @ 0x18029A15C (--$-RUDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@UWindowDraggingEventA.c)
 *     ?CreateWindowDraggingEventArgsWithWindowId@SnapEventFactory@SnapInternal@Shell@UI@WindowsUdk@winrt@@SA@AEBUPoint@Foundation@Windows@6@AEBUWindowId@496@@Z @ 0x18029A224 (-CreateWindowDraggingEventArgsWithWindowId@SnapEventFactory@SnapInternal@Shell@UI@WindowsUdk@win.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::TryGetHitTestResultForPointWithWindowId(
        _QWORD *a1,
        float *a2)
{
  RTL_SRWLOCK *Instance; // rax
  float *v5; // rbx
  __int64 *View; // rax
  __int64 v7; // rcx
  float *v9; // [rsp+28h] [rbp-18h] BYREF
  __int64 v10[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 *v11; // [rsp+78h] [rbp+38h] BYREF

  Instance = (RTL_SRWLOCK *)winrt::Windows::Internal::Shell::SnapComponent::implementation::ExtensionCache::GetInstance();
  winrt::Windows::Internal::Shell::SnapComponent::implementation::ExtensionCache::TryGetForPoint(Instance, &v9, a2);
  v5 = v9;
  if ( v9 )
  {
    winrt::WindowsUdk::UI::Shell::SnapInternal::SnapEventFactory::CreateWindowDraggingEventArgsWithWindowId(
      (const struct winrt::Windows::Foundation::Point *)&v11,
      (const struct winrt::Windows::UI::WindowId *)a2);
    winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLayoutManagerExtension,winrt::Windows::Foundation::IInspectable>>::operator()<winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager,winrt::WindowsUdk::UI::Shell::WindowDraggingEventArgs>(
      v5 + 14,
      &v9,
      &v11);
    View = winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::WindowId>,winrt::Windows::UI::WindowId>::GetView(
             &v11,
             v10);
    v7 = *View;
    *View = 0LL;
    *a1 = v7;
    if ( v10[0] )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v10);
    if ( v11 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v11);
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v9);
  }
  else
  {
    *a1 = 0LL;
  }
  return a1;
}
