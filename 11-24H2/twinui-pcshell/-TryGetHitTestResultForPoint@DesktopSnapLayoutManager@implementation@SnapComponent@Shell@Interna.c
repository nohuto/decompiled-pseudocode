/*
 * XREFs of ?TryGetHitTestResultForPoint@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@SA?AUIInspectable@Foundation@67@AEBUPoint@967@@Z @ 0x180201504
 * Callers:
 *     ?GetHitTestResultForPoint@WindowDragInputProvider@@AEAA?AUIInspectable@Foundation@Windows@winrt@@AEBUPoint@345@@Z @ 0x1802014E0 (-GetHitTestResultForPoint@WindowDragInputProvider@@AEAA-AUIInspectable@Foundation@Windows@winrt@.c)
 *     ?TryGetHitTestResultForPoint@?$produce@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@UIDesktopSnapLayoutManagerStatics@34567@@impl@winrt@@UEAAHUPoint@Foundation@Windows@3@PEAPEAX@Z @ 0x1805BA6E0 (-TryGetHitTestResultForPoint@-$produce@UDesktopSnapLayoutManager@factory_implementation@SnapComp.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?GetView@?$consume_Windows_Foundation_Collections_IVector@U?$IVector@UWindowId@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UWindowId@UI@45@@impl@winrt@@QEBA@XZ @ 0x180050E68 (-GetView@-$consume_Windows_Foundation_Collections_IVector@U-$IVector@UWindowId@UI@Windows@winrt@.c)
 *     ?TryGetForPoint@ExtensionCache@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA?AUDesktopSnapLayoutManager@34567@AEBUPoint@Foundation@67@@Z @ 0x1801D7FF4 (-TryGetForPoint@ExtensionCache@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA-A.c)
 *     ?GetInstance@ExtensionCache@implementation@SnapComponent@Shell@Internal@Windows@winrt@@SAAEAV1234567@XZ @ 0x1801F813C (-GetInstance@ExtensionCache@implementation@SnapComponent@Shell@Internal@Windows@winrt@@SAAEAV123.c)
 *     ??$?RUDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@UWindowDraggingEventArgs@2UI@WindowsUdk@5@@?$event@U?$TypedEventHandler@USnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@1@AEBUWindowDraggingEventArgs@4UI@WindowsUdk@1@@Z @ 0x18029A15C (--$-RUDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@UWindowDraggingEventA.c)
 *     ?CreateWindowDraggingEventArgs@SnapEventFactory@SnapInternal@Shell@UI@WindowsUdk@winrt@@SA@AEBUPoint@Foundation@Windows@6@@Z @ 0x1802B55C8 (-CreateWindowDraggingEventArgs@SnapEventFactory@SnapInternal@Shell@UI@WindowsUdk@winrt@@SA@AEBUP.c)
 */

// Hidden C++ exception states: #wind=2
struct IInspectable __fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::TryGetHitTestResultForPoint(
        const struct winrt::Windows::Foundation::Point *a1,
        float *a2)
{
  RTL_SRWLOCK *Instance; // rax
  float *v5; // rbx
  __int64 *View; // rax
  __int64 v7; // rcx
  _QWORD v9[2]; // [rsp+28h] [rbp-10h] BYREF
  float *v10; // [rsp+50h] [rbp+18h] BYREF
  __int64 *v11; // [rsp+58h] [rbp+20h] BYREF

  Instance = (RTL_SRWLOCK *)winrt::Windows::Internal::Shell::SnapComponent::implementation::ExtensionCache::GetInstance();
  winrt::Windows::Internal::Shell::SnapComponent::implementation::ExtensionCache::TryGetForPoint(Instance, &v10, a2);
  v5 = v10;
  if ( v10 )
  {
    winrt::WindowsUdk::UI::Shell::SnapInternal::SnapEventFactory::CreateWindowDraggingEventArgs((const struct winrt::Windows::Foundation::Point *)&v11);
    winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLayoutManagerExtension,winrt::Windows::Foundation::IInspectable>>::operator()<winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager,winrt::WindowsUdk::UI::Shell::WindowDraggingEventArgs>(
      v5 + 14,
      &v10,
      &v11);
    View = winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::WindowId>,winrt::Windows::UI::WindowId>::GetView(
             &v11,
             v9);
    v7 = *View;
    *View = 0LL;
    *(_QWORD *)a1 = v7;
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v9);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v11);
  }
  else
  {
    *(_QWORD *)a1 = 0LL;
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v10);
  return (struct IInspectable)a1;
}
