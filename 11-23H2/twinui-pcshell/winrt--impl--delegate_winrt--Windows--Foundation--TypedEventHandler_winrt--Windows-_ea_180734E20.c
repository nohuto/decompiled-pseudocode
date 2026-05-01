/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreenId___lambda_4f2909d46ec4fb77bd8b4635adadbf30___::Invoke @ 0x180734E20
 * Callers:
 *     <none>
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_SwitchBugFixes@@@details@wil@@QEAA_NXZ @ 0x180278868 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Engineeri_ea_180278868.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?clear@?$vector@U?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@V?$allocator@U?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@QEAAXXZ @ 0x18072E8D4 (-clear@-$vector@U-$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreenId___lambda_4f2909d46ec4fb77bd8b4635adadbf30___::Invoke(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax
  int v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h]

  v6 = a2;
  v3 = *(_QWORD *)(a1 + 8);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_SwitchBugFixes>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_SwitchBugFixes>::GetImpl'::`2'::impl) )
      std::vector<winrt::event_revoker<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>>::clear((__int64 **)(*(_QWORD *)(a1 + 8) + 8LL));
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v5);
  }
  return result;
}
