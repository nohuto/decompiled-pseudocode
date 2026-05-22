/*
 * XREFs of ?Release@DWMInputRouter@@WBI@EAAKXZ @ 0x1800FE740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMInputRouter::Release(__int64 a1)
{
  return MPCInputRouter::Release((MPCInputRouter *)(a1 - 24));
}
