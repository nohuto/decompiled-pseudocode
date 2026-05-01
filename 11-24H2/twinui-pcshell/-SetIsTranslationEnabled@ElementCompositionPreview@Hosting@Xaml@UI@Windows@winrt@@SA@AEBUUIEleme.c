/*
 * XREFs of ?SetIsTranslationEnabled@ElementCompositionPreview@Hosting@Xaml@UI@Windows@winrt@@SA@AEBUUIElement@3456@_N@Z @ 0x1802B0D78
 * Callers:
 *     ?CreateAnimation@VirtualDesktopSwitcherHost@@AEAA?AV?$tuple@UScalarKeyFrameAnimation@Composition@UI@Windows@winrt@@UCompositor@2345@@std@@AEBM0AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@3@AEBU_GUID@@AEBUfloat2@Numerics@Foundation@Windows@winrt@@3@Z @ 0x180115610 (-CreateAnimation@VirtualDesktopSwitcherHost@@AEAA-AV-$tuple@UScalarKeyFrameAnimation@Composition.c)
 * Callees:
 *     ?OnFileActivated@?$consume_Windows_UI_Xaml_IApplicationOverrides@UIApplicationOverrides@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUFileActivatedEventArgs@Activation@ApplicationModel@Windows@3@@Z @ 0x1802B0DEC (-OnFileActivated@-$consume_Windows_UI_Xaml_IApplicationOverrides@UIApplicationOverrides@Xaml@UI@.c)
 *     ??$call@AEAV_lambda_811875b78a717298a9deed537a9b1783_@@@?$factory_cache_entry@UElementCompositionPreview@Hosting@Xaml@UI@Windows@winrt@@UIElementCompositionPreviewStatics2@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_811875b78a717298a9deed537a9b1783_@@@Z @ 0x1806A8D24 (--$call@AEAV_lambda_811875b78a717298a9deed537a9b1783_@@@-$factory_cache_entry@UElementCompositio.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::UI::Xaml::Hosting::ElementCompositionPreview::SetIsTranslationEnabled(
        const struct winrt::Windows::UI::Xaml::UIElement *a1)
{
  __int64 result; // rax
  char v2; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v3[4]; // [rsp+28h] [rbp-20h] BYREF

  v2 = 1;
  v3[0] = a1;
  v3[1] = &v2;
  _InterlockedIncrement64(&qword_1808CB7D8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Hosting::ElementCompositionPreview,winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2> )
  {
    result = winrt::impl::consume_Windows_UI_Xaml_IApplicationOverrides<winrt::Windows::UI::Xaml::IApplicationOverrides>::OnFileActivated(
               &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Hosting::ElementCompositionPreview,winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2>,
               a1);
    _InterlockedDecrement64(&qword_1808CB7D8);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808CB7D8);
    return winrt::impl::factory_cache_entry<winrt::Windows::UI::Xaml::Hosting::ElementCompositionPreview,winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2>::call<_lambda_811875b78a717298a9deed537a9b1783_ &>(
             a1,
             v3);
  }
  return result;
}
