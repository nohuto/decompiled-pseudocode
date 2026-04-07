/*
 * XREFs of ?NonDelegatingGetTrustLevel@?$root_implements@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@U1345@UIUserResizeVisualNative@@@impl@winrt@@IEAAHPEAW4TrustLevel@Foundation@Windows@3@@Z @ 0x1800DEC9C
 * Callers:
 *     ?GetTrustLevel@?$implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@@@winrt@@UEAAJPEAW4TrustLevel@@@Z @ 0x1800DEB40 (-GetTrustLevel@-$implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@win.c)
 *     ?GetTrustLevel@?$produce_base@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@UIUserResizeVisual@345@X@impl@winrt@@UEAAHPEAW4TrustLevel@Foundation@Windows@3@@Z @ 0x1800DEB50 (-GetTrustLevel@-$produce_base@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@UIUserRes.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::UserResizeVisual,winrt::Udwm::Transitions::UserResizeVisual,IUserResizeVisualNative>::NonDelegatingGetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  if ( !a1 )
    a1 = 16LL;
  *a2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  return 0LL;
}
