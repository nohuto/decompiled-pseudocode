/*
 * XREFs of ?AddRef@ShellGesturesClientProxy@@WHI@EAAKXZ @ 0x18015AB90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ShellGesturesClientProxy::AddRef(__int64 a1)
{
  return BamoInputObserverManagerPrincipal::AddRef((BamoInputObserverManagerPrincipal *)(a1 - 120));
}
