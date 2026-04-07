/*
 * XREFs of ??1?$map@Uhstring@winrt@@N@param@winrt@@QEAA@XZ @ 0x1800FC8DC
 * Callers:
 *     _winrt::Udwm::Transitions::implementation::TransitionManager::SkipAnimationDelays_::_1_::dtor$6 @ 0x1800FECF9 (_winrt--Udwm--Transitions--implementation--TransitionManager--SkipAnimationDelays_--_1_--dtor$6.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionManager::UpdateAngle_::_1_::dtor$7 @ 0x1800FEFE5 (_winrt--Udwm--Transitions--implementation--TransitionManager--UpdateAngle_--_1_--dtor$7.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionManager::UpdateRect_::_1_::dtor$8 @ 0x1800FF301 (_winrt--Udwm--Transitions--implementation--TransitionManager--UpdateRect_--_1_--dtor$8.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800470D0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 */

void __fastcall winrt::param::map<winrt::hstring,double>::~map<winrt::hstring,double>(
        winrt::Windows::Foundation::IUnknown *a1)
{
  if ( !*((_BYTE *)a1 + 8) )
    *(_QWORD *)a1 = 0LL;
  if ( *(_QWORD *)a1 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(a1);
}
