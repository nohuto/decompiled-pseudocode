/*
 * XREFs of ?CreateAnimation@TouchEdgeGripperWindow@@AEAA?AUScalarKeyFrameAnimation@Composition@UI@Windows@winrt@@MMUhstring@6@H@Z @ 0x18059826C
 * Callers:
 *     ?CreateXamlContent@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@@Z @ 0x180598574 (-CreateXamlContent@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?Run@?$consume_Windows_Internal_Shell_SnapComponent_IImmersiveShellThreadDispatcherCallback@UIImmersiveShellThreadDispatcherCallback@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18011590C (-Run@-$consume_Windows_Internal_Shell_SnapComponent_IImmersiveShellThreadDispatcherCallback@UIIm.c)
 *     ?CreateCubicBezierEasingFunction@?$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUfloat2@Numerics@Foundation@Windows@3@0@Z @ 0x1802BC9DC (-CreateCubicBezierEasingFunction@-$consume_Windows_UI_Composition_ICompositor@UICompositor@Compo.c)
 *     ?GetElementVisual@ElementCompositionPreview@Hosting@Xaml@UI@Windows@winrt@@SA@AEBUUIElement@3456@@Z @ 0x1802BF0B0 (-GetElementVisual@ElementCompositionPreview@Hosting@Xaml@UI@Windows@winrt@@SA@AEBUUIElement@3456.c)
 *     ?CreateScalarKeyFrameAnimation@?$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1804A69E4 (-CreateScalarKeyFrameAnimation@-$consume_Windows_UI_Composition_ICompositor@UICompositor@Composi.c)
 *     ?Duration@?$consume_Windows_UI_Composition_IKeyFrameAnimation@UScalarKeyFrameAnimation@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z @ 0x1804A811C (-Duration@-$consume_Windows_UI_Composition_IKeyFrameAnimation@UScalarKeyFrameAnimation@Compositi.c)
 *     ?InsertKeyFrame@?$consume_Windows_UI_Composition_IScalarKeyFrameAnimation@UIScalarKeyFrameAnimation@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@MMAEBUCompositionEasingFunction@Composition@UI@Windows@3@@Z @ 0x1804A8A54 (-InsertKeyFrame@-$consume_Windows_UI_Composition_IScalarKeyFrameAnimation@UIScalarKeyFrameAnimat.c)
 *     ?Compositor@?$consume_Windows_UI_Composition_ICompositionObject@UVisual@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180598160 (-Compositor@-$consume_Windows_UI_Composition_ICompositionObject@UVisual@Composition@UI@Windows@w.c)
 *     ?Target@?$consume_Windows_UI_Composition_ICompositionAnimation2@UScalarKeyFrameAnimation@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x18059A474 (-Target@-$consume_Windows_UI_Composition_ICompositionAnimation2@UScalarKeyFrameAnimation@Composi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
_QWORD *__fastcall TouchEdgeGripperWindow::CreateAnimation(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        volatile signed __int32 **a5,
        int a6)
{
  void (__fastcall ***v7)(_QWORD, void *, __int64 **); // rcx
  const struct winrt::Windows::UI::Xaml::UIElement *ElementVisual; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  volatile signed __int32 **v11; // rbx
  __int64 *v13; // [rsp+30h] [rbp-21h] BYREF
  __int64 v14; // [rsp+38h] [rbp-19h] BYREF
  __int64 v15; // [rsp+40h] [rbp-11h] BYREF
  __int64 v16; // [rsp+48h] [rbp-9h] BYREF
  _BYTE v17[8]; // [rsp+50h] [rbp-1h] BYREF
  volatile signed __int32 *v18; // [rsp+58h] [rbp+7h] BYREF
  __int64 *v19; // [rsp+A8h] [rbp+57h] BYREF
  _QWORD *v20; // [rsp+B0h] [rbp+5Fh]

  v20 = a2;
  v7 = *(void (__fastcall ****)(_QWORD, void *, __int64 **))(a1 + 120);
  if ( v7 )
  {
    v13 = 0LL;
    (**v7)(v7, &winrt::impl::guid_v<winrt::Windows::UI::Xaml::IUIElement>, &v13);
    v19 = v13;
  }
  else
  {
    v19 = 0LL;
  }
  ElementVisual = winrt::Windows::UI::Xaml::Hosting::ElementCompositionPreview::GetElementVisual(
                    (const struct winrt::Windows::UI::Xaml::UIElement *)v17,
                    (__int64 *)&v19);
  winrt::impl::consume_Windows_UI_Composition_ICompositionObject<winrt::Windows::UI::Composition::Visual>::Compositor(
    (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))ElementVisual,
    &v13);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v17);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v19);
  winrt::impl::consume_Windows_UI_Composition_ICompositor<winrt::Windows::UI::Composition::ICompositor>::CreateScalarKeyFrameAnimation(
    &v13,
    a2);
  v16 = 10000LL * a6;
  winrt::impl::consume_Windows_UI_Composition_IKeyFrameAnimation<winrt::Windows::UI::Composition::ScalarKeyFrameAnimation>::Duration(
    (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))a2,
    &v16);
  winrt::impl::consume_Windows_Internal_Shell_SnapComponent_IImmersiveShellThreadDispatcherCallback<winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback>::Run(a2);
  v14 = 0x3F8000003F800000LL;
  v15 = 1065353216LL;
  winrt::impl::consume_Windows_UI_Composition_ICompositor<winrt::Windows::UI::Composition::ICompositor>::CreateCubicBezierEasingFunction(
    &v13,
    &v16,
    &v15,
    &v14);
  if ( v16 )
  {
    v15 = 0LL;
    (**(void (__fastcall ***)(__int64, void *, __int64 *))v16)(
      v16,
      &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionEasingFunction>,
      &v15);
    v19 = (__int64 *)v15;
  }
  else
  {
    v19 = 0LL;
  }
  winrt::impl::consume_Windows_UI_Composition_IScalarKeyFrameAnimation<winrt::Windows::UI::Composition::IScalarKeyFrameAnimation>::InsertKeyFrame(
    a2,
    v9,
    v10,
    (__int64 *)&v19);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v19);
  v11 = a5;
  v18 = *a5;
  winrt::impl::consume_Windows_UI_Composition_ICompositionAnimation2<winrt::Windows::UI::Composition::ScalarKeyFrameAnimation>::Target(
    a2,
    &v18);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v16);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v13);
  winrt::handle_type<winrt::impl::hstring_traits>::close(v11);
  return a2;
}
