/*
 * XREFs of ?AddRef@BamoResizeAreaClientProxy@@W7EAAKXZ @ 0x1800ABE00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoResizeAreaClientProxy::AddRef(__int64 a1)
{
  return BamoInputObserverManagerPrincipal::AddRef((BamoInputObserverManagerPrincipal *)(a1 - 8));
}
