/*
 * XREFs of ?Release@GestureServices@@WDI@EAAKXZ @ 0x180131CB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GestureServices::Release(__int64 a1)
{
  return BamoInputSystemPrincipal::Release((BamoInputSystemPrincipal *)(a1 - 56));
}
