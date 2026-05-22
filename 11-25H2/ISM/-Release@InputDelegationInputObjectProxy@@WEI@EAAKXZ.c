/*
 * XREFs of ?Release@InputDelegationInputObjectProxy@@WEI@EAAKXZ @ 0x180131CC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InputDelegationInputObjectProxy::Release(__int64 a1)
{
  return BamoInputSystemPrincipal::Release((BamoInputSystemPrincipal *)(a1 - 72));
}
