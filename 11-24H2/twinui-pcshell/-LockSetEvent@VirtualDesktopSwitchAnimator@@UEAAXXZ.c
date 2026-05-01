/*
 * XREFs of ?LockSetEvent@VirtualDesktopSwitchAnimator@@UEAAXXZ @ 0x1802D01E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VirtualDesktopSwitchAnimator::LockSetEvent(wil::details **this, void *a2)
{
  wil::details::SetEvent(this[25], a2);
}
