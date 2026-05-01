/*
 * XREFs of ?CreateAnimation@VirtualDesktopSwitcherHost@@AEAA?AV?$tuple@UScalarKeyFrameAnimation@Composition@UI@Windows@winrt@@UCompositor@2345@@std@@AEBM0AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@3@AEBU_GUID@@AEBUfloat2@Numerics@Foundation@Windows@winrt@@3@Z @ 0x180115610
 * Callers:
 *     ?StartDismissAnimation@VirtualDesktopSwitcherHost@@AEAAXXZ @ 0x18022E7B4 (-StartDismissAnimation@VirtualDesktopSwitcherHost@@AEAAXXZ.c)
 *     ?StartInvokeAnimation@VirtualDesktopSwitcherHost@@AEAAXXZ @ 0x1806AD394 (-StartInvokeAnimation@VirtualDesktopSwitcherHost@@AEAAXXZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Run@?$consume_Windows_Internal_Shell_SnapComponent_IImmersiveShellThreadDispatcherCallback@UIImmersiveShellThreadDispatcherCallback@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18011590C (-Run@-$consume_Windows_Internal_Shell_SnapComponent_IImmersiveShellThreadDispatcherCallback@UIIm.c)
 *     ??$from_cx@UUIElement@Xaml@UI@Windows@winrt@@@@YA?AUUIElement@Xaml@UI@Windows@winrt@@PE$AAVObject@Platform@@@Z @ 0x18011736C (--$from_cx@UUIElement@Xaml@UI@Windows@winrt@@@@YA-AUUIElement@Xaml@UI@Windows@winrt@@PE$AAVObjec.c)
 *     ?TryAddTag@?$consume_WindowsUdk_UI_Composition_ICompositionAnimationStatics@UICompositionAnimationStatics@Composition@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUICompositionAnimationBase@Composition@UI@Windows@3@AEBUguid@3@@Z @ 0x1802ACD20 (-TryAddTag@-$consume_WindowsUdk_UI_Composition_ICompositionAnimationStatics@UICompositionAnimati.c)
 *     ?SetIsTranslationEnabled@ElementCompositionPreview@Hosting@Xaml@UI@Windows@winrt@@SA@AEBUUIElement@3456@_N@Z @ 0x1802B0D78 (-SetIsTranslationEnabled@ElementCompositionPreview@Hosting@Xaml@UI@Windows@winrt@@SA@AEBUUIEleme.c)
 *     ?CreateCubicBezierEasingFunction@?$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUfloat2@Numerics@Foundation@Windows@3@0@Z @ 0x1802BC9DC (-CreateCubicBezierEasingFunction@-$consume_Windows_UI_Composition_ICompositor@UICompositor@Compo.c)
 *     ?GetElementVisual@ElementCompositionPreview@Hosting@Xaml@UI@Windows@winrt@@SA@AEBUUIElement@3456@@Z @ 0x1802BF0B0 (-GetElementVisual@ElementCompositionPreview@Hosting@Xaml@UI@Windows@winrt@@SA@AEBUUIElement@3456.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?CreateScalarKeyFrameAnimation@?$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1804A69E4 (-CreateScalarKeyFrameAnimation@-$consume_Windows_UI_Composition_ICompositor@UICompositor@Composi.c)
 *     ?Duration@?$consume_Windows_UI_Composition_IKeyFrameAnimation@UScalarKeyFrameAnimation@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z @ 0x1804A811C (-Duration@-$consume_Windows_UI_Composition_IKeyFrameAnimation@UScalarKeyFrameAnimation@Compositi.c)
 *     ?InsertKeyFrame@?$consume_Windows_UI_Composition_IScalarKeyFrameAnimation@UIScalarKeyFrameAnimation@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@MMAEBUCompositionEasingFunction@Composition@UI@Windows@3@@Z @ 0x1804A8A54 (-InsertKeyFrame@-$consume_Windows_UI_Composition_IScalarKeyFrameAnimation@UIScalarKeyFrameAnimat.c)
 *     ?Compositor@?$consume_Windows_UI_Composition_ICompositionObject@UVisual@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180598160 (-Compositor@-$consume_Windows_UI_Composition_ICompositionObject@UVisual@Composition@UI@Windows@w.c)
 *     ?Target@?$consume_Windows_UI_Composition_ICompositionAnimation2@UScalarKeyFrameAnimation@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x18059A474 (-Target@-$consume_Windows_UI_Composition_ICompositionAnimation2@UScalarKeyFrameAnimation@Composi.c)
 *     ??$call@AEAV_lambda_c893b0be85f95fa79319d83703904477_@@@?$factory_cache_entry@UCompositionAnimation@Composition@UI@WindowsUdk@winrt@@UICompositionAnimationStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_c893b0be85f95fa79319d83703904477_@@@Z @ 0x1806A8E34 (--$call@AEAV_lambda_c893b0be85f95fa79319d83703904477_@@@-$factory_cache_entry@UCompositionAnimat.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=10
__int64 *__fastcall VirtualDesktopSwitcherHost::CreateAnimation(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int *a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rbx
  const struct winrt::Windows::UI::Xaml::UIElement *v13; // rax
  bool v14; // dl
  char v15; // r8
  __int16 v16; // dx
  __int16 v17; // cx
  void (__fastcall ***v18)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v19; // rdi
  void (__fastcall ***v20)(_QWORD, _QWORD, _QWORD); // rbx
  void (__fastcall ***v22)(_QWORD, void *, __int64 *); // [rsp+20h] [rbp-B1h] BYREF
  __int64 v23; // [rsp+28h] [rbp-A9h] BYREF
  __int64 v24; // [rsp+30h] [rbp-A1h] BYREF
  __int64 v25; // [rsp+38h] [rbp-99h] BYREF
  void (__fastcall ***v26)(_QWORD, void *, __int64 *); // [rsp+40h] [rbp-91h] BYREF
  __int64 v27; // [rsp+48h] [rbp-89h] BYREF
  __int64 v28; // [rsp+50h] [rbp-81h] BYREF
  __int64 v29; // [rsp+58h] [rbp-79h] BYREF
  __int64 v30; // [rsp+60h] [rbp-71h] BYREF
  __int64 v31[2]; // [rsp+68h] [rbp-69h] BYREF
  _QWORD v32[3]; // [rsp+78h] [rbp-59h] BYREF
  __int64 v33[4]; // [rsp+90h] [rbp-41h] BYREF
  int v34; // [rsp+B0h] [rbp-21h] BYREF
  __int16 v35; // [rsp+B4h] [rbp-1Dh]
  __int16 v36; // [rsp+B6h] [rbp-1Bh]
  char v37; // [rsp+B8h] [rbp-19h]
  char v38; // [rsp+B9h] [rbp-18h]
  char v39; // [rsp+BAh] [rbp-17h]
  char v40; // [rsp+BBh] [rbp-16h]
  char v41; // [rsp+BCh] [rbp-15h]
  char v42; // [rsp+BDh] [rbp-14h]
  char v43; // [rsp+BEh] [rbp-13h]
  char v44; // [rsp+BFh] [rbp-12h]

  v28 = (__int64)a2;
  from_cx<winrt::Windows::UI::Xaml::UIElement>(&v29, *(_QWORD *)(a1 + 168));
  winrt::Windows::UI::Xaml::Hosting::ElementCompositionPreview::GetElementVisual((const struct winrt::Windows::UI::Xaml::UIElement *)&v27);
  if ( v29 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v29);
  winrt::impl::consume_Windows_UI_Composition_ICompositionObject<winrt::Windows::UI::Composition::Visual>::Compositor(
    &v27,
    &v24);
  winrt::impl::consume_Windows_UI_Composition_ICompositor<winrt::Windows::UI::Composition::ICompositor>::CreateCubicBezierEasingFunction(
    &v24,
    &v26,
    a7,
    a8);
  winrt::impl::consume_Windows_UI_Composition_ICompositor<winrt::Windows::UI::Composition::ICompositor>::CreateScalarKeyFrameAnimation(
    &v24,
    &v22);
  winrt::impl::consume_Windows_Internal_Shell_SnapComponent_IImmersiveShellThreadDispatcherCallback<winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback>::Run(&v22);
  if ( v26 )
  {
    v30 = 0LL;
    (**v26)(v26, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionEasingFunction>, &v30);
    v12 = v30;
    v25 = v30;
  }
  else
  {
    v25 = 0LL;
    v12 = 0LL;
  }
  winrt::impl::consume_Windows_UI_Composition_IScalarKeyFrameAnimation<winrt::Windows::UI::Composition::IScalarKeyFrameAnimation>::InsertKeyFrame(
    &v22,
    v10,
    v11,
    &v25);
  if ( v12 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v25);
  winrt::impl::consume_Windows_UI_Composition_IKeyFrameAnimation<winrt::Windows::UI::Composition::ScalarKeyFrameAnimation>::Duration(
    &v22,
    a5);
  v33[0] = qword_1808C9868;
  winrt::impl::consume_Windows_UI_Composition_ICompositionAnimation2<winrt::Windows::UI::Composition::ScalarKeyFrameAnimation>::Target(
    &v22,
    v33);
  v13 = (const struct winrt::Windows::UI::Xaml::UIElement *)from_cx<winrt::Windows::UI::Xaml::UIElement>(
                                                              v31,
                                                              *(_QWORD *)(a1 + 168));
  winrt::Windows::UI::Xaml::Hosting::ElementCompositionPreview::SetIsTranslationEnabled(v13, v14);
  if ( v31[0] )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v31);
  v15 = *((_BYTE *)a6 + 8);
  v16 = *((_WORD *)a6 + 3);
  v17 = *((_WORD *)a6 + 2);
  v34 = *a6;
  v35 = v17;
  v36 = v16;
  v37 = v15;
  v38 = *((_BYTE *)a6 + 9);
  v39 = *((_BYTE *)a6 + 10);
  v40 = *((_BYTE *)a6 + 11);
  v41 = *((_BYTE *)a6 + 12);
  v42 = *((_BYTE *)a6 + 13);
  v43 = *((_BYTE *)a6 + 14);
  v44 = *((_BYTE *)a6 + 15);
  v18 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v22;
  if ( v22 )
  {
    v28 = 0LL;
    (**v22)(v22, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionAnimationBase>, &v28);
    v23 = v28;
  }
  else
  {
    v23 = 0LL;
  }
  v32[0] = &v23;
  v32[1] = &v34;
  v32[2] = &qword_1808CBC98;
  _InterlockedIncrement64(&qword_1808CBC98);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Composition::CompositionAnimation,winrt::WindowsUdk::UI::Composition::ICompositionAnimationStatics> )
  {
    winrt::impl::consume_WindowsUdk_UI_Composition_ICompositionAnimationStatics<winrt::WindowsUdk::UI::Composition::ICompositionAnimationStatics>::TryAddTag(
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Composition::CompositionAnimation,winrt::WindowsUdk::UI::Composition::ICompositionAnimationStatics>,
      &v23,
      &v34);
    _InterlockedDecrement64(&qword_1808CBC98);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808CBC98);
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Composition::CompositionAnimation,winrt::WindowsUdk::UI::Composition::ICompositionAnimationStatics>::call<_lambda_c893b0be85f95fa79319d83703904477_ &>(
      v18,
      v32);
  }
  if ( v23 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v23);
  v19 = v24;
  *a2 = v24;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a2);
  v20 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v22;
  a2[1] = (__int64)v22;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a2 + 1);
  if ( v20 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v22);
  if ( v26 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v26);
  if ( v19 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v24);
  if ( v27 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v27);
  return a2;
}
