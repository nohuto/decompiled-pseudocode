/*
 * XREFs of ??1?$pair@$$CBUhstring@winrt@@N@std@@QEAA@XZ @ 0x1800FC910
 * Callers:
 *     _winrt::Udwm::Transitions::implementation::TransitionManager::UpdateAngle_::_1_::dtor$2 @ 0x1800FEF96 (_winrt--Udwm--Transitions--implementation--TransitionManager--UpdateAngle_--_1_--dtor$2.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionManager::UpdateRect_::_1_::dtor$1 @ 0x1800FF29A (_winrt--Udwm--Transitions--implementation--TransitionManager--UpdateRect_--_1_--dtor$1.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionManager::UpdateRect_::_1_::dtor$2 @ 0x1800FF2A6 (_winrt--Udwm--Transitions--implementation--TransitionManager--UpdateRect_--_1_--dtor$2.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionManager::UpdateRect_::_1_::dtor$3 @ 0x1800FF2B2 (_winrt--Udwm--Transitions--implementation--TransitionManager--UpdateRect_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::pair<winrt::hstring const,double>::~pair<winrt::hstring const,double>(void **a1)
{
  winrt::handle_type<winrt::impl::hstring_traits>::close(a1);
}
