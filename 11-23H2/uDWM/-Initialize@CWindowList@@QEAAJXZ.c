/*
 * XREFs of ?Initialize@CWindowList@@QEAAJXZ @ 0x18002E66C
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z @ 0x1800264FC (-Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ??$make@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@$$V@winrt@@YA?A_PXZ @ 0x18001CBE0 (--$make@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@$$V@w.c)
 *     ??$make@UWindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@$$V@winrt@@YA?A_PXZ @ 0x18001CC7C (--$make@UWindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@$$V@.c)
 *     ??$make@UScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@$$V@winrt@@YA?A_PXZ @ 0x18001CD38 (--$make@UScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt.c)
 *     ?RegisterTransparencySystemPolicyChangeEvent@CWindowList@@AEAAJXZ @ 0x1800200F0 (-RegisterTransparencySystemPolicyChangeEvent@CWindowList@@AEAAJXZ.c)
 *     ?CreateRootVisual@CWindowList@@AEAAJXZ @ 0x1800217B4 (-CreateRootVisual@CWindowList@@AEAAJXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ResponsiveScreenRotationAnimation@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800245AC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ResponsiveScreenRotationAnimation@@@detai.c)
 *     ?GetCurrent@TransitionManager@implementation@Transitions@Udwm@winrt@@SA?AU1345@XZ @ 0x18002E7F0 (-GetCurrent@TransitionManager@implementation@Transitions@Udwm@winrt@@SA-AU1345@XZ.c)
 *     ?RegisterTransitionHandler@?$consume_Udwm_Transitions_ITransitionManager@UITransitionManager@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@AEBW4ShellTransition@Transitions@Udwm@3@AEBUITransitionHandler@563@@Z @ 0x18002E950 (-RegisterTransitionHandler@-$consume_Udwm_Transitions_ITransitionManager@UITransitionManager@Tra.c)
 *     ?IsMaximizeSnapAnimationRejuvenationEnabled@CDesktopManager@@SAHXZ @ 0x1800369DC (-IsMaximizeSnapAnimationRejuvenationEnabled@CDesktopManager@@SAHXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800470D0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CWindowList::Initialize(struct CVisual **this)
{
  __int64 v2; // rdx
  int RootVisual; // ebx
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v8; // rdx
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v11; // [rsp+38h] [rbp+10h] BYREF
  __int64 v12; // [rsp+40h] [rbp+18h] BYREF
  __int64 v13; // [rsp+48h] [rbp+20h] BYREF

  RootVisual = CWindowList::CreateRootVisual(this);
  if ( RootVisual < 0 )
  {
    v8 = 1586LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)RootVisual,
      v9);
    return (unsigned int)RootVisual;
  }
  RootVisual = CWindowList::RegisterTransparencySystemPolicyChangeEvent((CWindowList *)this, v2, v4);
  if ( RootVisual < 0 )
  {
    v8 = 1587LL;
    goto LABEL_15;
  }
  winrt::Udwm::Transitions::implementation::TransitionManager::GetCurrent(&v12);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ResponsiveScreenRotationAnimation>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_ResponsiveScreenRotationAnimation>::GetImpl'::`2'::impl,
    1u,
    v5,
    v6);
  winrt::make<winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler,>(&v13);
  v11 = 1;
  winrt::impl::consume_Udwm_Transitions_ITransitionManager<winrt::Udwm::Transitions::ITransitionManager>::RegisterTransitionHandler(
    &v12,
    &v11,
    &v13);
  if ( v13 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v13);
  if ( (unsigned int)CDesktopManager::IsMaximizeSnapAnimationRejuvenationEnabled() )
  {
    winrt::make<winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler,>(&v13);
    v11 = 2;
    winrt::impl::consume_Udwm_Transitions_ITransitionManager<winrt::Udwm::Transitions::ITransitionManager>::RegisterTransitionHandler(
      &v12,
      &v11,
      &v13);
    v11 = 3;
    winrt::impl::consume_Udwm_Transitions_ITransitionManager<winrt::Udwm::Transitions::ITransitionManager>::RegisterTransitionHandler(
      &v12,
      &v11,
      &v13);
    v11 = 4;
    winrt::impl::consume_Udwm_Transitions_ITransitionManager<winrt::Udwm::Transitions::ITransitionManager>::RegisterTransitionHandler(
      &v12,
      &v11,
      &v13);
    v11 = 5;
    winrt::impl::consume_Udwm_Transitions_ITransitionManager<winrt::Udwm::Transitions::ITransitionManager>::RegisterTransitionHandler(
      &v12,
      &v11,
      &v13);
    if ( v13 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v13);
  }
  winrt::make<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler,>((unsigned __int64 *)&v13);
  v11 = 6;
  winrt::impl::consume_Udwm_Transitions_ITransitionManager<winrt::Udwm::Transitions::ITransitionManager>::RegisterTransitionHandler(
    &v12,
    &v11,
    &v13);
  if ( v13 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v13);
  if ( v12 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v12);
  return 0LL;
}
