/*
 * XREFs of ?Cleanup@WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F90D8
 * Callers:
 *     ??1WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ @ 0x1800F8D68 (--1WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ.c)
 *     ?Cancel@?$produce@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UITransitionHandler@456@@impl@winrt@@UEAAHXZ @ 0x1800F9080 (-Cancel@-$produce@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@wi.c)
 *     ?PreTransition@WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXW4ShellTransition@456@AEBUTransitionState@456@@Z @ 0x1800F9704 (-PreTransition@WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800470D0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?Complete@?$consume_Udwm_Transitions_ITransitionState@UITransitionState@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800F1544 (-Complete@-$consume_Udwm_Transitions_ITransitionState@UITransitionState@Transitions@Udwm@winrt@@.c)
 *     ?Clear@?$consume_Windows_Foundation_Collections_IVector@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@winrt@@UUserResizeVisual@Transitions@Udwm@5@@impl@winrt@@QEBA@XZ @ 0x1800F914C (-Clear@-$consume_Windows_Foundation_Collections_IVector@U-$IVector@UUserResizeVisual@Transitions.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_JointResizeIcons@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800F9BD0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_JointResizeIcons@@@details@wil@@QEAAX_NW4.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@PEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@V?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@std@@V?$allocator@U?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@7@$0A@@std@@@std@@QEAAXXZ @ 0x1800FA5AC (-clear@-$_Hash@V-$_Umap_traits@PEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@V-$_Uhash_c.c)
 */

void __fastcall winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler::Cleanup(
        winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler *this,
        __int64 a2)
{
  winrt::Windows::Foundation::IUnknown *v3; // rbx
  char v4; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 5) )
  {
    winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::Udwm::Transitions::UserResizeVisual>::Clear();
    *((_DWORD *)this + 44) = 0;
  }
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_JointResizeIcons>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_JointResizeIcons>::GetImpl'::`2'::impl,
    a2);
  std::_Hash<std::_Umap_traits<HWND__ *,winrt::Udwm::Transitions::UserResizeVisual,std::_Uhash_compare<HWND__ *,std::hash<HWND__ *>,std::equal_to<HWND__ *>>,std::allocator<std::pair<HWND__ * const,winrt::Udwm::Transitions::UserResizeVisual>>,0>>::clear((char *)this + 112);
  v3 = (winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler *)((char *)this + 32);
  if ( *(_QWORD *)v3 )
  {
    winrt::impl::consume_Udwm_Transitions_ITransitionState<winrt::Udwm::Transitions::ITransitionState>::Complete(v3);
    if ( v3 != (winrt::Windows::Foundation::IUnknown *)&v4 )
    {
      if ( *(_QWORD *)v3 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref(v3);
      *(_QWORD *)v3 = 0LL;
    }
  }
}
