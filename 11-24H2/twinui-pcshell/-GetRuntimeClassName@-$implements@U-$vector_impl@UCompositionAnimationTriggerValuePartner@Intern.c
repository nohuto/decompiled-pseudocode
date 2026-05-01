/*
 * XREFs of ?GetRuntimeClassName@?$implements@U?$vector_impl@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@6@@impl@winrt@@U?$IVector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@Collections@Foundation@Windows@3@U?$IVectorView@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@5673@U?$IIterable@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@5673@@winrt@@EEBA?AUhstring@2@XZ @ 0x18049E450
 * Callers:
 *     <none>
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x180054754 (--0hstring@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 */

struct winrt::impl::shared_hstring_header **__fastcall winrt::implements<winrt::impl::vector_impl<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner,std::vector<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>,winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>,winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>>::GetRuntimeClassName(
        __int64 a1,
        struct winrt::impl::shared_hstring_header **a2)
{
  _QWORD v4[4]; // [rsp+28h] [rbp-20h] BYREF

  v4[1] = 113LL;
  v4[0] = L"Windows.Foundation.Collections.IVector`1<Windows.UI.Composition.Internal.CompositionAnimationTriggerValuePartner>";
  winrt::hstring::hstring(a2, (__int64)v4);
  return a2;
}
