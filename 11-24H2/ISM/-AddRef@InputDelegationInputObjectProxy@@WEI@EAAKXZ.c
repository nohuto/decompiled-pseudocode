/*
 * XREFs of ?AddRef@InputDelegationInputObjectProxy@@WEI@EAAKXZ @ 0x180133240
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InputDelegationInputObjectProxy::AddRef(__int64 a1)
{
  return BamoInputObserverManagerPrincipal::AddRef((BamoInputObserverManagerPrincipal *)(a1 - 72));
}
