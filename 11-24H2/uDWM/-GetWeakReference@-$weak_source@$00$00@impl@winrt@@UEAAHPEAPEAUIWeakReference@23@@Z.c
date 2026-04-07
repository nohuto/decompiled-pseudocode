/*
 * XREFs of ?GetWeakReference@?$weak_source@$00$00@impl@winrt@@UEAAHPEAPEAUIWeakReference@23@@Z @ 0x18004E2A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x180025608 (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 */

__int64 __fastcall winrt::impl::weak_source<1,1>::GetWeakReference(__int64 a1, __int64 *a2)
{
  *a2 = (a1 - 8) & -(__int64)(a1 != 0);
  _InterlockedIncrement((volatile signed __int32 *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>(((a1 - 8) & -(__int64)(a1 != 0)) + 28));
  return 0LL;
}
