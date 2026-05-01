/*
 * XREFs of ?PlayThreeFingerUpKeyframeAnimation@CAppThumbnailWindow@@IEAAJXZ @ 0x1804A9378
 * Callers:
 *     ?Close@CAppThumbnailWindow@@QEAAJAEBW4AnimationType@1@@Z @ 0x1804A52EC (-Close@CAppThumbnailWindow@@QEAAJAEBW4AnimationType@1@@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180051814 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x18005480C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801B4B78 (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_3FingerAnimationSwitchApps@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802A6EC0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_3FingerAnimationSwitchApps@@@details@wil@.c)
 *     ?CreateExpressionAnimation@?$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1804A675C (-CreateExpressionAnimation@-$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition.c)
 *     ?CreateThreeFingerScaleAnimation@CAppThumbnailWindow@@IEAA?AUScalarKeyFrameAnimation@Composition@UI@Windows@winrt@@MAEBUhstring@6@@Z @ 0x1804A6D7C (-CreateThreeFingerScaleAnimation@CAppThumbnailWindow@@IEAA-AUScalarKeyFrameAnimation@Composition.c)
 *     ?HasSwitchAnimationVisuals@CAppThumbnailWindow@@QEAA_NXZ @ 0x1804A82B0 (-HasSwitchAnimationVisuals@CAppThumbnailWindow@@QEAA_NXZ.c)
 *     ?SetExpressionReferenceParameter@?$consume_Windows_UI_Composition_ICompositionAnimation4@UExpressionAnimation@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEBUIAnimationObject@Composition@UI@Windows@3@@Z @ 0x1804A9858 (-SetExpressionReferenceParameter@-$consume_Windows_UI_Composition_ICompositionAnimation4@UExpres.c)
 *     ?StartAnimation@?$consume_Windows_UI_Composition_ICompositionObject@UVisual@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEBUCompositionAnimation@Composition@UI@Windows@3@@Z @ 0x1804AA524 (-StartAnimation@-$consume_Windows_UI_Composition_ICompositionObject@UVisual@Composition@UI@Windo.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CAppThumbnailWindow::PlayThreeFingerUpKeyframeAnimation(CAppThumbnailWindow *this)
{
  __int64 v2; // r8
  char *v3; // rsi
  __int64 *v4; // rax
  char *v5; // rbx
  void (__fastcall ***v6)(_QWORD, void *, __int64 *); // rcx
  void (__fastcall ***v7)(_QWORD, void *, __int64 *); // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  void (__fastcall ***v10)(_QWORD, void *, __int64 *); // rcx
  void (__fastcall ***v11)(_QWORD, void *, __int64 *); // rcx
  void (__fastcall ***v12)(_QWORD, void *, __int64 *); // rcx
  const char *v13; // r9
  __int64 result; // rax
  volatile signed __int32 *v15; // [rsp+20h] [rbp-48h] BYREF
  __int64 v16[8]; // [rsp+28h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v18; // [rsp+78h] [rbp+10h] BYREF
  __int64 v19; // [rsp+80h] [rbp+18h] BYREF
  void (__fastcall ***v20)(_QWORD, void *, __int64 *); // [rsp+88h] [rbp+20h] BYREF

  try
  {
    winrt::hstring::hstring((winrt::hstring *)&v15, L"Scale");
    CAppThumbnailWindow::CreateThreeFingerScaleAnimation((__int64)this, &v20, v2);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v15);
    v3 = (char *)this + 400;
    if ( v20 )
    {
      v19 = 0LL;
      (**v20)(v20, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionAnimation>, &v19);
      v18 = v19;
    }
    else
    {
      v18 = 0LL;
    }
    winrt::param::hstring::hstring((winrt::param::hstring *)v16, L"ThumbnailScale");
    winrt::impl::consume_Windows_UI_Composition_ICompositionObject<winrt::Windows::UI::Composition::Visual>::StartAnimation(
      (char *)this + 400,
      v16,
      &v18);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v18);
    winrt::param::hstring::hstring(
      (winrt::param::hstring *)v16,
      L"Matrix4x4.CreateFromScale(Vector3(m_dragScalePropertySet.ThumbnailScale, m_dragScalePropertySet.ThumbnailScale, 0.0f))");
    v4 = winrt::impl::consume_Windows_UI_Composition_ICompositor<winrt::Windows::UI::Composition::ICompositor>::CreateExpressionAnimation(
           (__int64 **)this + 48,
           &v18,
           v16);
    v5 = (char *)this + 536;
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 67, v4);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v18);
    v6 = *(void (__fastcall ****)(_QWORD, void *, __int64 *))v3;
    if ( *(_QWORD *)v3 )
    {
      v19 = 0LL;
      (**v6)(v6, &winrt::impl::guid_v<winrt::Windows::UI::Composition::IAnimationObject>, &v19);
      v18 = v19;
    }
    else
    {
      v18 = 0LL;
    }
    winrt::param::hstring::hstring((winrt::param::hstring *)v16, L"m_dragScalePropertySet");
    winrt::impl::consume_Windows_UI_Composition_ICompositionAnimation4<winrt::Windows::UI::Composition::ExpressionAnimation>::SetExpressionReferenceParameter(
      (char *)this + 536,
      v16,
      &v18);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v18);
    v7 = *(void (__fastcall ****)(_QWORD, void *, __int64 *))v5;
    if ( *(_QWORD *)v5 )
    {
      v19 = 0LL;
      (**v7)(v7, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionAnimation>, &v19);
      v18 = v19;
    }
    else
    {
      v18 = 0LL;
    }
    winrt::param::hstring::hstring((winrt::param::hstring *)v16, L"TransformMatrix");
    winrt::impl::consume_Windows_UI_Composition_ICompositionObject<winrt::Windows::UI::Composition::Visual>::StartAnimation(
      (char *)this + 408,
      v16,
      &v18);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v18);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_3FingerAnimationSwitchApps>::ReportUsage(
      (__int64)&`wil::Feature<__WilFeatureTraits_Feature_3FingerAnimationSwitchApps>::GetImpl'::`2'::impl,
      1u,
      v8,
      v9);
    if ( CAppThumbnailWindow::HasSwitchAnimationVisuals(this) )
    {
      v10 = *(void (__fastcall ****)(_QWORD, void *, __int64 *))v5;
      if ( *(_QWORD *)v5 )
      {
        v19 = 0LL;
        (**v10)(v10, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionAnimation>, &v19);
        v18 = v19;
      }
      else
      {
        v18 = 0LL;
      }
      winrt::param::hstring::hstring((winrt::param::hstring *)v16, L"TransformMatrix");
      winrt::impl::consume_Windows_UI_Composition_ICompositionObject<winrt::Windows::UI::Composition::Visual>::StartAnimation(
        (char *)this + 424,
        v16,
        &v18);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v18);
      v11 = *(void (__fastcall ****)(_QWORD, void *, __int64 *))v5;
      if ( *(_QWORD *)v5 )
      {
        v19 = 0LL;
        (**v11)(v11, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionAnimation>, &v19);
        v18 = v19;
      }
      else
      {
        v18 = 0LL;
      }
      winrt::param::hstring::hstring((winrt::param::hstring *)v16, L"TransformMatrix");
      winrt::impl::consume_Windows_UI_Composition_ICompositionObject<winrt::Windows::UI::Composition::Visual>::StartAnimation(
        (char *)this + 440,
        v16,
        &v18);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v18);
      v12 = *(void (__fastcall ****)(_QWORD, void *, __int64 *))v5;
      if ( *(_QWORD *)v5 )
      {
        v19 = 0LL;
        (**v12)(v12, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionAnimation>, &v19);
        v18 = v19;
      }
      else
      {
        v18 = 0LL;
      }
      winrt::param::hstring::hstring((winrt::param::hstring *)v16, L"TransformMatrix");
      winrt::impl::consume_Windows_UI_Composition_ICompositionObject<winrt::Windows::UI::Composition::Visual>::StartAnimation(
        (char *)this + 456,
        v16,
        &v18);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v18);
    }
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v20);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v18) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x388,
                     (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
                     v13);
    return (unsigned int)v18;
  }
  return result;
}
