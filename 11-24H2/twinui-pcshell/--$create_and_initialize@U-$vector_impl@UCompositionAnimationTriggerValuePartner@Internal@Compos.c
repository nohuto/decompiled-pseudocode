/*
 * XREFs of ??$create_and_initialize@U?$vector_impl@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@6@@impl@winrt@@V?$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@@impl@winrt@@YAPEAU?$vector_impl@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@6@@01@$$QEAV?$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@@Z @ 0x18049B8D0
 * Callers:
 *     ??$single_threaded_vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@winrt@@YA?AU?$IVector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@Collections@Foundation@Windows@0@$$QEAV?$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@@Z @ 0x18049BC20 (--$single_threaded_vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windo.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     ??0?$producers_base@U?$vector_impl@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@6@@impl@winrt@@V?$tuple@U?$IVector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@U?$IVectorView@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@2345@U?$IIterable@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@2345@@std@@@impl@winrt@@QEAA@XZ @ 0x18049BFDC (--0-$producers_base@U-$vector_impl@UCompositionAnimationTriggerValuePartner@Internal@Composition.c)
 */

__int64 __fastcall winrt::impl::create_and_initialize<winrt::impl::vector_impl<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner,std::vector<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>,winrt::impl::single_threaded_collection_base>,std::vector<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>>(
        __int64 *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  char *v9; // [rsp+38h] [rbp+10h]

  v9 = (char *)operator new(0x48uLL);
  winrt::impl::producers_base<winrt::impl::vector_impl<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner,std::vector<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>,winrt::impl::single_threaded_collection_base>,std::tuple<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>,winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>,winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>>>::producers_base<winrt::impl::vector_impl<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner,std::vector<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>,winrt::impl::single_threaded_collection_base>,std::tuple<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>,winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>,winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>>>(
    v9 + 16,
    v2,
    v3,
    v9);
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)(v4 + 8) = 1LL;
  *(_DWORD *)(v4 + 40) = 0;
  *(_QWORD *)v4 = &winrt::impl::vector_impl<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner,std::vector<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>,winrt::impl::single_threaded_collection_base>::`vftable';
  v5 = a1[2];
  a1[2] = 0LL;
  v6 = a1[1];
  a1[1] = 0LL;
  v7 = *a1;
  *a1 = 0LL;
  *(_QWORD *)(v4 + 48) = v7;
  *(_QWORD *)(v4 + 56) = v6;
  *(_QWORD *)(v4 + 64) = v5;
  *(_QWORD *)v4 = &winrt::impl::vector_impl<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner,std::vector<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>,winrt::impl::single_threaded_collection_base>::`vftable';
  return v4;
}
