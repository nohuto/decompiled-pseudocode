/*
 * XREFs of ?AnimationComplete@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA?AUAnimationCompletedHandler@345@XZ @ 0x1800E646C
 * Callers:
 *     ?get_AnimationComplete@?$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITopLevelWindow3DWrapper@345@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1800E6710 (-get_AnimationComplete@-$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::AnimationComplete(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 40);
  *a2 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return a2;
}
