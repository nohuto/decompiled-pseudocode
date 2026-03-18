/*
 * XREFs of ?Release@CPassthroughEffect@@WBA@EAAKXZ @ 0x1802DBF20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPassthroughEffect::Release(__int64 a1)
{
  return CRadialGradientEffect::Release(a1 - 16);
}
