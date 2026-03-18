/*
 * XREFs of RIMCmShouldDeliverSuppressedContactEndState @ 0x1401F1CF0
 * Callers:
 *     rimFinalizePointerFlags @ 0x1401815FC (rimFinalizePointerFlags.c)
 *     rimProcessPointerDeviceContact @ 0x140181B78 (rimProcessPointerDeviceContact.c)
 * Callees:
 *     RIMCmShouldDeliverSuppressedContact @ 0x140120244 (RIMCmShouldDeliverSuppressedContact.c)
 */

__int64 __fastcall RIMCmShouldDeliverSuppressedContactEndState(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d

  v2 = 0;
  if ( *(_DWORD *)(a2 + 2684) == 0x2000000 )
    return !RIMCmShouldDeliverSuppressedContact(a1, a2);
  return v2;
}
