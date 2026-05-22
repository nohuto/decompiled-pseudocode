/*
 * XREFs of ?Release@CUIComponentInputObjectProxy@@WEA@EAAKXZ @ 0x180130570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CUIComponentInputObjectProxy::Release(__int64 a1)
{
  return BamoInputSystemPrincipal::Release((BamoInputSystemPrincipal *)(a1 - 64));
}
