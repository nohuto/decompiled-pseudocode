/*
 * XREFs of ?__abi_GetTrustLevel@TaskViewContainerNavigationEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@W7E$AAAJPEAW4__abi_TrustLevel@@@Z @ 0x18041F840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::TaskViewContainerNavigationEventHandler::__abi_GetTrustLevel(
        __int64 a1,
        int *a2)
{
  return AccessibleElementBase::get_CanSelectMultiple((AccessibleElementBase *)(a1 - 8), a2);
}
