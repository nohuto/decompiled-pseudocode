/*
 * XREFs of ?SetupTriggersForDragDirectionChange@CAppThumbnailWindow@@AEAAXXZ @ 0x1804AA2FC
 * Callers:
 *     CAppThumbnailWindow::StartSwitchGestureOperationAsync$_ResumeCoro$1 @ 0x1804AB400 (CAppThumbnailWindow--StartSwitchGestureOperationAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180051814 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x18005480C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ??1?$iterable@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@param@winrt@@QEAA@XZ @ 0x1802CDF40 (--1-$iterable@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@p.c)
 *     ?ThumbnailFactory@?$consume_Windows_Internal_ComposableShell_Multitasking_IRootSwitchItem@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUIThumbnailFactory@Multitasking@ComposableShell@Internal@Windows@3@@Z @ 0x18044F7FC (-ThumbnailFactory@-$consume_Windows_Internal_ComposableShell_Multitasking_IRootSwitchItem@UIRoot.c)
 *     ??$?0U?$IVector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@$0A@@?$iterable@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@param@winrt@@QEAA@AEBU?$IVector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@Collections@Foundation@Windows@2@@Z @ 0x1804A44B8 (--$-0U-$IVector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@.c)
 *     ??$?0VCAppThumbnailWindow@@P80@EAAXAEBUCompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@winrt@@AEBUCompositionAnimationTriggerPartnerFiredEventArgs@23456@@Z@?$TypedEventHandler@UCompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@winrt@@UCompositionAnimationTriggerPartnerFiredEventArgs@23456@@Foundation@Windows@winrt@@QEAA@PEAVCAppThumbnailWindow@@P84@EAAXAEBUCompositionAnimationTriggerPartner@Internal@Composition@UI@23@AEBUCompositionAnimationTriggerPartnerFiredEventArgs@67823@@Z@Z @ 0x1804A46C4 (--$-0VCAppThumbnailWindow@@P80@EAAXAEBUCompositionAnimationTriggerPartner@Internal@Composition@U.c)
 *     ??$as@UICompositorInternal@Internal@Composition@UI@Windows@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?A_PXZ @ 0x1804A4CB0 (--$as@UICompositorInternal@Internal@Composition@UI@Windows@winrt@@@IUnknown@Foundation@Windows@w.c)
 *     ?CreateAnimationTriggerPartner@?$consume_Windows_UI_Composition_Internal_ICompositorInternal@UICompositorInternal@Internal@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUExpressionAnimation@Composition@UI@Windows@3@AEBU?$iterable@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@param@3@@Z @ 0x1804A5540 (-CreateAnimationTriggerPartner@-$consume_Windows_UI_Composition_Internal_ICompositorInternal@UIC.c)
 *     ?CreateTriggerConditionForDirectionChange@CAppThumbnailWindow@@AEAA?AUExpressionAnimation@Composition@UI@Windows@winrt@@XZ @ 0x1804A7674 (-CreateTriggerConditionForDirectionChange@CAppThumbnailWindow@@AEAA-AUExpressionAnimation@Compos.c)
 *     ?CreateTriggerToCachePositionX@CAppThumbnailWindow@@AEAA?AUCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@AEBUhstring@7@@Z @ 0x1804A7BBC (-CreateTriggerToCachePositionX@CAppThumbnailWindow@@AEAA-AUCompositionAnimationTriggerValuePartn.c)
 *     ?CreateTriggerToCacheScalar@CAppThumbnailWindow@@AEAA?AUCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@AEBUhstring@7@0@Z @ 0x1804A7D1C (-CreateTriggerToCacheScalar@CAppThumbnailWindow@@AEAA-AUCompositionAnimationTriggerValuePartner@.c)
 *     ?TriggerFired@?$consume_Windows_UI_Composition_Internal_ICompositionAnimationTriggerPartner@UICompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UCompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@winrt@@UCompositionAnimationTriggerPartnerFiredEventArgs@23456@@Foundation@Windows@3@@Z @ 0x1804ABB7C (-TriggerFired@-$consume_Windows_UI_Composition_Internal_ICompositionAnimationTriggerPartner@UICo.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall CAppThumbnailWindow::SetupTriggersForDragDirectionChange(CAppThumbnailWindow *this)
{
  __int64 *v2; // rdi
  __int64 *v3; // rax
  __int64 *v4; // rax
  __int64 *v5; // rax
  __int64 *v6; // rax
  __int64 *v7; // rax
  __int64 v8[5]; // [rsp+20h] [rbp-28h] BYREF
  volatile signed __int32 *v9; // [rsp+70h] [rbp+28h] BYREF
  __int64 *v10; // [rsp+78h] [rbp+30h] BYREF
  __int64 v11; // [rsp+80h] [rbp+38h] BYREF
  __int64 v12; // [rsp+88h] [rbp+40h] BYREF

  v2 = (__int64 *)((char *)this + 504);
  winrt::hstring::hstring((winrt::hstring *)&v9, L"touchPosAtDirectionChange");
  v3 = CAppThumbnailWindow::CreateTriggerToCachePositionX((__int64)this, &v10, (__int64 *)&v9);
  winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_IRootSwitchItem<winrt::Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem>::ThumbnailFactory(
    v2,
    v3);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v10);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v9);
  winrt::hstring::hstring((winrt::hstring *)&v9, L"touchPosAtDirectionChangeThreshold");
  v4 = CAppThumbnailWindow::CreateTriggerToCachePositionX((__int64)this, &v10, (__int64 *)&v9);
  winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_IRootSwitchItem<winrt::Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem>::ThumbnailFactory(
    (__int64 *)this + 66,
    v4);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v10);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v9);
  winrt::hstring::hstring((winrt::hstring *)&v10, L"scaleFactorAtDirectionChangeThresholdSecondApp");
  winrt::hstring::hstring((winrt::hstring *)&v9, L"scaleFactorSecondApp");
  v5 = CAppThumbnailWindow::CreateTriggerToCacheScalar((__int64)this, &v12, (__int64 *)&v9, (__int64 *)&v10);
  winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_IRootSwitchItem<winrt::Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem>::ThumbnailFactory(
    (__int64 *)this + 66,
    v5);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v12);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v9);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v10);
  winrt::hstring::hstring((winrt::hstring *)&v10, L"scaleFactorAtDirectionChangeThresholdFirstApp");
  winrt::hstring::hstring((winrt::hstring *)&v9, L"scaleFactorFirstApp");
  v6 = CAppThumbnailWindow::CreateTriggerToCacheScalar((__int64)this, &v12, (__int64 *)&v9, (__int64 *)&v10);
  winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_IRootSwitchItem<winrt::Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem>::ThumbnailFactory(
    (__int64 *)this + 66,
    v6);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v12);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v9);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v10);
  CAppThumbnailWindow::CreateTriggerConditionForDirectionChange((__int64)this, &v11);
  winrt::Windows::Foundation::IUnknown::as<winrt::Windows::UI::Composition::Internal::ICompositorInternal>(
    (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))this + 48,
    &v10);
  winrt::param::iterable<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>::iterable<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>(
    (__int64)v8,
    (void (__fastcall ****)(_QWORD, __int64 *, __int64 *))v2);
  v7 = winrt::impl::consume_Windows_UI_Composition_Internal_ICompositorInternal<winrt::Windows::UI::Composition::Internal::ICompositorInternal>::CreateAnimationTriggerPartner(
         &v10,
         &v9,
         &v11,
         v8);
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 62, v7);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v9);
  winrt::param::iterable<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>::~iterable<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>((__int64)v8);
  winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner,winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartnerFiredEventArgs>::TypedEventHandler<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner,winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartnerFiredEventArgs>(
    &v9,
    (__int64)this,
    (__int64)CAppThumbnailWindow::DirectionChangeTriggerFiredHandler);
  *((_QWORD *)this + 61) = *(_QWORD *)winrt::impl::consume_Windows_UI_Composition_Internal_ICompositionAnimationTriggerPartner<winrt::Windows::UI::Composition::Internal::ICompositionAnimationTriggerPartner>::TriggerFired(
                                        (char *)this + 496,
                                        &v12,
                                        &v9);
  if ( v9 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v9);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v10);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v11);
}
