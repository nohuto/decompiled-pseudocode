/*
 * XREFs of ?AddRef@CUIComponentInputObjectProxy@@WEA@EAAKXZ @ 0x18012F9C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CUIComponentInputObjectProxy::AddRef(__int64 a1)
{
  return BamoInputObserverManagerPrincipal::AddRef((BamoInputObserverManagerPrincipal *)(a1 - 64));
}
