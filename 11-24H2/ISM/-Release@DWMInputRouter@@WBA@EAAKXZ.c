/*
 * XREFs of ?Release@DWMInputRouter@@WBA@EAAKXZ @ 0x1800FE730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMInputRouter::Release(__int64 a1)
{
  return MPCInputRouter::Release((MPCInputRouter *)(a1 - 16));
}
