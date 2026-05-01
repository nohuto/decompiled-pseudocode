/*
 * XREFs of ?Open@CAppThumbnailWindow@@QEAAJXZ @ 0x1804A8DB8
 * Callers:
 *     ?CreateAndOpenAppThumbnailWindows@MultitaskingViewGestureHandler@@AEAAJXZ @ 0x18049D430 (-CreateAndOpenAppThumbnailWindows@MultitaskingViewGestureHandler@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputDrivenGTGAnimations@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801F49F0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputDrivenGTGAnimations@@@details@wil@@Q.c)
 *     ?CacheAllVisibleAppsOnMonitor@CAppThumbnailWindow@@IEAAJXZ @ 0x1804A51BC (-CacheAllVisibleAppsOnMonitor@CAppThumbnailWindow@@IEAAJXZ.c)
 *     ?CreateAppThumbnail@CAppThumbnailWindow@@IEAAJXZ @ 0x1804A5630 (-CreateAppThumbnail@CAppThumbnailWindow@@IEAAJXZ.c)
 *     ?Initialize@CAppThumbnailWindow@@IEAAJXZ @ 0x1804A842C (-Initialize@CAppThumbnailWindow@@IEAAJXZ.c)
 *     ?PlayThreeFingerDownKeyframeAnimation@CAppThumbnailWindow@@IEAAJXZ @ 0x1804A8EC0 (-PlayThreeFingerDownKeyframeAnimation@CAppThumbnailWindow@@IEAAJXZ.c)
 *     ?DoesHaveVisibleNonIconicViews@MultitaskingViewGestureHandlerHelpers@@YA_NPEAUIApplicationViewCollection@@PEAUIVirtualDesktop@@@Z @ 0x1804AC684 (-DoesHaveVisibleNonIconicViews@MultitaskingViewGestureHandlerHelpers@@YA_NPEAUIApplicationViewCo.c)
 */

__int64 __fastcall CAppThumbnailWindow::Open(
        MultitaskingViewGestureHandlerHelpers **this,
        __int64 a2,
        struct IVirtualDesktop *a3)
{
  int AppThumbnail; // edi
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_BYTE *)this + 168) && !*((_BYTE *)this + 169) )
  {
    if ( !MultitaskingViewGestureHandlerHelpers::DoesHaveVisibleNonIconicViews(this[4], this[16], a3) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x47,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
        (const char *)0x80004004LL);
      return 2147500036LL;
    }
    AppThumbnail = CAppThumbnailWindow::Initialize((CAppThumbnailWindow *)this);
    if ( AppThumbnail < 0 )
    {
      v7 = 73LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
        (const char *)(unsigned int)AppThumbnail);
      return (unsigned int)AppThumbnail;
    }
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputDrivenGTGAnimations>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_InputDrivenGTGAnimations>::GetImpl'::`2'::impl,
      1u,
      3u,
      v6);
    AppThumbnail = CAppThumbnailWindow::CacheAllVisibleAppsOnMonitor((CAppThumbnailWindow *)this);
    if ( AppThumbnail < 0 )
    {
      v7 = 77LL;
      goto LABEL_7;
    }
    AppThumbnail = CAppThumbnailWindow::CreateAppThumbnail((CAppThumbnailWindow *)this);
    if ( AppThumbnail < 0 )
    {
      v7 = 80LL;
      goto LABEL_7;
    }
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputDrivenGTGAnimations>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_InputDrivenGTGAnimations>::GetImpl'::`2'::impl,
      1u,
      3u,
      v8);
    AppThumbnail = CAppThumbnailWindow::PlayThreeFingerDownKeyframeAnimation((CAppThumbnailWindow *)this);
    if ( AppThumbnail < 0 )
    {
      v7 = 84LL;
      goto LABEL_7;
    }
    *((_BYTE *)this + 169) = 1;
  }
  return 0LL;
}
