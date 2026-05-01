/*
 * XREFs of ?GetTrustLevel@CProtocolActivatedEventArgs@@WFA@EAAJPEAW4TrustLevel@@@Z @ 0x180330BE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CProtocolActivatedEventArgs::GetTrustLevel(__int64 a1, int *a2)
{
  return AccessibleElementBase::get_CanSelectMultiple((AccessibleElementBase *)(a1 - 80), a2);
}
