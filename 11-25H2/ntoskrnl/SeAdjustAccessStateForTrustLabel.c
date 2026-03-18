/*
 * XREFs of SeAdjustAccessStateForTrustLabel @ 0x140780A30
 * Callers:
 *     <none>
 * Callees:
 *     SepAdjustAccessStateForConstraints @ 0x1408F6170 (SepAdjustAccessStateForConstraints.c)
 */

__int64 __fastcall SeAdjustAccessStateForTrustLabel(__int64 a1, __int64 a2, __int64 a3)
{
  return SepAdjustAccessStateForConstraints(a1, a2, 0LL, a3);
}
