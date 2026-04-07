/*
 * XREFs of ?IsInJointResize@TransitionState@implementation@Transitions@Udwm@winrt@@AEAA_NPEBVCWindowData@@@Z @ 0x1800E98C0
 * Callers:
 *     ?TransferJointResizeVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA?AU?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@5@XZ @ 0x1800E9F98 (-TransferJointResizeVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA-AU-$IVec.c)
 * Callees:
 *     <none>
 */

bool __fastcall winrt::Udwm::Transitions::implementation::TransitionState::IsInJointResize(
        winrt::Udwm::Transitions::implementation::TransitionState *this,
        const struct CWindowData *a2)
{
  return (*((_DWORD *)a2 + 186) & 0xFFFu) - 95 <= 7;
}
