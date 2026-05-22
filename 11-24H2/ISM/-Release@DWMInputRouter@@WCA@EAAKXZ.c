/*
 * XREFs of ?Release@DWMInputRouter@@WCA@EAAKXZ @ 0x1800FE750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMInputRouter::Release(__int64 a1)
{
  return MPCInputRouter::Release((MPCInputRouter *)(a1 - 32));
}
