/*
 * XREFs of ?Release@CUIComponentInputObjectProxy@@WEA@EAAKXZ @ 0x180132D90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CUIComponentInputObjectProxy::Release(__int64 a1)
{
  return BamoInputSystemPrincipal::Release((BamoInputSystemPrincipal *)(a1 - 64));
}
