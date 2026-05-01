/*
 * XREFs of ?Close@CAppThumbnailWindow@@QEAAJAEBW4AnimationType@1@@Z @ 0x1804A52EC
 * Callers:
 *     ?AnimationComplete@MultitaskingViewGestureHandler@@AEAAXW4AnimationType@CAppThumbnailWindow@@@Z @ 0x18049CF70 (-AnimationComplete@MultitaskingViewGestureHandler@@AEAAXW4AnimationType@CAppThumbnailWindow@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?Cancel@?$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180052164 (-Cancel@-$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@W.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1801CE0D4 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputDrivenGTGAnimations@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801F49F0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputDrivenGTGAnimations@@@details@wil@@Q.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Windows::UI::Composition::CompositionBatchCompletedEventArgs_::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Windows::UI::Composition::CompositionBatchCompletedEventArgs___lambda_41269503dd0ad4387f409c0b0bf30f63___ @ 0x1804A4524 (winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Foundation--IInspectable_winrt--Wi.c)
 *     _lambda_41269503dd0ad4387f409c0b0bf30f63_::_lambda_41269503dd0ad4387f409c0b0bf30f63_ @ 0x1804A4FBC (_lambda_41269503dd0ad4387f409c0b0bf30f63_--_lambda_41269503dd0ad4387f409c0b0bf30f63_.c)
 *     ??0?$weak_ptr@VCAppThumbnailWindow@@@std@@QEAA@AEBV01@@Z @ 0x1804A5014 (--0-$weak_ptr@VCAppThumbnailWindow@@@std@@QEAA@AEBV01@@Z.c)
 *     ?Completed@?$consume_Windows_UI_Composition_ICompositionScopedBatch@UICompositionScopedBatch@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UCompositionBatchCompletedEventArgs@Composition@UI@34@@Foundation@Windows@3@@Z @ 0x1804A54EC (-Completed@-$consume_Windows_UI_Composition_ICompositionScopedBatch@UICompositionScopedBatch@Com.c)
 *     ?CreateScopedBatch@?$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBW4CompositionBatchTypes@Composition@UI@Windows@3@@Z @ 0x1804A6C5C (-CreateScopedBatch@-$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition@UI@Wind.c)
 *     ?PlayThreeFingerUpKeyframeAnimation@CAppThumbnailWindow@@IEAAJXZ @ 0x1804A9378 (-PlayThreeFingerUpKeyframeAnimation@CAppThumbnailWindow@@IEAAJXZ.c)
 *     ?SetRectAndCallback@CAppThumbnailWindow@@IEAAJAEBUCRect@Geometry@@PEAUIDCompThumbnail@@W4DCompThumbnailAnimation@@_N@Z @ 0x1804A990C (-SetRectAndCallback@CAppThumbnailWindow@@IEAAJAEBUCRect@Geometry@@PEAUIDCompThumbnail@@W4DCompTh.c)
 *     ?Uninitialize@CAppThumbnailWindow@@IEAAXXZ @ 0x1804AC278 (-Uninitialize@CAppThumbnailWindow@@IEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CAppThumbnailWindow::Close(
        CAppThumbnailWindow *this,
        const enum CAppThumbnailWindow::AnimationType *a2,
        __int64 a3,
        __int64 a4)
{
  bool v5; // r14
  unsigned int v6; // esi
  _BYTE *v7; // rdi
  _QWORD *v8; // rax
  int v9; // eax
  unsigned int v10; // edi
  int v12; // eax
  bool v13; // [rsp+20h] [rbp-29h]
  __int64 v14; // [rsp+30h] [rbp-19h] BYREF
  __int64 v15; // [rsp+38h] [rbp-11h] BYREF
  __int64 v16; // [rsp+40h] [rbp-9h] BYREF
  std::_Ref_count_base *v17; // [rsp+48h] [rbp-1h]
  _BYTE v18[8]; // [rsp+50h] [rbp+7h] BYREF
  CAppThumbnailWindow *v19; // [rsp+58h] [rbp+Fh]
  char v20; // [rsp+60h] [rbp+17h]
  _BYTE v21[16]; // [rsp+68h] [rbp+1Fh] BYREF
  _DWORD v22[4]; // [rsp+78h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  v19 = this;
  v20 = 1;
  v22[0] = 0;
  v22[1] = 0;
  v22[2] = *((_DWORD *)this + 36) - *((_DWORD *)this + 34);
  v22[3] = *((_DWORD *)this + 37) - *((_DWORD *)this + 35);
  v5 = *(_DWORD *)a2 == 3;
  v6 = (*(_DWORD *)a2 != 1) + 29;
  if ( *(_DWORD *)a2 && ((v7 = (char *)this + 169, !*((_BYTE *)this + 168)) || *v7) )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputDrivenGTGAnimations>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_InputDrivenGTGAnimations>::GetImpl'::`2'::impl,
      1u,
      3u,
      a4);
    if ( *v7 && !*((_BYTE *)this + 184) )
    {
      v6 = 0;
      LODWORD(v14) = 1;
      winrt::impl::consume_Windows_UI_Composition_ICompositor<winrt::Windows::UI::Composition::ICompositor>::CreateScopedBatch(
        (char *)this + 384,
        &v15,
        &v14);
      std::weak_ptr<CAppThumbnailWindow>::weak_ptr<CAppThumbnailWindow>(&v16, this);
      v8 = (_QWORD *)lambda_41269503dd0ad4387f409c0b0bf30f63_::_lambda_41269503dd0ad4387f409c0b0bf30f63_(
                       (__int64)v21,
                       (__int64)&v16);
      winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Windows::UI::Composition::CompositionBatchCompletedEventArgs_::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Windows::UI::Composition::CompositionBatchCompletedEventArgs___lambda_41269503dd0ad4387f409c0b0bf30f63___(
        &v14,
        v8);
      winrt::impl::consume_Windows_UI_Composition_ICompositionScopedBatch<winrt::Windows::UI::Composition::ICompositionScopedBatch>::Completed(
        &v15,
        v18,
        &v14);
      if ( v14 )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v14);
      v9 = CAppThumbnailWindow::PlayThreeFingerUpKeyframeAnimation(this);
      v10 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x91,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
          (const char *)(unsigned int)v9);
        if ( v17 )
          std::_Ref_count_base::_Decwref(v17);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v15);
        CAppThumbnailWindow::Uninitialize(this);
        return v10;
      }
      winrt::impl::consume_Windows_System_Threading_IThreadPoolTimer<winrt::Windows::System::Threading::IThreadPoolTimer>::Cancel(&v15);
      if ( v17 )
        std::_Ref_count_base::_Decwref(v17);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v15);
    }
    v13 = v5;
    v12 = CAppThumbnailWindow::SetRectAndCallback(this, v22, *((_QWORD *)this + 8), v6, v13);
    v10 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9E,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
        (const char *)(unsigned int)v12);
      CAppThumbnailWindow::Uninitialize(this);
      return v10;
    }
  }
  else
  {
    CAppThumbnailWindow::Uninitialize(this);
  }
  return 0LL;
}
