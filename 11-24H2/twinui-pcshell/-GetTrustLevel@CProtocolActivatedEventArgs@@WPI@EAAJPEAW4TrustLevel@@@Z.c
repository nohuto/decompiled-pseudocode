/*
 * XREFs of ?GetTrustLevel@CProtocolActivatedEventArgs@@WPI@EAAJPEAW4TrustLevel@@@Z @ 0x180330C60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CProtocolActivatedEventArgs::GetTrustLevel(__int64 a1, int *a2)
{
  return AccessibleElementBase::get_CanSelectMultiple((AccessibleElementBase *)(a1 - 248), a2);
}
