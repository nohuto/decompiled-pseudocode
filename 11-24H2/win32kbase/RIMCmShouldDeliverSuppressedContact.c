/*
 * XREFs of RIMCmShouldDeliverSuppressedContact @ 0x140120244
 * Callers:
 *     rimProcessPointerDeviceContact @ 0x140181B78 (rimProcessPointerDeviceContact.c)
 *     RIMCmShouldDeliverSuppressedContactEndState @ 0x1401F1CF0 (RIMCmShouldDeliverSuppressedContactEndState.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RIMCmShouldDeliverSuppressedContact(__int64 a1, __int64 a2)
{
  return *(_DWORD *)(a1 + 24) == 7 && *(_DWORD *)(a2 + 8) == 16;
}
