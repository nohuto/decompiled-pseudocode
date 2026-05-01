/*
 * XREFs of ?GetTrustLevel@CLaunchActivatedEventArgs@@WBAA@EAAJPEAW4TrustLevel@@@Z @ 0x1806800C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLaunchActivatedEventArgs::GetTrustLevel(__int64 a1, int *a2)
{
  return AccessibleElementBase::get_CanSelectMultiple((AccessibleElementBase *)(a1 - 256), a2);
}
