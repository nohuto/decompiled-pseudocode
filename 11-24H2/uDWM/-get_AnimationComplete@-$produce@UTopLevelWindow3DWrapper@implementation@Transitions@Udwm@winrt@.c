/*
 * XREFs of ?get_AnimationComplete@?$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITopLevelWindow3DWrapper@345@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1800E6710
 * Callers:
 *     <none>
 * Callees:
 *     ??$detach_from@UAnimatedTransitionVisualWrapper@Transitions@Udwm@winrt@@@impl@winrt@@YA?A_P$$QEAUAnimatedTransitionVisualWrapper@Transitions@Udwm@1@@Z @ 0x18004AF30 (--$detach_from@UAnimatedTransitionVisualWrapper@Transitions@Udwm@winrt@@@impl@winrt@@YA-A_P$$QEA.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x18004C0B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??$clear_abi@X@impl@winrt@@YAXPEAPEAX@Z @ 0x18004C2A0 (--$clear_abi@X@impl@winrt@@YAXPEAPEAX@Z.c)
 *     ?AnimationComplete@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA?AUAnimationCompletedHandler@345@XZ @ 0x1800E646C (-AnimationComplete@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA-AUAnimati.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,winrt::Udwm::Transitions::ITopLevelWindow3DWrapper>::get_AnimationComplete(
        __int64 a1,
        __int64 *a2)
{
  __int64 v3; // r8
  __int64 *v4; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  winrt::impl::clear_abi<void>(a2);
  v4 = winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::AnimationComplete(
         (v3 - 8) & -(__int64)(v3 != 0),
         &v6);
  *a2 = winrt::impl::detach_from<winrt::Udwm::Transitions::AnimatedTransitionVisualWrapper>(v4);
  if ( v6 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v6);
  return 0LL;
}
