/*
 * XREFs of winrt::impl::make_delegate_winrt::Udwm::Transitions::AnimationCompletedHandler__lambda_7747b62f378c0764cf1d4ae8045d1c0d___ @ 0x18004A534
 * Callers:
 *     winrt::Udwm::Transitions::AnimationCompletedHandler::AnimationCompletedHandler__lambda_7747b62f378c0764cf1d4ae8045d1c0d___ @ 0x18004A91C (winrt--Udwm--Transitions--AnimationCompletedHandler--AnimationCompletedHandler__lambda_7747b62f3.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x180025608 (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180095474 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0implements_delegate_base@impl@winrt@@QEAA@XZ @ 0x18009766C (--0implements_delegate_base@impl@winrt@@QEAA@XZ.c)
 */

_QWORD *__fastcall winrt::impl::make_delegate_winrt::Udwm::Transitions::AnimationCompletedHandler__lambda_7747b62f378c0764cf1d4ae8045d1c0d___(
        _QWORD *a1,
        const struct std::nothrow_t *a2)
{
  char *v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *v7; // r9

  v4 = (char *)operator new[](0x18uLL, a2);
  if ( v4 )
  {
    winrt::impl::implements_delegate_base::implements_delegate_base((winrt::impl::implements_delegate_base *)(v4 + 8));
    v5 = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0LL;
    *(_QWORD *)(v6 + 16) = v5;
    _InterlockedIncrement((volatile signed __int32 *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&`winrt::get_module_lock'::`2'::s_lock));
    *v7 = off_1800FC790;
  }
  else
  {
    v7 = 0LL;
  }
  *a1 = v7;
  return a1;
}
