/*
 * XREFs of SymCryptTwistedEdwardsIsZero @ 0x140535DC0
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptModElementIsEqual @ 0x14052153C (SymCryptModElementIsEqual.c)
 *     SymCryptModElementIsZero @ 0x140521554 (SymCryptModElementIsZero.c)
 */

__int64 SymCryptTwistedEdwardsIsZero()
{
  int IsZero; // edi

  IsZero = SymCryptModElementIsZero();
  return IsZero & (unsigned int)SymCryptModElementIsEqual();
}
