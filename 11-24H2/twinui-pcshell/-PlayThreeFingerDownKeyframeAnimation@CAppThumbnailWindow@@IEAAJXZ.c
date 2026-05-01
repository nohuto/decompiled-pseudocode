/*
 * XREFs of ?PlayThreeFingerDownKeyframeAnimation@CAppThumbnailWindow@@IEAAJXZ @ 0x1804A8EC0
 * Callers:
 *     ?Open@CAppThumbnailWindow@@QEAAJXZ @ 0x1804A8DB8 (-Open@CAppThumbnailWindow@@QEAAJXZ.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180051814 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x18005480C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?SetHost@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataModel@UITaskGroupDataModel@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUITaskGroupHost@TaskGroups@Shell@Internal@Windows@3@@Z @ 0x180151E0C (-SetHost@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataModel@UITaskGroupDataModel@Ta.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801B4B78 (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_3FingerAnimationSwitchApps@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802A6EC0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_3FingerAnimationSwitchApps@@@details@wil@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ @ 0x1802EDA58 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ.c)
 *     ?CreateExpressionAnimation@?$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1804A675C (-CreateExpressionAnimation@-$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition.c)
 *     ?CreatePropertySet@?$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1804A6980 (-CreatePropertySet@-$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition@UI@Wind.c)
 *     ?CreateThreeFingerScaleAnimation@CAppThumbnailWindow@@IEAA?AUScalarKeyFrameAnimation@Composition@UI@Windows@winrt@@MAEBUhstring@6@@Z @ 0x1804A6D7C (-CreateThreeFingerScaleAnimation@CAppThumbnailWindow@@IEAA-AUScalarKeyFrameAnimation@Composition.c)
 *     ?HasSwitchAnimationVisuals@CAppThumbnailWindow@@QEAA_NXZ @ 0x1804A82B0 (-HasSwitchAnimationVisuals@CAppThumbnailWindow@@QEAA_NXZ.c)
 *     ?SetExpressionReferenceParameter@?$consume_Windows_UI_Composition_ICompositionAnimation4@UExpressionAnimation@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEBUIAnimationObject@Composition@UI@Windows@3@@Z @ 0x1804A9858 (-SetExpressionReferenceParameter@-$consume_Windows_UI_Composition_ICompositionAnimation4@UExpres.c)
 *     ?StartAnimation@?$consume_Windows_UI_Composition_ICompositionObject@UVisual@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEBUCompositionAnimation@Composition@UI@Windows@3@@Z @ 0x1804AA524 (-StartAnimation@-$consume_Windows_UI_Composition_ICompositionObject@UVisual@Composition@UI@Windo.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CAppThumbnailWindow::PlayThreeFingerDownKeyframeAnimation(CAppThumbnailWindow *this)
{
  __int64 v2; // r8
  __int64 *v3; // rax
  char *v4; // rsi
  __int64 *v5; // rax
  char *v6; // rdi
  void (__fastcall ***v7)(_QWORD, void *, __int64 *); // rcx
  void (__fastcall ***v8)(_QWORD, void *, __int64 *); // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  void (__fastcall ***v11)(_QWORD, void *, __int64 *); // rcx
  void (__fastcall ***v12)(_QWORD, void *, __int64 *); // rcx
  __int64 v13; // rcx
  void (__fastcall ***v14)(_QWORD, void *, __int64 *); // rcx
  void (__fastcall ***v15)(_QWORD, void *, __int64 *); // rcx
  const char *v16; // r9
  __int64 result; // rax
  volatile signed __int32 *v18; // [rsp+20h] [rbp-58h] BYREF
  __int64 v19[10]; // [rsp+28h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v21; // [rsp+88h] [rbp+10h] BYREF
  __int64 v22; // [rsp+90h] [rbp+18h] BYREF
  void (__fastcall ***v23)(_QWORD, void *, __int64 *); // [rsp+98h] [rbp+20h] BYREF

  try
  {
    winrt::hstring::hstring((winrt::hstring *)&v18, L"Scale");
    CAppThumbnailWindow::CreateThreeFingerScaleAnimation((__int64)this, &v23, v2);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v18);
    v3 = winrt::impl::consume_Windows_UI_Composition_ICompositor<winrt::Windows::UI::Composition::ICompositor>::CreatePropertySet(
           (__int64 **)this + 48,
           &v21);
    v4 = (char *)this + 400;
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 50, v3);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v21);
    winrt::param::hstring::hstring((winrt::param::hstring *)v19, L"ThumbnailScale");
    winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataModel<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModel>::SetHost(
      (__int64 *)this + 50,
      v19);
    if ( v23 )
    {
      v22 = 0LL;
      (**v23)(v23, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionAnimation>, &v22);
      v21 = v22;
    }
    else
    {
      v21 = 0LL;
    }
    winrt::param::hstring::hstring((winrt::param::hstring *)v19, L"ThumbnailScale");
    winrt::impl::consume_Windows_UI_Composition_ICompositionObject<winrt::Windows::UI::Composition::Visual>::StartAnimation(
      (char *)this + 400,
      v19,
      &v21);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v21);
    winrt::param::hstring::hstring(
      (winrt::param::hstring *)v19,
      L"Matrix4x4.CreateFromScale(Vector3(m_dragScalePropertySet.ThumbnailScale, m_dragScalePropertySet.ThumbnailScale, 0.0f))");
    v5 = winrt::impl::consume_Windows_UI_Composition_ICompositor<winrt::Windows::UI::Composition::ICompositor>::CreateExpressionAnimation(
           (__int64 **)this + 48,
           &v21,
           v19);
    v6 = (char *)this + 536;
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 67, v5);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v21);
    v7 = *(void (__fastcall ****)(_QWORD, void *, __int64 *))v4;
    if ( *(_QWORD *)v4 )
    {
      v22 = 0LL;
      (**v7)(v7, &winrt::impl::guid_v<winrt::Windows::UI::Composition::IAnimationObject>, &v22);
      v21 = v22;
    }
    else
    {
      v21 = 0LL;
    }
    winrt::param::hstring::hstring((winrt::param::hstring *)v19, L"m_dragScalePropertySet");
    winrt::impl::consume_Windows_UI_Composition_ICompositionAnimation4<winrt::Windows::UI::Composition::ExpressionAnimation>::SetExpressionReferenceParameter(
      (char *)this + 536,
      v19,
      &v21);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v21);
    v8 = *(void (__fastcall ****)(_QWORD, void *, __int64 *))v6;
    if ( *(_QWORD *)v6 )
    {
      v22 = 0LL;
      (**v8)(v8, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionAnimation>, &v22);
      v21 = v22;
    }
    else
    {
      v21 = 0LL;
    }
    winrt::param::hstring::hstring((winrt::param::hstring *)v19, L"TransformMatrix");
    winrt::impl::consume_Windows_UI_Composition_ICompositionObject<winrt::Windows::UI::Composition::Visual>::StartAnimation(
      (char *)this + 408,
      v19,
      &v21);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v21);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_3FingerAnimationSwitchApps>::ReportUsage(
      (__int64)&`wil::Feature<__WilFeatureTraits_Feature_3FingerAnimationSwitchApps>::GetImpl'::`2'::impl,
      1u,
      v9,
      v10);
    if ( CAppThumbnailWindow::HasSwitchAnimationVisuals(this) )
    {
      v11 = *(void (__fastcall ****)(_QWORD, void *, __int64 *))v6;
      if ( *(_QWORD *)v6 )
      {
        v22 = 0LL;
        (**v11)(v11, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionAnimation>, &v22);
        v21 = v22;
      }
      else
      {
        v21 = 0LL;
      }
      winrt::param::hstring::hstring((winrt::param::hstring *)v19, L"TransformMatrix");
      winrt::impl::consume_Windows_UI_Composition_ICompositionObject<winrt::Windows::UI::Composition::Visual>::StartAnimation(
        (char *)this + 424,
        v19,
        &v21);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v21);
      v12 = *(void (__fastcall ****)(_QWORD, void *, __int64 *))v6;
      if ( *(_QWORD *)v6 )
      {
        v22 = 0LL;
        (**v12)(v12, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionAnimation>, &v22);
        v21 = v22;
      }
      else
      {
        v21 = 0LL;
      }
      winrt::param::hstring::hstring((winrt::param::hstring *)v19, L"TransformMatrix");
      winrt::impl::consume_Windows_UI_Composition_ICompositionObject<winrt::Windows::UI::Composition::Visual>::StartAnimation(
        (char *)this + 440,
        v19,
        &v21);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v21);
      if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_52580392>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_52580392>::GetImpl'::`2'::impl) )
      {
        if ( !(unsigned int)IsGamingFullScreenExperienceActive(v13) )
        {
          v14 = *(void (__fastcall ****)(_QWORD, void *, __int64 *))v6;
          if ( *(_QWORD *)v6 )
          {
            v22 = 0LL;
            (**v14)(v14, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionAnimation>, &v22);
            v21 = v22;
          }
          else
          {
            v21 = 0LL;
          }
          winrt::param::hstring::hstring((winrt::param::hstring *)v19, L"TransformMatrix");
          winrt::impl::consume_Windows_UI_Composition_ICompositionObject<winrt::Windows::UI::Composition::Visual>::StartAnimation(
            (char *)this + 456,
            v19,
            &v21);
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v21);
          *((_BYTE *)this + 170) = 1;
        }
      }
      else
      {
        v15 = *(void (__fastcall ****)(_QWORD, void *, __int64 *))v6;
        if ( *(_QWORD *)v6 )
        {
          v22 = 0LL;
          (**v15)(v15, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionAnimation>, &v22);
          v21 = v22;
        }
        else
        {
          v21 = 0LL;
        }
        winrt::param::hstring::hstring((winrt::param::hstring *)v19, L"TransformMatrix");
        winrt::impl::consume_Windows_UI_Composition_ICompositionObject<winrt::Windows::UI::Composition::Visual>::StartAnimation(
          (char *)this + 456,
          v19,
          &v21);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v21);
      }
    }
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v23);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v21) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x372,
                     (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
                     v16);
    return (unsigned int)v21;
  }
  return result;
}
