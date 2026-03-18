/*
 * XREFs of SymCryptTwistedEdwardsIsZero @ 0x14052BE00
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptModElementIsEqual @ 0x140523C24 (SymCryptModElementIsEqual.c)
 *     SymCryptModElementIsZero @ 0x140523C3C (SymCryptModElementIsZero.c)
 */

__int64 SymCryptTwistedEdwardsIsZero()
{
  int IsZero; // edi

  IsZero = SymCryptModElementIsZero();
  return IsZero & (unsigned int)SymCryptModElementIsEqual();
}
