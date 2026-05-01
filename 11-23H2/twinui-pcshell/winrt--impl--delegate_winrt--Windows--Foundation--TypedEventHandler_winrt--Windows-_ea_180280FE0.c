/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreenId___lambda_97ea773e353b0db0e215eb811349f3a3___::Invoke @ 0x180280FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?lock@?$weak_ptr@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@@std@@QEBA?AV?$shared_ptr@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x18055D070 (-lock@-$weak_ptr@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@@std@@QEBA-.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_FailFast_V2_Provider@@@details@wil@@QEAA_NXZ @ 0x18072E898 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_FailFast_V2_Provider@@@d.c)
 *     ?clear@?$vector@U?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@V?$allocator@U?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@QEAAXXZ @ 0x18072E8D4 (-clear@-$vector@U-$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreenId___lambda_97ea773e353b0db0e215eb811349f3a3___::Invoke(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v5; // [rsp+28h] [rbp-10h]
  int v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  std::weak_ptr<winrt::Windows::Internal::Shell::implementation::BootProviderActivator>::lock(a1 + 8, &v4);
  try
  {
    v2 = v4;
    if ( v4 )
    {
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 24LL))(v4, &v7);
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_FailFast_V2_Provider>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_W365Boot_FailFast_V2_Provider>::GetImpl'::`2'::impl) )
        std::vector<winrt::event_revoker<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>>::clear(v2 + 8);
    }
    if ( v5 )
      std::_Ref_count_base::_Decref(v5);
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v6);
  }
  return result;
}
