/*
 * XREFs of ??$create_and_initialize@UTransitionState@implementation@Transitions@Udwm@winrt@@$$V@impl@winrt@@YAPEAUTransitionState@implementation@Transitions@Udwm@1@XZ @ 0x18004D34C
 * Callers:
 *     ??$make@UTransitionState@implementation@Transitions@Udwm@winrt@@$$V@winrt@@YA?A_PXZ @ 0x18004D318 (--$make@UTransitionState@implementation@Transitions@Udwm@winrt@@$$V@winrt@@YA-A_PXZ.c)
 * Callees:
 *     ??0TransitionState@implementation@Transitions@Udwm@winrt@@QEAA@XZ @ 0x18004D3B0 (--0TransitionState@implementation@Transitions@Udwm@winrt@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180095474 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18009C4E0 (memset_0.c)
 */

winrt::Udwm::Transitions::implementation::TransitionState *__fastcall winrt::impl::create_and_initialize<winrt::Udwm::Transitions::implementation::TransitionState,>(
        __int64 a1,
        const struct std::nothrow_t *a2)
{
  winrt::Udwm::Transitions::implementation::TransitionState *v2; // rax
  winrt::Udwm::Transitions::implementation::TransitionState *v3; // rbx

  v2 = (winrt::Udwm::Transitions::implementation::TransitionState *)operator new[](0x80uLL, a2);
  v3 = v2;
  if ( !v2 )
    return 0LL;
  memset_0(v2, 0, 0x80uLL);
  winrt::Udwm::Transitions::implementation::TransitionState::TransitionState(v3);
  *((_QWORD *)v3 + 1) = &winrt::impl::heap_implements<winrt::Udwm::Transitions::implementation::TransitionState>::`vftable'{for `winrt::impl::producer_convert<winrt::Udwm::Transitions::implementation::TransitionState,ITransitionStateNativePrivate,void>'};
  *(_QWORD *)v3 = &winrt::impl::heap_implements<winrt::Udwm::Transitions::implementation::TransitionState>::`vftable'{for `winrt::impl::producer_convert<winrt::Udwm::Transitions::implementation::TransitionState,ITransitionStateNative,void>'};
  *((_QWORD *)v3 + 3) = &winrt::impl::heap_implements<winrt::Udwm::Transitions::implementation::TransitionState>::`vftable';
  return v3;
}
