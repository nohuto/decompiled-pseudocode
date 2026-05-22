/*
 * XREFs of ?AddRef@InputDelegationInputObjectProxy@@WDI@EAAKXZ @ 0x180130A10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InputDelegationInputObjectProxy::AddRef(__int64 a1)
{
  return BamoInputObserverManagerPrincipal::AddRef((BamoInputObserverManagerPrincipal *)(a1 - 56));
}
