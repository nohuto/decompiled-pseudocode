/*
 * XREFs of ?put_Rect@?$produce@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@UIUserResizeVisual@345@@impl@winrt@@UEAAHURect@Foundation@Windows@3@@Z @ 0x1800EBF00
 * Callers:
 *     <none>
 * Callees:
 *     ?Rect@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXAEBU0Foundation@Windows@5@@Z @ 0x1800EB78C (-Rect@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXAEBU0Foundation@Windows@5@@Z.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::implementation::UserResizeVisual,winrt::Udwm::Transitions::IUserResizeVisual>::put_Rect(
        __int64 a1,
        struct tagRECT *a2)
{
  winrt::Udwm::Transitions::implementation::UserResizeVisual::Rect(
    (winrt::Udwm::Transitions::implementation::UserResizeVisual *)((a1 - 8) & -(__int64)(a1 != 0)),
    a2);
  return 0LL;
}
