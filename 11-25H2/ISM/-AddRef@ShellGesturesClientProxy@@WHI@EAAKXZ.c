/*
 * XREFs of ?AddRef@ShellGesturesClientProxy@@WHI@EAAKXZ @ 0x180159D60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ShellGesturesClientProxy::AddRef(__int64 a1)
{
  return BamoInputObserverManagerPrincipal::AddRef((BamoInputObserverManagerPrincipal *)(a1 - 120));
}
