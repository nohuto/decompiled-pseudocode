/*
 * XREFs of ?GetTrustLevel@CProtocolActivatedEventArgs@@WFI@EAAJPEAW4TrustLevel@@@Z @ 0x180330BF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CProtocolActivatedEventArgs::GetTrustLevel(__int64 a1, int *a2)
{
  return AccessibleElementBase::get_CanSelectMultiple((AccessibleElementBase *)(a1 - 88), a2);
}
