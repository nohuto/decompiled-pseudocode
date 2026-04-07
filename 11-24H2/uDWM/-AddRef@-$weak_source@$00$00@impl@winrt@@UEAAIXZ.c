/*
 * XREFs of ?AddRef@?$weak_source@$00$00@impl@winrt@@UEAAIXZ @ 0x1800DE700
 * Callers:
 *     <none>
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x180025608 (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 */

__int64 __fastcall winrt::impl::weak_source<1,1>::AddRef(__int64 a1)
{
  __int64 v1; // rax
  volatile signed __int32 *v2; // rax
  int v3; // edx

  v1 = a1 + 16;
  if ( !a1 )
    v1 = 24LL;
  v2 = (volatile signed __int32 *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>(v1);
  return (unsigned int)(_InterlockedExchangeAdd(v2, v3 - 23) + 1);
}
