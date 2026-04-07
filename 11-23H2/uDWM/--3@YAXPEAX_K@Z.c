/*
 * XREFs of ??3@YAXPEAX_K@Z @ 0x18010D834
 * Callers:
 *     _winrt::make_self_winrt::Udwm::Transitions::implementation::TransitionManager__::_1_::dtor$0 @ 0x1800672EA (_winrt--make_self_winrt--Udwm--Transitions--implementation--TransitionManager__--_1_--dtor$0.c)
 *     _CDWMDXGIAdapter::Create_::_1_::dtor$0 @ 0x180067826 (_CDWMDXGIAdapter--Create_--_1_--dtor$0.c)
 *     _CAnimationEngine::CTransitionVisualSet::Initialize_::_1_::dtor$0 @ 0x1800685D5 (_CAnimationEngine--CTransitionVisualSet--Initialize_--_1_--dtor$0.c)
 *     _CMagnifierControl::OnMagnifierApiMessage_::_1_::dtor$1 @ 0x1800CB3EF (_CMagnifierControl--OnMagnifierApiMessage_--_1_--dtor$1.c)
 *     _CMagnifierControl::OnMagnifierApiMessage_::_1_::dtor$3 @ 0x1800CB40D (_CMagnifierControl--OnMagnifierApiMessage_--_1_--dtor$3.c)
 *     _winrt::make_winrt::impl::key_value_pair_winrt::Windows::Foundation::Collections::IKeyValuePair_winrt::hstring_double____winrt::hstring_const_&_double_const_&__::_1_::dtor$0 @ 0x1800FC201 (_winrt--make_winrt--impl--key_value_pair_winrt--Windows--Foundation--Collections--IKeyValuePair_.c)
 *     _winrt::make_winrt::impl::map_impl_winrt::hstring_double_std::map_winrt::hstring_double_std::less_winrt::hstring__std::allocator_std::pair_winrt::hstring_const__double______winrt::impl::single_threaded_collection_base__std::map_winrt::hstring_double_std::less_winrt::hstring__std::allocator_std::pair_winrt::hstring_const__double________::_1_::dtor$0 @ 0x1800FC2AF (_winrt--make_winrt--impl--map_impl_winrt--hstring_double_std--map_winrt--hstring_double_std--les.c)
 *     _winrt::make_winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper_CTopLevelWindow3D____::_1_::dtor$0 @ 0x180100869 (_winrt--make_winrt--Udwm--Transitions--implementation--AnimatedTransitionVisualWrapper_CTopLevel.c)
 *     _winrt::make_winrt::Udwm::Transitions::implementation::UserResizeVisual_CTopLevelWindow3D___&_bool__::_1_::dtor$0 @ 0x180100933 (_winrt--make_winrt--Udwm--Transitions--implementation--UserResizeVisual_CTopLevelWindow3D___-_bo.c)
 * Callees:
 *     <none>
 */

void __fastcall operator delete(void *a1)
{
  (*(void (__fastcall **)(WPF::HeapBase *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, a1);
}
